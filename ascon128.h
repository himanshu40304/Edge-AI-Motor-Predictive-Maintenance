#pragma once
#ifdef ARDUINO
  #include <Arduino.h>
#endif
#include <stdint.h>

typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct { u64 x0,x1,x2,x3,x4; } ascon_state_t;

#define ASCON_128_RATE  8
#define ASCON_128_PA    12
#define ASCON_128_PB    6
#define ASCON_128_IV    0x80400c0600000000ULL
#define ROR(x,n) (((x)>>(n))|((x)<<(64-(n))))

static inline void ascon_round(ascon_state_t* s, u8 C) {
    u64 t0,t1,t2,t3,t4;
    s->x2^=C;
    s->x0^=s->x4; s->x4^=s->x3; s->x2^=s->x1;
    t0=s->x0; t1=s->x1; t2=s->x2; t3=s->x3; t4=s->x4;
    t0=~t0; t1=~t1; t2=~t2; t3=~t3; t4=~t4;
    t0&=s->x1; t1&=s->x2; t2&=s->x3; t3&=s->x4; t4&=s->x0;
    s->x0^=t1; s->x1^=t2; s->x2^=t3; s->x3^=t4; s->x4^=t0;
    s->x1^=s->x0; s->x0^=s->x4; s->x3^=s->x2; s->x2=~s->x2;
    s->x0^=ROR(s->x0,19)^ROR(s->x0,28);
    s->x1^=ROR(s->x1,61)^ROR(s->x1,39);
    s->x2^=ROR(s->x2, 1)^ROR(s->x2, 6);
    s->x3^=ROR(s->x3,10)^ROR(s->x3,17);
    s->x4^=ROR(s->x4, 7)^ROR(s->x4,41);
}

static inline void ascon_permute(ascon_state_t* s, int rounds) {
    static const u8 RC[12]={
        0xf0,0xe1,0xd2,0xc3,0xb4,0xa5,
        0x96,0x87,0x78,0x69,0x5a,0x4b
    };
    for (int i=12-rounds;i<12;i++) ascon_round(s,RC[i]);
}

static inline u64 load64(const u8* b) {
    u64 x=0;
    for (int i=0;i<8;i++) x|=((u64)b[i])<<(56-8*i);
    return x;
}

static inline void store64(u8* b, u64 x) {
    for (int i=0;i<8;i++) b[i]=(u8)(x>>(56-8*i));
}

static inline u64 load_partial(const u8* b, int n) {
    u64 x=0;
    for (int i=0;i<n;i++) x|=((u64)b[i])<<(56-8*i);
    return x;
}

static inline void store_partial(u8* b, u64 x, int n) {
    for (int i=0;i<n;i++) b[i]=(u8)(x>>(56-8*i));
}

/*
 * ASCON-128 Authenticated Encryption
 *
 * ct     : output ciphertext buffer (must be ptlen+16 bytes)
 * pt     : plaintext input
 * ptlen  : plaintext length in bytes
 * ad     : associated data (authenticated, not encrypted)
 * adlen  : associated data length in bytes
 * nonce  : 16-byte unique nonce (increment per message)
 * key    : 16-byte secret key
 *
 * returns 0 on success
 * output length = ptlen + 16  (16 bytes = authentication tag)
 */
