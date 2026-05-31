/*
 * Motor Predictive Maintenance — Complete Production Firmware
 * ─────────────────────────────────────────────────────────────
 * Hardware : ESP32 + MPU-6050
 * Pipeline : Sensing → Inference → ASCON Encryption → MQTT
 * Broker   : broker.hivemq.com (public cloud broker)
 * Dashboard: Node-RED at http://localhost:1880/ui
 *
 * !! EDIT THE CONFIGURATION SECTION BEFORE FLASHING !!
 */

// ── Includes ──────────────────────────────────────────────
#include <Wire.h>
#include <math.h>
#include <string.h>
#include <WiFi.h>
#include <PubSubClient.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/semphr.h"
#include "classifier.h"
#include "scaler.h"
#include "iir_filter.h"
#include "ascon128.h"

// ═══════════════════════════════════════════════════════════
//  !! EDIT THESE BEFORE FLASHING !!
// ═══════════════════════════════════════════════════════════
#define WIFI_SSID         "AirFiber-8sgP0v"
#define WIFI_PASSWORD     "Manoj@1234"
#define MQTT_SERVER       "broker.hivemq.com"
#define MQTT_PORT         1883

// Make client ID unique — add your name or roll number
// Two devices with same ID will kick each other off the broker
#define MQTT_CLIENT_ID    "esp32_himanshu_motor_01"

// Make topics unique — same reason as above
#define TOPIC_STATE       "himanshu_motor/state"
#define TOPIC_HI          "himanshu_motor/health_index"
#define TOPIC_FEATURES    "himanshu_motor/features"
#define TOPIC_ENCRYPTED   "himanshu_motor/data"

// ASCON-128 key — 16 bytes — change to your own secret
static const uint8_t ASCON_KEY[16] = {
    0x48,0x69,0x6D,0x61, 0x6E,0x73,0x68,0x75,
    0x4D,0x6F,0x74,0x6F, 0x72,0x4B,0x65,0x79
};

// ═══════════════════════════════════════════════════════════
//  HARDWARE PINS
// ═══════════════════════════════════════════════════════════
#define MPU6050_ADDR      0x68
#define LED_NORMAL        25
#define LED_STOPPED       26
#define LED_UNBALANCE     27

// ═══════════════════════════════════════════════════════════
//  SIGNAL PROCESSING CONSTANTS
// ═══════════════════════════════════════════════════════════
#define SAMPLE_RATE       100
#define WINDOW_SIZE       200
#define STEP_SIZE         100
#define FFT_SIZE          256
#define BIN_10            26
#define BIN_50            128
#define RMS_MAG_THRESH    6.0f

// ═══════════════════════════════════════════════════════════
//  INTER-TASK MESSAGE STRUCTURES
// ═══════════════════════════════════════════════════════════
typedef struct {
    float    x, y, z;
    uint32_t ts_ms;
} SensorSample_t;

typedef struct {
    int      state;
    float    rms_mag;
    float    peak_freq;
    float    entropy;
    float    health_index;
    uint32_t ts_ms;
} InferenceResult_t;

#define CT_MAX 160
typedef struct {
    uint8_t  ct[CT_MAX];
    uint32_t ct_len;
    uint8_t  nonce[16];
    int      state;
    float    health_index;
    float    rms_mag;
    float    peak_freq;
    float    entropy;
    uint32_t ts_ms;
} EncryptedPayload_t;

// ═══════════════════════════════════════════════════════════
//  FREERTOS OBJECTS
// ═══════════════════════════════════════════════════════════
QueueHandle_t     sensorQ;
QueueHandle_t     resultQ;
QueueHandle_t     mqttQ;
SemaphoreHandle_t i2cMutex;

// ═══════════════════════════════════════════════════════════
//  GLOBAL DSP STATE
// ═══════════════════════════════════════════════════════════
static float bufX[WINDOW_SIZE];
static float bufY[WINDOW_SIZE];
static float bufZ[WINDOW_SIZE];
static float dcX=0, dcY=0, dcZ=0;
static float dX[2]={0,0}, dY[2]={0,0}, dZ[2]={0,0};
static float hannWin[WINDOW_SIZE];
static float fftBuf[FFT_SIZE*2];
static float offX=0, offY=0, offZ=0;

