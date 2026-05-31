// Auto-generated IIR filter coefficients
// 2nd-order Butterworth low-pass, cutoff=45Hz @ fs=100Hz
// Matches scipy.signal.butter(2, 45/50, btype='low')
#pragma once

#define IIR_B0  0.80059240f
#define IIR_B1  1.60118481f
#define IIR_B2  0.80059240f
#define IIR_A1  -1.56101808f
#define IIR_A2  -0.64135154f
#define DC_ALPHA  0.99f

// Low-pass filter — call once per sample per axis
// d[] is 2-element state array, zero-initialized at boot
inline float iir_lowpass(float x, float* d) {
    float y = IIR_B0*x + d[0];
    d[0] = IIR_B1*x + IIR_A1*y + d[1];
    d[1] = IIR_B2*x + IIR_A2*y;
    return y;
}

// DC removal — call BEFORE iir_lowpass
// dc is single float state variable, zero-initialized at boot
inline float remove_dc(float x, float* dc) {
    *dc = DC_ALPHA * (*dc) + (1.0f - DC_ALPHA) * x;
    return x - (*dc);
}