static int ascon128_encrypt_simple(
    u8*       ct,
    const u8* pt,    int ptlen,
    const u8* ad,    int adlen,
    const u8* nonce,
    const u8* key)
{
    ascon_state_t s;
    u64 K0=load64(key),   K1=load64(key+8);
    u64 N0=load64(nonce), N1=load64(nonce+8);

    /* Initialization */
    s.x0=ASCON_128_IV; s.x1=K0; s.x2=K1; s.x3=N0; s.x4=N1;
    ascon_permute(&s, ASCON_128_PA);
    s.x3^=K0; s.x4^=K1;

    /* Associated data */
    if (adlen>0) {
        while (adlen>=ASCON_128_RATE) {
            s.x0^=load64(ad);
            ascon_permute(&s, ASCON_128_PB);
            ad+=ASCON_128_RATE; adlen-=ASCON_128_RATE;
        }
        u8 buf[8]={0,0,0,0,0,0,0,0};
        memcpy(buf, ad, adlen);
        buf[adlen]=0x80;
        s.x0^=load64(buf);
        ascon_permute(&s, ASCON_128_PB);
    }
    s.x4^=1ULL;

    /* Encryption */
    int rem=ptlen;
    while (rem>=ASCON_128_RATE) {
        s.x0^=load64(pt);
        store64(ct, s.x0);
        ascon_permute(&s, ASCON_128_PB);
        pt+=ASCON_128_RATE; ct+=ASCON_128_RATE;
        rem-=ASCON_128_RATE;
    }
    {
        u8 buf[8]={0,0,0,0,0,0,0,0};
        if (rem>0) memcpy(buf, pt, rem);
        buf[rem]=0x80;
        s.x0^=load64(buf);
        store_partial(ct, s.x0, rem);
        ct+=rem;
    }

    /* Finalization */
    s.x1^=K0; s.x2^=K1;
    ascon_permute(&s, ASCON_128_PA);
    s.x3^=K0; s.x4^=K1;
    store64(ct,   s.x3);
    store64(ct+8, s.x4);

    return 0;
}

/*
 * ASCON-128 Authenticated Decryption
 *
 * pt     : output plaintext buffer (must be ctlen-16 bytes)
 * ct     : ciphertext input (includes 16-byte tag at end)
 * ctlen  : ciphertext length including tag
 * ad     : associated data
 * adlen  : associated data length
 * nonce  : same 16-byte nonce used during encryption
 * key    : same 16-byte key used during encryption
 *
 * returns  0 on success (tag verified)
 * returns -1 on failure (tag mismatch — data tampered)
 */
static int ascon128_decrypt_simple(
    u8*       pt,
    const u8* ct,    int ctlen,
    const u8* ad,    int adlen,
    const u8* nonce,
    const u8* key)
{
    if (ctlen<16) return -1;
    int ptlen=ctlen-16;

    ascon_state_t s;
    u64 K0=load64(key),   K1=load64(key+8);
    u64 N0=load64(nonce), N1=load64(nonce+8);

    /* Initialization */
    s.x0=ASCON_128_IV; s.x1=K0; s.x2=K1; s.x3=N0; s.x4=N1;
    ascon_permute(&s, ASCON_128_PA);
    s.x3^=K0; s.x4^=K1;

    /* Associated data */
    if (adlen>0) {
        while (adlen>=ASCON_128_RATE) {
            s.x0^=load64(ad);
            ascon_permute(&s, ASCON_128_PB);
            ad+=ASCON_128_RATE; adlen-=ASCON_128_RATE;
        }
        u8 buf[8]={0,0,0,0,0,0,0,0};
        memcpy(buf, ad, adlen);
        buf[adlen]=0x80;
        s.x0^=load64(buf);
        ascon_permute(&s, ASCON_128_PB);
    }
    s.x4^=1ULL;

    /* Decryption */
    int rem=ptlen;
    while (rem>=ASCON_128_RATE) {
        u64 c=load64(ct);
        store64(pt, s.x0^c);
        s.x0=c;
        ascon_permute(&s, ASCON_128_PB);
        ct+=ASCON_128_RATE; pt+=ASCON_128_RATE;
        rem-=ASCON_128_RATE;
    }
    {
        u8 buf[8]={0,0,0,0,0,0,0,0};
        if (rem>0) memcpy(buf, ct, rem);
        buf[rem]=0x80;
        u64 c=load64(buf);
        u64 mask=0xFFFFFFFFFFFFFFFFULL<<(8*(8-rem));
        store_partial(pt, s.x0^c, rem);
        s.x0=(s.x0&mask)|(c&~mask);
        ct+=rem;
    }

    /* Finalization */
    s.x1^=K0; s.x2^=K1;
    ascon_permute(&s, ASCON_128_PA);
    s.x3^=K0; s.x4^=K1;

    /* Tag verification — constant time comparison */
    u8 tag[16];
    store64(tag,   s.x3);
    store64(tag+8, s.x4);
    u8 diff=0;
    for (int i=0;i<16;i++) diff|=(tag[i]^ct[i]);

    return (diff==0) ? 0 : -1;
}