// ═══════════════════════════════════════════════════════════
//  WIFI AND MQTT
// ═══════════════════════════════════════════════════════════
static WiFiClient   wifiClient;
static PubSubClient mqtt(wifiClient);
static uint64_t     nonceCounter = 0;

const char* STATE_NAMES[] = {"NORMAL","STOPPED","UNBALANCE"};

// ═══════════════════════════════════════════════════════════
//  MPU-6050
// ═══════════════════════════════════════════════════════════
void mpu_init() {
    Wire.begin();
    Wire.setClock(400000);
    Wire.beginTransmission(MPU6050_ADDR);
    Wire.write(0x6B); Wire.write(0x00);
    Wire.endTransmission();
    Wire.beginTransmission(MPU6050_ADDR);
    Wire.write(0x1C); Wire.write(0x10);
    Wire.endTransmission();
    Wire.beginTransmission(MPU6050_ADDR);
    Wire.write(0x1A); Wire.write(0x03);
    Wire.endTransmission();
    delay(100);
}

void mpu_read(float &ax, float &ay, float &az) {
    Wire.beginTransmission(MPU6050_ADDR);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(MPU6050_ADDR, 6, true);
    int16_t rx=(Wire.read()<<8)|Wire.read();
    int16_t ry=(Wire.read()<<8)|Wire.read();
    int16_t rz=(Wire.read()<<8)|Wire.read();
    ax=(rx/4096.0f)*9.81f - offX;
    ay=(ry/4096.0f)*9.81f - offY;
    az=(rz/4096.0f)*9.81f - offZ;
}

void calibrate() {
    Serial.println("[CAL] Keep motor still for 3 seconds...");
    float sx=0,sy=0,sz=0;
    for (int i=0;i<300;i++) {
        float ax,ay,az;
        if (xSemaphoreTake(i2cMutex,pdMS_TO_TICKS(10))==pdTRUE) {
            mpu_read(ax,ay,az);
            xSemaphoreGive(i2cMutex);
        }
        sx+=ax; sy+=ay; sz+=az;
        delay(10);
    }
    offX=sx/300.0f;
    offY=sy/300.0f;
    offZ=sz/300.0f;
    Serial.printf("[CAL] Done. X=%.3f Y=%.3f Z=%.3f\n",
                  offX,offY,offZ);
}

// ═══════════════════════════════════════════════════════════
//  DSP
// ═══════════════════════════════════════════════════════════
void precompute_hanning() {
    for (int i=0;i<WINDOW_SIZE;i++)
        hannWin[i]=0.5f*(1.0f-cosf(
                  2.0f*M_PI*i/(WINDOW_SIZE-1)));
}

void run_fft(float* data, int n) {
    for (int i=1,j=0;i<n;i++) {
        int bit=n>>1;
        for (;j&bit;bit>>=1) j^=bit;
        j^=bit;
        if (i<j) {
            float t;
            t=data[2*i];   data[2*i]=data[2*j];   data[2*j]=t;
            t=data[2*i+1]; data[2*i+1]=data[2*j+1]; data[2*j+1]=t;
        }
    }
    for (int len=2;len<=n;len<<=1) {
        float ang=-2.0f*M_PI/len;
        float wR=cosf(ang),wI=sinf(ang);
        for (int i=0;i<n;i+=len) {
            float cR=1,cI=0;
            for (int j=0;j<len/2;j++) {
                float uR=data[2*(i+j)], uI=data[2*(i+j)+1];
                float vR=data[2*(i+j+len/2)]*cR
                        -data[2*(i+j+len/2)+1]*cI;
                float vI=data[2*(i+j+len/2)]*cI
                        +data[2*(i+j+len/2)+1]*cR;
                data[2*(i+j)]=uR+vR;
                data[2*(i+j)+1]=uI+vI;
                data[2*(i+j+len/2)]=uR-vR;
                data[2*(i+j+len/2)+1]=uI-vI;
                float nr=cR*wR-cI*wI;
                cI=cR*wI+cI*wR;
                cR=nr;
            }
        }
    }
}

