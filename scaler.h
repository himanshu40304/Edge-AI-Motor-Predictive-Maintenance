// Auto-generated StandardScaler parameters
// Fit on training set — never edit manually
#pragma once

#define N_FEATURES 12

static const float SCALER_MEAN[12] = {
    1.80318490f,  // rms_x,
    1.47522494f,  // rms_y,
    1.03928744f,  // rms_z,
    2.57010775f,  // rms_mag,
    -0.80698532f,  // kurt_y,
    0.06094638f,  // skew_x,
    0.01393937f,  // skew_y,
    10.13211952f,  // peak_freq_hz,
    0.33090305f,  // band_energy_0_10,
    0.66671142f,  // band_energy_10_50,
    1.93691380f,  // crest_factor,
    0.77410273f  // spectral_entropy
};

static const float SCALER_STD[12] = {
    1.52748916f,  // rms_x,
    1.44205940f,  // rms_y,
    1.02644652f,  // rms_z,
    2.31706277f,  // rms_mag,
    5.33860367f,  // kurt_y,
    0.18782004f,  // skew_x,
    0.53388690f,  // skew_y,
    6.76845315f,  // peak_freq_hz,
    0.28931459f,  // band_energy_0_10,
    0.28883611f,  // band_energy_10_50,
    0.65505021f,  // crest_factor,
    0.12285416f  // spectral_entropy
};

// Call BEFORE predict() — normalizes features in place
inline void scale_features(float* feat) {
    for (int i = 0; i < N_FEATURES; i++)
        feat[i] = (feat[i] - SCALER_MEAN[i]) / SCALER_STD[i];
}