// ═══════════════════════════════════════════════════════════
//  FEATURE EXTRACTION
// ═══════════════════════════════════════════════════════════
void extract_features(float* feat) {
    int N=WINDOW_SIZE;
    float sX2=0,sY2=0,sZ2=0,sX=0,sY=0,pkX=0;
    for (int i=0;i<N;i++) {
        sX2+=bufX[i]*bufX[i]; sY2+=bufY[i]*bufY[i];
        sZ2+=bufZ[i]*bufZ[i]; sX+=bufX[i]; sY+=bufY[i];
        if (fabsf(bufX[i])>pkX) pkX=fabsf(bufX[i]);
    }
    float rX=sqrtf(sX2/N), rY=sqrtf(sY2/N), rZ=sqrtf(sZ2/N);
    float mX=sX/N, mY=sY/N;
    feat[0]=rX; feat[1]=rY; feat[2]=rZ;
    feat[3]=sqrtf(rX*rX+rY*rY+rZ*rZ);
    feat[10]=(rX>1e-6f)?(pkX/rX):0.0f;

    float m2Y=0,m4Y=0,m3X=0,m2X=0,m3Y=0,m2Ys=0;
    for (int i=0;i<N;i++) {
        float dx=bufX[i]-mX, dy=bufY[i]-mY;
        m2Y+=dy*dy; m4Y+=dy*dy*dy*dy;
        m3X+=dx*dx*dx; m2X+=dx*dx;
        m3Y+=dy*dy*dy; m2Ys+=dy*dy;
    }
    float vY=m2Y/N, vX=m2X/N;
    feat[4]=(vY>1e-6f)?((m4Y/N)/(vY*vY))-3.0f:0.0f;
    feat[5]=(vX>1e-6f)?(m3X/N)/powf(vX,1.5f):0.0f;
    feat[6]=(vY>1e-6f)?(m3Y/N)/powf(vY,1.5f):0.0f;

    for (int i=0;i<FFT_SIZE*2;i++) fftBuf[i]=0;
    for (int i=0;i<N;i++) {
        fftBuf[2*i]=bufX[i]*hannWin[i];
        fftBuf[2*i+1]=0;
    }
    run_fft(fftBuf,FFT_SIZE);

    int nB=FFT_SIZE/2;
    float totE=0,pkM=0; int pkBin=0;
    float spec[FFT_SIZE/2];
    for (int i=0;i<nB;i++) {
        spec[i]=sqrtf(fftBuf[2*i]*fftBuf[2*i]
                    +fftBuf[2*i+1]*fftBuf[2*i+1]);
        totE+=spec[i];
        if (spec[i]>pkM){pkM=spec[i];pkBin=i;}
    }
    totE+=1e-9f;
    feat[7]=pkBin*((float)SAMPLE_RATE/FFT_SIZE);
    float e010=0,e1050=0;
    for (int i=0;    i<BIN_10;i++) e010 +=spec[i];
    for (int i=BIN_10;i<BIN_50;i++) e1050+=spec[i];
    feat[8]=e010/totE; feat[9]=e1050/totE;
    float ent=0;
    for (int i=0;i<nB;i++) {
        float p=spec[i]/totE;
        if (p>1e-9f) ent-=p*log2f(p);
    }
    feat[11]=ent/log2f((float)nB);
}

// ═══════════════════════════════════════════════════════════
//  PREDICTION
// ═══════════════════════════════════════════════════════════
int predict_state(float* raw) {
    if (raw[3]>RMS_MAG_THRESH) return 2;
    float sc[N_FEATURES];
    for (int i=0;i<N_FEATURES;i++) sc[i]=raw[i];
    scale_features(sc);
    return predict(sc);
}

float calc_health_index(float* raw) {
    // Always run the model for health index calculation
    // regardless of the threshold filter result
    // This gives a continuous health score even for unbalance
    float sc[N_FEATURES];
    for (int i=0; i<N_FEATURES; i++) sc[i]=raw[i];
    scale_features(sc);
    double* r = score(sc);

    // Softmax
    double p[3], mx=r[0], sm=0;
    for (int i=1;i<3;i++) if(r[i]>mx) mx=r[i];
    for (int i=0;i<3;i++){p[i]=exp(r[i]-mx);sm+=p[i];}
    for (int i=0;i<3;i++) p[i]/=sm;

    // Weighted health index
    // Normal=100, Unbalance=35, Stopped=0
    float hi = (float)(100.0*p[0] + 35.0*p[2] + 0.0*p[1]);

    // For severe unbalance above threshold, cap at 35
    // but still reflect model confidence as gradient 0-35
    if (raw[3] > RMS_MAG_THRESH) {
        // Scale health index between 0 and 35
        // based on how far RMS exceeds the threshold
        // More severe = lower health index
        float severity = raw[3] / RMS_MAG_THRESH;
        hi = 35.0f / severity;
        if (hi < 5.0f) hi = 5.0f;  // floor at 5
    }

    return hi;
}

// ═══════════════════════════════════════════════════════════
//  LED
// ═══════════════════════════════════════════════════════════
void set_leds(int s) {
    digitalWrite(LED_NORMAL,   s==0?HIGH:LOW);
    digitalWrite(LED_STOPPED,  s==1?HIGH:LOW);
    digitalWrite(LED_UNBALANCE,s==2?HIGH:LOW);
}

// ═══════════════════════════════════════════════════════════
//  NONCE — increments per message, guarantees uniqueness
// ═══════════════════════════════════════════════════════════
void next_nonce(uint8_t* n) {
    nonceCounter++;
    memcpy(n, &nonceCounter, 8);
    memset(n+8, 0, 8);
}

// ═══════════════════════════════════════════════════════════
//  WIFI
// ═══════════════════════════════════════════════════════════
void connect_wifi() {
    if (WiFi.status()==WL_CONNECTED) return;
    Serial.printf("[WiFi] Connecting to %s", WIFI_SSID);
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    int tries=0;
    while (WiFi.status()!=WL_CONNECTED && tries<40) {
        delay(500); Serial.print("."); tries++;
    }
    if (WiFi.status()==WL_CONNECTED)
        Serial.printf("\n[WiFi] Connected IP=%s\n",
                      WiFi.localIP().toString().c_str());
    else
        Serial.println("\n[WiFi] Failed — will retry");
}

// ═══════════════════════════════════════════════════════════
//  MQTT
// ═══════════════════════════════════════════════════════════
void connect_mqtt() {
    if (mqtt.connected()) return;
    Serial.print("[MQTT] Connecting to broker.hivemq.com...");
    if (mqtt.connect(MQTT_CLIENT_ID))
        Serial.println("connected");
    else
        Serial.printf("failed rc=%d\n", mqtt.state());
}

// ═══════════════════════════════════════════════════════════
//  TASK 1 — SENSING (Core 0, Priority 4)
//  Reads sensor every 10ms, applies DSP, sends to queue
// ═══════════════════════════════════════════════════════════
void taskSensing(void* pv) {
    TickType_t wake = xTaskGetTickCount();
    const TickType_t period = pdMS_TO_TICKS(10);

    for (;;) {
        vTaskDelayUntil(&wake, period);

        float ax,ay,az;
        if (xSemaphoreTake(i2cMutex,pdMS_TO_TICKS(3))==pdTRUE) {
            mpu_read(ax,ay,az);
            xSemaphoreGive(i2cMutex);
        } else continue;

        ax=remove_dc(ax,&dcX); ay=remove_dc(ay,&dcY);
        az=remove_dc(az,&dcZ);
        ax=iir_lowpass(ax,dX); ay=iir_lowpass(ay,dY);
        az=iir_lowpass(az,dZ);

        SensorSample_t s={ax,ay,az,(uint32_t)millis()};
        xQueueSend(sensorQ, &s, 0);
    }
}

// ═══════════════════════════════════════════════════════════
//  TASK 2 — INFERENCE (Core 1, Priority 3)
//  Accumulates window, extracts features, predicts
// ═══════════════════════════════════════════════════════════
void taskInference(void* pv) {
    static SensorSample_t lb[WINDOW_SIZE];
    int idx=0;

    for (;;) {
        SensorSample_t s;
        if (xQueueReceive(sensorQ,&s,pdMS_TO_TICKS(200))!=pdTRUE)
            continue;

        lb[idx++]=s;
        if (idx<WINDOW_SIZE) continue;

        for (int i=0;i<WINDOW_SIZE;i++) {
            bufX[i]=lb[i].x;
            bufY[i]=lb[i].y;
            bufZ[i]=lb[i].z;
        }

        float feat[N_FEATURES];
        extract_features(feat);

        InferenceResult_t r;
        r.state        = predict_state(feat);
        r.health_index = calc_health_index(feat);
        r.rms_mag      = feat[3];
        r.peak_freq    = feat[7];
        r.entropy      = feat[11];
        r.ts_ms        = lb[WINDOW_SIZE-1].ts_ms;

        xQueueSend(resultQ, &r, pdMS_TO_TICKS(50));
        set_leds(r.state);

        Serial.printf("[INF] %s HI=%.1f rms=%.3f "
                      "freq=%.1f ent=%.3f\n",
                      STATE_NAMES[r.state],
                      r.health_index, r.rms_mag,
                      r.peak_freq, r.entropy);

        memmove(lb, lb+STEP_SIZE,
                STEP_SIZE*sizeof(SensorSample_t));
        idx=STEP_SIZE;
    }
}

// ═══════════════════════════════════════════════════════════
//  TASK 3 — ENCRYPTION (Core 1, Priority 2)
//  Builds JSON, encrypts with ASCON-128
// ═══════════════════════════════════════════════════════════
void taskEncrypt(void* pv) {
    for (;;) {
        InferenceResult_t r;
        if (xQueueReceive(resultQ, &r,
                          pdMS_TO_TICKS(500)) != pdTRUE)
            continue;

        // Build plaintext JSON
        char pt[128];
        int ptLen = snprintf(pt, sizeof(pt),
            "{\"state\":%d,\"state_name\":\"%s\","
            "\"hi\":%.1f,\"rms\":%.3f,"
            "\"freq\":%.1f,\"ent\":%.3f,"
            "\"ts\":%lu}",
            r.state,
            STATE_NAMES[r.state],
            r.health_index,
            r.rms_mag,
            r.peak_freq,
            r.entropy,
            r.ts_ms
        );

        EncryptedPayload_t ep;
        ep.state        = r.state;
        ep.health_index = r.health_index;
        ep.rms_mag      = r.rms_mag;
        ep.peak_freq    = r.peak_freq;
        ep.entropy      = r.entropy;
        ep.ts_ms        = r.ts_ms;

        next_nonce(ep.nonce);

        const char* ad = MQTT_CLIENT_ID;

        int ret = ascon128_encrypt_simple(
            ep.ct,
            (const uint8_t*)pt,
            ptLen,
            (const uint8_t*)ad,
            (int)strlen(ad),
            ep.nonce,
            ASCON_KEY
        );

        if (ret != 0) {
            Serial.println("[ENC] FAILED");
            continue;
        }

        // ── THIS IS THE CRITICAL LINE ─────────────────────
        // ascon128_encrypt_simple does not return the length
        // it must be calculated manually as ptLen + 16
        // 16 = ASCON authentication tag size
        ep.ct_len = (uint32_t)ptLen + 16u;
        // ─────────────────────────────────────────────────

        Serial.printf("[ENC] OK %d -> %lu bytes\n",
                      ptLen, (unsigned long)ep.ct_len);

        xQueueSend(mqttQ, &ep, pdMS_TO_TICKS(100));
    }
}

// ═══════════════════════════════════════════════════════════
//  TASK 4 — MQTT (Core 1, Priority 1)
//  Publishes encrypted + plaintext topics to HiveMQ
// ═══════════════════════════════════════════════════════════
void taskMQTT(void* pv) {
    mqtt.setServer(MQTT_SERVER, MQTT_PORT);
    mqtt.setBufferSize(512);

    connect_wifi();
    connect_mqtt();

    for (;;) {
        // Maintain connections
        if (WiFi.status()!=WL_CONNECTED) connect_wifi();
        if (!mqtt.connected()) connect_mqtt();
        mqtt.loop();

        EncryptedPayload_t ep;
        if (xQueueReceive(mqttQ,&ep,pdMS_TO_TICKS(100))!=pdTRUE)
            continue;

        if (!mqtt.connected()) {
            Serial.println("[MQTT] Dropped — not connected");
            continue;
        }

        // ── Publish 1: encrypted data as nonce:hex ────────
        char hexBuf[CT_MAX*2+35];
        int pos=0;
        for (int i=0;i<16;i++)
            pos+=sprintf(hexBuf+pos,"%02X",ep.nonce[i]);
        hexBuf[pos++]=':';
        for (uint32_t i=0;i<ep.ct_len;i++)
            pos+=sprintf(hexBuf+pos,"%02X",ep.ct[i]);
        hexBuf[pos]='\0';
        mqtt.publish(TOPIC_ENCRYPTED, hexBuf);

        // ── Publish 2: state string ───────────────────────
        mqtt.publish(TOPIC_STATE, STATE_NAMES[ep.state]);

        // ── Publish 3: health index ───────────────────────
        char hi[10];
        snprintf(hi,sizeof(hi),"%.1f",ep.health_index);
        mqtt.publish(TOPIC_HI, hi);

        // ── Publish 4: features JSON for gauges ───────────
        char feat_json[128];
        snprintf(feat_json,sizeof(feat_json),
            "{\"rms_mag\":%.3f,"
            "\"peak_freq\":%.1f,"
            "\"entropy\":%.3f}",
            ep.rms_mag, ep.peak_freq, ep.entropy);
        mqtt.publish(TOPIC_FEATURES, feat_json);

        Serial.printf("[MQTT] Published %s HI=%s\n",
                      STATE_NAMES[ep.state], hi);
    }
}

// ═══════════════════════════════════════════════════════════
//  SETUP
// ═══════════════════════════════════════════════════════════
void setup() {
    Serial.begin(115200);
    delay(500);
    Serial.println("\n[BOOT] Motor Predictive Maintenance");
    Serial.printf("[BOOT] Free heap: %d bytes\n",
                  esp_get_free_heap_size());

    pinMode(LED_NORMAL,    OUTPUT);
    pinMode(LED_STOPPED,   OUTPUT);
    pinMode(LED_UNBALANCE, OUTPUT);
    digitalWrite(LED_NORMAL,    HIGH);
    digitalWrite(LED_STOPPED,   HIGH);
    digitalWrite(LED_UNBALANCE, HIGH);
    delay(500);
    digitalWrite(LED_NORMAL,    LOW);
    digitalWrite(LED_STOPPED,   LOW);
    digitalWrite(LED_UNBALANCE, LOW);

    i2cMutex = xSemaphoreCreateMutex();
    mpu_init();
    calibrate();
    precompute_hanning();

    sensorQ = xQueueCreate(400, sizeof(SensorSample_t));
    resultQ = xQueueCreate(5,   sizeof(InferenceResult_t));
    mqttQ   = xQueueCreate(5,   sizeof(EncryptedPayload_t));

    if (!sensorQ||!resultQ||!mqttQ||!i2cMutex) {
        Serial.println("[ERROR] FreeRTOS init failed");
        while(1) delay(100);
    }

    xTaskCreatePinnedToCore(taskSensing,  "Sense",
                            4096,  NULL, 4,
                            NULL, 0);
    xTaskCreatePinnedToCore(taskInference,"Infer",
                            16384, NULL, 3,
                            NULL, 1);
    xTaskCreatePinnedToCore(taskEncrypt,  "Crypt",
                            8192,  NULL, 2,
                            NULL, 1);
    xTaskCreatePinnedToCore(taskMQTT,     "MQTT",
                            8192,  NULL, 1,
                            NULL, 1);

    Serial.println("[BOOT] All tasks running");
    Serial.printf("[BOOT] Free heap after tasks: %d bytes\n",
                  esp_get_free_heap_size());
}

void loop() {
    vTaskDelete(NULL);
}