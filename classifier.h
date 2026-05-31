// Auto-generated XGBoost classifier
// XGBoost version: 1.7.6
// Trees: 300 | Classes: 3 | Features: 12
// 0=Normal  1=Stopped  2=Unbalance
// DO NOT EDIT — regenerate from notebook if model changes

#pragma once
#ifndef expf
#  ifdef __cplusplus
extern "C" double exp(double);
#  else
extern double exp(double);
#  endif
#endif

#define N_FEATURES_MODEL 12
#define N_CLASSES        3
#define N_TREES          300

// ── Feature names (for reference) ────────────────────────
// 
//0: rms_x// 1: rms_y// 2: rms_z// 3: rms_mag// 4: kurt_y// 5: skew_x// 6: skew_y// 7: peak_freq_hz// 8: band_energy_0_10// 9: band_energy_10_50// 10: crest_factor// 11: spectral_entropy

// ── Individual tree functions ─────────────────────────────
static double tree_0(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.14399999;
    } else {
    return -0.07259788;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.38603741f) {
    if (input[10] < -0.34290671f) {
    return 0.04285714;
    } else {
    if (input[0] < -0.54398954f) {
    return -0.07482680;
    } else {
    if (input[1] < -0.48868364f) {
    return -0.05454546;
    } else {
    return 0.04285714;
    }
    }
    }
    } else {
    if (input[8] < 0.91679180f) {
    if (input[4] < 0.14883695f) {
    return 0.13761468;
    } else {
    return -0.05172414;
    }
    } else {
    return -0.06666668;
    }
    }
    } else {
    return -0.07492584;
    }
    } else {
    if (input[0] < -0.88126719f) {
    return -0.04800000;
    } else {
    return 0.04285714;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.14161490;
    } else {
    return -0.06857144;
    }
    } else {
    if (input[7] < -0.43969050f) {
    return -0.00000000;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.07426069;
    } else {
    if (input[0] < 1.57120228f) {
    return -0.00000000;
    } else {
    return -0.05454546;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.13156056f) {
    if (input[10] < 0.22147694f) {
    return 0.13043480;
    } else {
    return -0.06461539;
    }
    } else {
    if (input[2] < -1.39382815f) {
    if (input[0] < -0.25336126f) {
    return -0.04285715;
    } else {
    return 0.08571428;
    }
    } else {
    return 0.14982840;
    }
    }
    } else {
    return -0.05675676;
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < 0.08415174f) {
    if (input[1] < -0.40132582f) {
    return -0.04285715;
    } else {
    return 0.10344827;
    }
    } else {
    if (input[4] < -0.56513029f) {
    if (input[0] < -0.82073873f) {
    return -0.05454546;
    } else {
    return -0.00000000;
    }
    } else {
    return -0.07484204;
    }
    }
    } else {
    if (input[3] < -0.83999628f) {
    return -0.04285715;
    } else {
    return 0.13548388;
    }
    }
    }
    }
}

static double tree_1(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[1] < -0.66859758f) {
    return -0.00000000;
    } else {
    return -0.06122450;
    }
    } else {
    if (input[1] < -0.39710361f) {
    return 0.13608247;
    } else {
    return -0.00000000;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.06393444;
    } else {
    return 0.12000000;
    }
    } else {
    if (input[2] < -1.54638696f) {
    return 0.04285714;
    } else {
    if (input[11] < 0.83516049f) {
    return -0.07494380;
    } else {
    if (input[0] < -0.80200779f) {
    return 0.04285714;
    } else {
    return -0.06623378;
    }
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.05172414;
    } else {
    if (input[1] < 0.00811173f) {
    if (input[3] < 0.11306211f) {
    if (input[8] < -1.32616079f) {
    return 0.04285714;
    } else {
    return 0.14966264;
    }
    } else {
    return 0.04285714;
    }
    } else {
    return -0.00000000;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.11351352;
    } else {
    return -0.04285715;
    }
    } else {
    return -0.06923078;
    }
    }
    }
}

static double tree_2(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.06741574;
    } else {
    if (input[2] < 0.16371366f) {
    return -0.00000000;
    } else {
    return 0.10909092;
    }
    }
    } else {
    return 0.14975779;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.07497629;
    } else {
    return 0.12000000;
    }
    }
}

static double tree_3(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.12542400;
    } else {
    return -0.06988963;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.38603741f) {
    if (input[10] < -0.34290671f) {
    return 0.03910840;
    } else {
    if (input[1] < -0.12596667f) {
    return -0.07204502;
    } else {
    if (input[0] < -0.54398954f) {
    return -0.05219966;
    } else {
    return 0.04006495;
    }
    }
    }
    } else {
    if (input[8] < 0.91679180f) {
    if (input[4] < 0.14883695f) {
    return 0.12109611;
    } else {
    return -0.04997019;
    }
    } else {
    return -0.06433573;
    }
    }
    } else {
    return -0.07213000;
    }
    } else {
    if (input[1] < -0.76330286f) {
    return -0.04654304;
    } else {
    return 0.04110294;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.12376423;
    } else {
    return -0.06591224;
    }
    } else {
    if (input[11] < -1.33011889f) {
    return 0.00061342;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.07149064;
    } else {
    if (input[0] < 1.60852098f) {
    return 0.00061342;
    } else {
    return -0.04980427;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.13156056f) {
    if (input[10] < 0.22147694f) {
    return 0.11564864;
    } else {
    return -0.06227328;
    }
    } else {
    if (input[2] < -1.39382815f) {
    if (input[0] < -0.25336126f) {
    return -0.04189822;
    } else {
    return 0.07880649;
    }
    } else {
    return 0.12973154;
    }
    }
    } else {
    return -0.05446690;
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < 0.08415174f) {
    if (input[1] < -0.40132582f) {
    return -0.04112795;
    } else {
    return 0.09505598;
    }
    } else {
    if (input[4] < -0.56513029f) {
    if (input[8] < -0.43034694f) {
    return 0.00231942;
    } else {
    return -0.05274615;
    }
    } else {
    return -0.07205181;
    }
    }
    } else {
    if (input[3] < -0.83999628f) {
    return -0.04152024;
    } else {
    return 0.11936659;
    }
    }
    }
    }
}

static double tree_4(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[9] < 0.36364180f) {
    return 0.00188542;
    } else {
    return -0.05909072;
    }
    } else {
    if (input[9] < 0.69568801f) {
    return 0.12047620;
    } else {
    return -0.00118907;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.06164760;
    } else {
    return 0.10720920;
    }
    } else {
    if (input[2] < -1.54638696f) {
    return 0.04035198;
    } else {
    if (input[11] < 0.83516049f) {
    return -0.07214826;
    } else {
    if (input[1] < -0.67006064f) {
    return 0.04133698;
    } else {
    return -0.06379302;
    }
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04995580;
    } else {
    if (input[3] < 0.30648720f) {
    if (input[2] < 0.09369753f) {
    if (input[8] < -1.32616079f) {
    return 0.04002130;
    } else {
    return 0.12962630;
    }
    } else {
    return 0.03770956;
    }
    } else {
    return -0.00094869;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.10262255;
    } else {
    return -0.04125995;
    }
    } else {
    return -0.06667467;
    }
    }
    }
}

static double tree_5(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.06506923;
    } else {
    if (input[4] < -0.13985364f) {
    return -0.00099279;
    } else {
    return 0.09951898;
    }
    }
    } else {
    return 0.12968752;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.07218071;
    } else {
    return 0.10700386;
    }
    }
}

static double tree_6(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.11171464;
    } else {
    return -0.06749094;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[11] < 0.58393097f) {
    if (input[9] < -0.95112276f) {
    if (input[2] < -0.54568517f) {
    return 0.00182697;
    } else {
    return -0.06455187;
    }
    } else {
    if (input[0] < -0.76189566f) {
    return -0.04979134;
    } else {
    if (input[2] < 0.29047567f) {
    return 0.10954278;
    } else {
    return 0.03552327;
    }
    }
    }
    } else {
    if (input[3] < -0.15973741f) {
    return -0.06960548;
    } else {
    return 0.00192859;
    }
    }
    } else {
    return -0.06967487;
    }
    } else {
    if (input[2] < -0.62588632f) {
    return -0.04511111;
    } else {
    return 0.03947732;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.11048666;
    } else {
    return -0.06351425;
    }
    } else {
    if (input[7] < -0.43969050f) {
    return 0.00134576;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06902869;
    } else {
    if (input[2] < 1.76396179f) {
    return 0.00168575;
    } else {
    return -0.05125698;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.13156056f) {
    if (input[10] < 0.22147694f) {
    return 0.10410817;
    } else {
    return -0.06020636;
    }
    } else {
    if (input[2] < -1.51547813f) {
    return -0.00196758;
    } else {
    if (input[0] < -1.26045763f) {
    if (input[1] < -0.25523520f) {
    return -0.00435308;
    } else {
    return 0.07992794;
    }
    } else {
    return 0.11519095;
    }
    }
    }
    } else {
    return -0.05233174;
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < 0.08415174f) {
    if (input[1] < -0.40132582f) {
    return -0.03947375;
    } else {
    return 0.08800858;
    }
    } else {
    if (input[4] < -0.56513029f) {
    if (input[1] < -0.51456773f) {
    return -0.05101294;
    } else {
    return 0.00456188;
    }
    } else {
    return -0.06959900;
    }
    }
    } else {
    if (input[3] < -0.83999628f) {
    return -0.04018307;
    } else {
    return 0.10712051;
    }
    }
    }
    }
}

static double tree_7(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[8] < -0.27433690f) {
    return -0.05696162;
    } else {
    return 0.00315838;
    }
    } else {
    if (input[9] < 0.69568801f) {
    return 0.10819262;
    } else {
    return -0.00100456;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.05950750;
    } else {
    return 0.09707921;
    }
    } else {
    if (input[2] < -1.54638696f) {
    return 0.03806617;
    } else {
    if (input[11] < 0.83516049f) {
    return -0.06969372;
    } else {
    if (input[2] < -0.59465003f) {
    return 0.03991514;
    } else {
    return -0.06155533;
    }
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04824059;
    } else {
    if (input[1] < 0.00811173f) {
    if (input[3] < 0.11306211f) {
    if (input[8] < -1.32616079f) {
    return 0.03744267;
    } else {
    return 0.11506867;
    }
    } else {
    return 0.03682593;
    }
    } else {
    return -0.00175882;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.09377385;
    } else {
    return -0.03971212;
    }
    } else {
    return -0.06435052;
    }
    }
    }
}

static double tree_8(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.06292057;
    } else {
    if (input[7] < -1.45803785f) {
    return 0.09155075;
    } else {
    return -0.00189674;
    }
    }
    } else {
    return 0.11512423;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06972761;
    } else {
    return 0.09674225;
    }
    }
}

static double tree_9(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.10123456;
    } else {
    return -0.06534535;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[11] < 0.58393097f) {
    if (input[9] < -0.95112276f) {
    if (input[3] < -0.28725594f) {
    return 0.00249669;
    } else {
    return -0.06260780;
    }
    } else {
    if (input[0] < -0.76189566f) {
    return -0.04801315;
    } else {
    if (input[2] < 0.29047567f) {
    return 0.09968922;
    } else {
    return 0.03330402;
    }
    }
    }
    } else {
    if (input[3] < -0.15973741f) {
    return -0.06744928;
    } else {
    return 0.00196723;
    }
    }
    } else {
    return -0.06751402;
    }
    } else {
    if (input[8] < -0.02076756f) {
    return 0.03796588;
    } else {
    return -0.04370873;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.10027736;
    } else {
    return -0.06134161;
    }
    } else {
    if (input[11] < -1.33011889f) {
    return 0.00177499;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06687977;
    } else {
    if (input[9] < -1.41838443f) {
    return -0.04671044;
    } else {
    return 0.00222074;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.34939706f) {
    if (input[10] < 0.20528503f) {
    return 0.07196578;
    } else {
    return -0.05359608;
    }
    } else {
    if (input[2] < -1.51547813f) {
    return -0.00277287;
    } else {
    if (input[0] < -1.26045763f) {
    if (input[1] < -0.55237317f) {
    return -0.04467217;
    } else {
    return 0.08088288;
    }
    } else {
    if (input[5] < 2.33873081f) {
    return 0.10413188;
    } else {
    return 0.03070380;
    }
    }
    }
    }
    } else {
    return -0.05033357;
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < 0.08415174f) {
    if (input[1] < -0.40132582f) {
    return -0.03789091;
    } else {
    return 0.08205133;
    }
    } else {
    if (input[4] < -0.56513029f) {
    if (input[9] < 0.32416922f) {
    return -0.04919889;
    } else {
    return 0.00629893;
    }
    } else {
    return -0.06744000;
    }
    }
    } else {
    if (input[3] < -0.83999628f) {
    return -0.03886101;
    } else {
    return 0.09754609;
    }
    }
    }
    }
}

static double tree_10(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[9] < 0.36364180f) {
    return 0.00383204;
    } else {
    return -0.05522739;
    }
    } else {
    if (input[1] < -0.39710361f) {
    return 0.09905244;
    } else {
    return -0.00214974;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.05750954;
    } else {
    return 0.08894417;
    }
    } else {
    if (input[2] < -1.54638696f) {
    return 0.03644441;
    } else {
    if (input[1] < -1.29404783f) {
    if (input[0] < -0.12088712f) {
    return 0.00299725;
    } else {
    return -0.04097712;
    }
    } else {
    if (input[0] < -0.91267395f) {
    if (input[1] < -0.72045344f) {
    return 0.04307128;
    } else {
    return -0.06014664;
    }
    } else {
    return -0.06757141;
    }
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04658374;
    } else {
    if (input[3] < 0.30648720f) {
    if (input[2] < 0.09369753f) {
    if (input[8] < -1.32616079f) {
    return 0.03509145;
    } else {
    return 0.10408661;
    }
    } else {
    return 0.03125100;
    }
    } else {
    return -0.00173185;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.08618709;
    } else {
    return -0.03821760;
    }
    } else {
    return -0.06223373;
    }
    }
    }
}

static double tree_11(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.06106746;
    } else {
    if (input[9] < -1.02884412f) {
    return 0.08478061;
    } else {
    return -0.00272565;
    }
    }
    } else {
    return 0.10413255;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06756970;
    } else {
    return 0.08847057;
    }
    }
}

static double tree_12(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.09300151;
    } else {
    return -0.06344154;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.58393097f) {
    if (input[2] < 0.47840393f) {
    if (input[0] < -0.76189566f) {
    return -0.04365578;
    } else {
    if (input[1] < 0.32122871f) {
    return 0.09360447;
    } else {
    return -0.03892003;
    }
    }
    } else {
    return -0.06159417;
    }
    } else {
    if (input[3] < 0.30458325f) {
    return -0.06554845;
    } else {
    return 0.00461604;
    }
    }
    } else {
    return -0.06562470;
    }
    } else {
    if (input[10] < 0.86950362f) {
    return 0.03655489;
    } else {
    return -0.04233900;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.09222057;
    } else {
    return -0.05936361;
    }
    } else {
    if (input[7] < -0.43969050f) {
    return 0.00257535;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06494543;
    } else {
    if (input[9] < -1.27456069f) {
    return -0.04807835;
    } else {
    return 0.00278694;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[0] < -1.17922044f) {
    if (input[1] < -0.58730197f) {
    if (input[2] < -0.48351771f) {
    return -0.05700900;
    } else {
    return 0.00093942;
    }
    } else {
    return 0.08317628;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[10] < 1.32038260f) {
    if (input[0] < -1.11980057f) {
    return 0.03588701;
    } else {
    if (input[2] < -1.46021843f) {
    return 0.03070784;
    } else {
    return 0.09564117;
    }
    }
    } else {
    if (input[3] < -0.72672582f) {
    return -0.05532481;
    } else {
    return 0.08558887;
    }
    }
    } else {
    return -0.04845677;
    }
    }
    } else {
    if (input[2] < -0.20494127f) {
    if (input[10] < -0.05192938f) {
    return 0.03141621;
    } else {
    if (input[8] < 0.64427364f) {
    return -0.06556526;
    } else {
    return 0.00128430;
    }
    }
    } else {
    if (input[0] < -0.93652296f) {
    return -0.03427458;
    } else {
    return 0.08878031;
    }
    }
    }
    }
}

static double tree_13(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[8] < -0.27433690f) {
    return -0.05349377;
    } else {
    return 0.00446443;
    }
    } else {
    if (input[1] < -0.39710361f) {
    return 0.09162391;
    } else {
    return -0.00211801;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.05562208;
    } else {
    return 0.08270156;
    }
    } else {
    if (input[2] < -1.54638696f) {
    return 0.03495806;
    } else {
    if (input[11] < 0.83516049f) {
    return -0.06563051;
    } else {
    if (input[10] < 0.88786042f) {
    return -0.05733746;
    } else {
    return 0.03776554;
    }
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04498773;
    } else {
    if (input[1] < 0.00811173f) {
    if (input[3] < 0.11306211f) {
    if (input[8] < -1.32616079f) {
    return 0.03294021;
    } else {
    return 0.09553802;
    }
    } else {
    return 0.03204531;
    }
    } else {
    return -0.00314689;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.07986835;
    } else {
    return -0.03677798;
    }
    } else {
    return -0.06030093;
    }
    }
    }
}

static double tree_14(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05929458;
    } else {
    if (input[9] < -1.02884412f) {
    return 0.07842862;
    } else {
    return -0.00254545;
    }
    }
    } else {
    return 0.09558827;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06566789;
    } else {
    return 0.08168049;
    }
    }
}

static double tree_15(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.08639301;
    } else {
    return -0.06171832;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[11] < 0.74000406f) {
    if (input[9] < -0.95112276f) {
    if (input[2] < -0.54568517f) {
    return 0.00278757;
    } else {
    return -0.05962155;
    }
    } else {
    if (input[0] < -0.76189566f) {
    return -0.04963239;
    } else {
    if (input[4] < 0.13581426f) {
    return 0.08665096;
    } else {
    return 0.02808906;
    }
    }
    }
    } else {
    return -0.06385586;
    }
    } else {
    return -0.06392728;
    }
    } else {
    if (input[10] < 0.86950362f) {
    return 0.03439366;
    } else {
    return -0.04066226;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.08572928;
    } else {
    return -0.05755261;
    }
    } else {
    if (input[7] < -0.43969050f) {
    return 0.00263874;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06324258;
    } else {
    if (input[2] < 1.76396179f) {
    return 0.00365525;
    } else {
    return -0.04654385;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[0] < -1.17922044f) {
    if (input[1] < -0.58730197f) {
    if (input[8] < -0.63959861f) {
    return 0.00195361;
    } else {
    return -0.05526967;
    }
    } else {
    return 0.07845356;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[10] < 1.32038260f) {
    if (input[0] < -1.11980057f) {
    return 0.03362890;
    } else {
    if (input[2] < -1.46021843f) {
    return 0.02831850;
    } else {
    return 0.08883819;
    }
    }
    } else {
    if (input[3] < -0.72672582f) {
    return -0.05359458;
    } else {
    return 0.07972440;
    }
    }
    } else {
    return -0.04668648;
    }
    }
    } else {
    if (input[2] < -0.20494127f) {
    if (input[10] < -0.05192938f) {
    return 0.02970925;
    } else {
    if (input[9] < -0.78080320f) {
    return 0.00165610;
    } else {
    return -0.06387842;
    }
    }
    } else {
    if (input[0] < -0.93652296f) {
    return -0.03292156;
    } else {
    return 0.08281612;
    }
    }
    }
    }
}

static double tree_16(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -0.91267395f) {
    if (input[10] < -0.10943857f) {
    if (input[8] < -0.10127976f) {
    return -0.05938777;
    } else {
    return 0.00816349;
    }
    } else {
    if (input[1] < -0.16550386f) {
    return 0.09045541;
    } else {
    return -0.04342397;
    }
    }
    } else {
    if (input[3] < -1.16540217f) {
    if (input[10] < -0.12388328f) {
    return -0.05300344;
    } else {
    return 0.07017791;
    }
    } else {
    if (input[2] < -1.31023300f) {
    if (input[4] < 0.49082616f) {
    return -0.05076092;
    } else {
    return 0.03882732;
    }
    } else {
    return -0.06398753;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04349303;
    } else {
    if (input[1] < 0.00811173f) {
    if (input[1] < -0.35219604f) {
    if (input[8] < -1.32616079f) {
    return 0.03096612;
    } else {
    return 0.08891286;
    }
    } else {
    if (input[2] < -0.51728320f) {
    return 0.08125611;
    } else {
    return -0.02805052;
    }
    }
    } else {
    return -0.00299174;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.07429586;
    } else {
    return -0.03573188;
    }
    } else {
    return -0.05855440;
    }
    }
    }
}

static double tree_17(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05774329;
    } else {
    if (input[7] < -1.45803785f) {
    return 0.07343889;
    } else {
    return -0.00317827;
    }
    }
    } else {
    return 0.08879218;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06398844;
    } else {
    return 0.07601739;
    }
    }
}

static double tree_18(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.08099129;
    } else {
    return -0.06014883;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.58393097f) {
    if (input[2] < 0.47840393f) {
    if (input[0] < -0.76189566f) {
    return -0.04043801;
    } else {
    if (input[1] < 0.32122871f) {
    return 0.08191989;
    } else {
    return -0.03554558;
    }
    }
    } else {
    return -0.05828321;
    }
    } else {
    if (input[3] < 0.30458325f) {
    return -0.06237272;
    } else {
    return 0.00470090;
    }
    }
    } else {
    return -0.06245241;
    }
    } else {
    if (input[8] < -0.02076756f) {
    return 0.03316500;
    } else {
    return -0.03939115;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.08033770;
    } else {
    return -0.05588502;
    }
    } else {
    if (input[11] < -1.33011889f) {
    return 0.00330322;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06174959;
    } else {
    if (input[9] < -1.41838443f) {
    return -0.04215151;
    } else {
    return 0.00370264;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[3] < -1.33661675f) {
    if (input[10] < 0.20528503f) {
    return 0.05932537;
    } else {
    return -0.05240941;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.64384556f) {
    return -0.05315517;
    } else {
    return 0.07751053;
    }
    } else {
    if (input[2] < -1.51547813f) {
    return -0.00469539;
    } else {
    if (input[10] < 1.57194638f) {
    return 0.08335513;
    } else {
    if (input[2] < -0.39245409f) {
    return -0.04173413;
    } else {
    return 0.07368289;
    }
    }
    }
    }
    } else {
    return -0.04501015;
    }
    }
    } else {
    if (input[2] < -0.20494127f) {
    if (input[10] < -0.05192938f) {
    return 0.02814208;
    } else {
    if (input[8] < 0.64427364f) {
    return -0.06238532;
    } else {
    return 0.00276140;
    }
    }
    } else {
    if (input[3] < -0.49927533f) {
    return -0.00863861;
    } else {
    return 0.07722773;
    }
    }
    }
    }
}

static double tree_19(float* input) {
    if (input[11] < 0.88932085f) {
    if (input[0] < -0.91267395f) {
    if (input[10] < -0.10943857f) {
    if (input[9] < 0.13283291f) {
    return 0.00923340;
    } else {
    return -0.05789373;
    }
    } else {
    if (input[1] < -0.16550386f) {
    return 0.08471576;
    } else {
    return -0.04184462;
    }
    }
    } else {
    if (input[3] < -1.16540217f) {
    if (input[10] < -0.12388328f) {
    return -0.05127997;
    } else {
    return 0.06599405;
    }
    } else {
    if (input[2] < -1.31023300f) {
    if (input[11] < -0.01637221f) {
    return -0.04937614;
    } else {
    return 0.03813417;
    }
    } else {
    return -0.06250010;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04206387;
    } else {
    if (input[1] < 0.00811173f) {
    if (input[1] < -0.35219604f) {
    if (input[8] < -1.32616079f) {
    return 0.02914883;
    } else {
    return 0.08340081;
    }
    } else {
    if (input[11] < 1.19001973f) {
    return -0.02788453;
    } else {
    return 0.07645031;
    }
    }
    } else {
    return -0.00282535;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.06954945;
    } else {
    return -0.03472272;
    }
    } else {
    return -0.05694548;
    }
    }
    }
}

static double tree_20(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05619645;
    } else {
    if (input[4] < -0.13985364f) {
    return -0.00371763;
    } else {
    return 0.06917562;
    }
    }
    } else {
    return 0.08328618;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06250249;
    } else {
    return 0.07122445;
    }
    }
}

static double tree_21(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.07650923;
    } else {
    return -0.05874233;
    }
    } else {
    if (input[7] < -0.44475323f) {
    if (input[9] < 0.94110417f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.54398954f) {
    if (input[10] < -0.34290671f) {
    return 0.02177615;
    } else {
    return -0.06105246;
    }
    } else {
    if (input[4] < 0.14883695f) {
    if (input[8] < 0.98595214f) {
    if (input[1] < -0.83832526f) {
    return -0.03366195;
    } else {
    return 0.07759796;
    }
    } else {
    return -0.04359816;
    }
    } else {
    return -0.05417123;
    }
    }
    } else {
    return -0.06111788;
    }
    } else {
    if (input[2] < -0.62588632f) {
    return -0.03815227;
    } else {
    return 0.03200561;
    }
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.07584915;
    } else {
    return -0.05433950;
    }
    } else {
    if (input[7] < -0.43969050f) {
    return 0.00369103;
    } else {
    if (input[0] < -0.12945353f) {
    return -0.06036963;
    } else {
    if (input[2] < 1.76396179f) {
    return 0.00447028;
    } else {
    return -0.04375034;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[3] < -1.33661675f) {
    if (input[10] < 0.20528503f) {
    return 0.05611777;
    } else {
    return -0.05078673;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.08557892f) {
    if (input[3] < -0.59236318f) {
    return -0.05166214;
    } else {
    return 0.06889173;
    }
    } else {
    if (input[2] < -1.51547813f) {
    return -0.00479419;
    } else {
    if (input[10] < 1.57194638f) {
    return 0.07882313;
    } else {
    if (input[2] < -0.39245409f) {
    return -0.03603893;
    } else {
    return 0.06959455;
    }
    }
    }
    }
    } else {
    return -0.04341597;
    }
    }
    } else {
    if (input[2] < -0.20494127f) {
    if (input[10] < -0.05192938f) {
    return 0.02669782;
    } else {
    if (input[3] < -0.02215635f) {
    return -0.06105841;
    } else {
    return 0.00349784;
    }
    }
    } else {
    if (input[3] < -0.49927533f) {
    return -0.00812441;
    } else {
    return 0.07295373;
    }
    }
    }
    }
}

static double tree_22(float* input) {
    if (input[11] < 0.88143563f) {
    if (input[0] < -1.08557892f) {
    if (input[10] < -0.04480376f) {
    if (input[8] < -0.27433690f) {
    return -0.04891574;
    } else {
    return 0.00679264;
    }
    } else {
    if (input[9] < 0.69568801f) {
    return 0.07536764;
    } else {
    return -0.00267835;
    }
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.05049193;
    } else {
    return 0.06877657;
    }
    } else {
    if (input[11] < 0.83516049f) {
    return -0.06114362;
    } else {
    if (input[1] < -0.82632977f) {
    return 0.06030253;
    } else {
    return -0.05141468;
    }
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < -0.31751829f) {
    return -0.04069711;
    } else {
    if (input[3] < 0.30648720f) {
    if (input[1] < -0.35219604f) {
    if (input[8] < -1.32616079f) {
    return 0.02747097;
    } else {
    return 0.07887082;
    }
    } else {
    if (input[11] < 1.16800618f) {
    return -0.03045855;
    } else {
    return 0.07347000;
    }
    }
    } else {
    return -0.00327066;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[3] < -0.12519841f) {
    return 0.06545583;
    } else {
    return -0.03374895;
    }
    } else {
    return -0.05568701;
    }
    }
    }
}

static double tree_23(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05473116;
    } else {
    if (input[2] < 0.16371366f) {
    return -0.00420550;
    } else {
    return 0.06536091;
    }
    }
    } else {
    return 0.07875958;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06118562;
    } else {
    return 0.06711386;
    }
    }
}

static double tree_24(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.07274178;
    } else {
    return -0.05747734;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.54398954f) {
    if (input[10] < -0.34290671f) {
    return 0.01982618;
    } else {
    return -0.05989492;
    }
    } else {
    if (input[8] < 0.96669495f) {
    if (input[11] < 0.88806921f) {
    if (input[4] < 0.13581426f) {
    return 0.07435318;
    } else {
    return -0.00195169;
    }
    } else {
    return -0.04294949;
    }
    } else {
    return -0.05270018;
    }
    }
    } else {
    return -0.05994389;
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.07262357;
    } else {
    return -0.05430748;
    }
    } else {
    if (input[11] < -1.33011889f) {
    return 0.00416160;
    } else {
    if (input[1] < -0.07050887f) {
    return -0.05922997;
    } else {
    if (input[9] < -1.41838443f) {
    return -0.03949506;
    } else {
    return 0.00452310;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[3] < -1.33661675f) {
    if (input[10] < 0.20528503f) {
    return 0.05326948;
    } else {
    return -0.04928571;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.08557892f) {
    if (input[3] < -0.59236318f) {
    return -0.05007965;
    } else {
    return 0.06537659;
    }
    } else {
    if (input[2] < -1.51547813f) {
    return -0.00478556;
    } else {
    if (input[10] < 1.57194638f) {
    return 0.07505289;
    } else {
    if (input[2] < -0.39245409f) {
    return -0.03469428;
    } else {
    return 0.06607243;
    }
    }
    }
    }
    } else {
    return -0.04189358;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    if (input[0] < -0.21002555f) {
    return -0.05988513;
    } else {
    return 0.02411613;
    }
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03302322;
    } else {
    return 0.07147285;
    }
    }
    }
    }
}

static double tree_25(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return -0.00197793;
    } else {
    return 0.07135349;
    }
    } else {
    return -0.04947037;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04902114;
    } else {
    return 0.05991031;
    }
    } else {
    if (input[11] < 0.83516049f) {
    return -0.05997117;
    } else {
    return -0.00291455;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    return 0.07501743;
    } else {
    if (input[10] < 0.48682395f) {
    return -0.04750597;
    } else {
    return 0.06137417;
    }
    }
    } else {
    return -0.04179049;
    }
    } else {
    if (input[2] < -0.68392420f) {
    if (input[3] < -0.40598804f) {
    return 0.05682243;
    } else {
    return 0.00126626;
    }
    } else {
    if (input[11] < 1.52408063f) {
    return -0.05601164;
    } else {
    return 0.00075732;
    }
    }
    }
    }
}

static double tree_26(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05346115;
    } else {
    if (input[9] < -1.02884412f) {
    return 0.06191612;
    } else {
    return -0.00404495;
    }
    }
    } else {
    return 0.07498945;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.06001705;
    } else {
    return 0.06354563;
    }
    }
}

static double tree_27(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.06953767;
    } else {
    return -0.05630135;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.04167566;
    } else {
    if (input[1] < 0.32122871f) {
    return 0.07184771;
    } else {
    return -0.03078335;
    }
    }
    } else {
    return -0.05522664;
    }
    } else {
    return -0.05881764;
    }
    } else {
    return -0.05891461;
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.06932860;
    } else {
    return -0.05299792;
    }
    } else {
    if (input[11] < -1.33011889f) {
    return 0.00416458;
    } else {
    if (input[1] < -0.07050887f) {
    return -0.05814291;
    } else {
    if (input[7] < -0.28248969f) {
    return -0.03814548;
    } else {
    return 0.00481131;
    }
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.04258621f) {
    if (input[3] < -1.06367922f) {
    if (input[10] < 0.35409302f) {
    return 0.06784423;
    } else {
    return -0.05339846;
    }
    } else {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.26045763f) {
    if (input[1] < -0.51185459f) {
    return -0.03948649;
    } else {
    return 0.05797028;
    }
    } else {
    if (input[2] < -1.46021843f) {
    return 0.02167107;
    } else {
    return 0.07185744;
    }
    }
    } else {
    return -0.04043427;
    }
    }
    } else {
    if (input[2] < -0.20494127f) {
    if (input[10] < -0.05192938f) {
    return 0.02447218;
    } else {
    if (input[9] < -0.78080320f) {
    return 0.00437953;
    } else {
    return -0.05883043;
    }
    }
    } else {
    if (input[1] < -0.35524634f) {
    return -0.00773625;
    } else {
    return 0.06628480;
    }
    }
    }
    }
}

static double tree_28(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return -0.00133532;
    } else {
    return 0.06799833;
    }
    } else {
    return -0.04802154;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04762209;
    } else {
    return 0.05697414;
    }
    } else {
    if (input[11] < 0.83516049f) {
    return -0.05892811;
    } else {
    return -0.00258114;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    return 0.07183386;
    } else {
    if (input[10] < 0.48682395f) {
    return -0.04580947;
    } else {
    return 0.05837205;
    }
    }
    } else {
    return -0.04032109;
    }
    } else {
    if (input[2] < -0.68392420f) {
    if (input[10] < 0.73915100f) {
    return 0.00071961;
    } else {
    return 0.05468519;
    }
    } else {
    if (input[11] < 1.52408063f) {
    return -0.05473847;
    } else {
    return 0.00080626;
    }
    }
    }
    }
}

static double tree_29(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05225338;
    } else {
    if (input[7] < -1.45803785f) {
    return 0.05902905;
    } else {
    return -0.00441618;
    }
    }
    } else {
    return 0.07181805;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05897794;
    } else {
    return 0.06041150;
    }
    }
}

static double tree_30(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.06558121;
    } else {
    return -0.05492732;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.54398954f) {
    if (input[10] < -0.34290671f) {
    return 0.01597909;
    } else {
    return -0.05790380;
    }
    } else {
    if (input[8] < 0.96669495f) {
    if (input[11] < 0.88806921f) {
    if (input[4] < 0.13581426f) {
    return 0.06812628;
    } else {
    return -0.00178065;
    }
    } else {
    return -0.04035685;
    }
    } else {
    return -0.05001825;
    }
    }
    } else {
    return -0.05796986;
    }
    } else {
    if (input[10] < -0.38041508f) {
    if (input[0] < 0.83391499f) {
    return 0.06522718;
    } else {
    return -0.05064281;
    }
    } else {
    if (input[11] < -1.02052844f) {
    return 0.00789525;
    } else {
    if (input[10] < -0.23906121f) {
    return -0.00686883;
    } else {
    return -0.05710782;
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    if (input[1] < -0.72661877f) {
    return 0.02276228;
    } else {
    return -0.00230481;
    }
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.83577669f) {
    return -0.03876389;
    } else {
    return 0.06516266;
    }
    } else {
    return 0.06921177;
    }
    }
    } else {
    return -0.04445682;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.05339999;
    } else {
    if (input[2] < -0.61973667f) {
    return 0.01093836;
    } else {
    return 0.06645183;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05791162;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03900077;
    } else {
    return 0.05937151;
    }
    }
    }
    }
}

static double tree_31(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return -0.00095481;
    } else {
    return 0.06530957;
    }
    } else {
    return -0.04658642;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04626960;
    } else {
    return 0.05433532;
    }
    } else {
    if (input[11] < 0.83516049f) {
    return -0.05799849;
    } else {
    return -0.00226323;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    return 0.06913086;
    } else {
    if (input[10] < 0.48682395f) {
    return -0.04428976;
    } else {
    return 0.05558389;
    }
    }
    } else {
    return -0.03892030;
    }
    } else {
    if (input[3] < -0.78995943f) {
    return 0.05254631;
    } else {
    if (input[7] < -0.29566991f) {
    return 0.02426782;
    } else {
    return -0.05409134;
    }
    }
    }
    }
}

static double tree_32(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05118394;
    } else {
    if (input[2] < 0.16371366f) {
    return -0.00482426;
    } else {
    return 0.05635143;
    }
    }
    } else {
    return 0.06912564;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05805258;
    } else {
    return 0.05762821;
    }
    }
}

static double tree_33(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.06319303;
    } else {
    return -0.05391695;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03886759;
    } else {
    if (input[1] < 0.15062134f) {
    return 0.06646949;
    } else {
    return -0.01217596;
    }
    }
    } else {
    return -0.05325376;
    }
    } else {
    return -0.05703497;
    }
    } else {
    return -0.05715333;
    }
    } else {
    if (input[10] < -0.38041508f) {
    if (input[0] < 0.83391499f) {
    return 0.06273800;
    } else {
    return -0.04944272;
    }
    } else {
    if (input[11] < -1.02052844f) {
    return 0.00771693;
    } else {
    if (input[9] < 0.77392811f) {
    return -0.05620318;
    } else {
    return -0.00576941;
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    if (input[4] < -0.11861444f) {
    return -0.00261473;
    } else {
    return 0.02204654;
    }
    } else {
    if (input[7] < 2.06731868f) {
    if (input[10] < 0.85877699f) {
    return 0.06693097;
    } else {
    if (input[1] < -0.66999942f) {
    return -0.03356702;
    } else {
    return 0.05843412;
    }
    }
    } else {
    return 0.01573444;
    }
    }
    } else {
    return -0.04303791;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.05221712;
    } else {
    if (input[1] < -0.64820862f) {
    return 0.00946347;
    } else {
    return 0.06422368;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    if (input[1] < -0.18627894f) {
    return -0.05707111;
    } else {
    return -0.00488492;
    }
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03390519;
    } else {
    return 0.06044232;
    }
    }
    }
    }
}

static double tree_34(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return -0.00018236;
    } else {
    return 0.06274597;
    }
    } else {
    return -0.04519150;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04508734;
    } else {
    return 0.05200402;
    }
    } else {
    if (input[11] < 0.83516049f) {
    return -0.05716872;
    } else {
    return -0.00195876;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    return 0.06681573;
    } else {
    if (input[10] < 0.48682395f) {
    return -0.04278149;
    } else {
    return 0.05327332;
    }
    }
    } else {
    return -0.03753775;
    }
    } else {
    if (input[2] < -0.68392420f) {
    if (input[7] < -0.00580093f) {
    return 0.04630295;
    } else {
    return 0.01392859;
    }
    } else {
    if (input[7] < 0.15902792f) {
    return -0.00500783;
    } else {
    return -0.05233549;
    }
    }
    }
    }
}

static double tree_35(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.05012617;
    } else {
    if (input[4] < -0.13985364f) {
    return -0.00518507;
    } else {
    return 0.05402490;
    }
    }
    } else {
    return 0.06682161;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05722733;
    } else {
    return 0.05513090;
    }
    }
}

static double tree_36(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.06108836;
    } else {
    return -0.05297216;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.54398954f) {
    if (input[10] < -0.34290671f) {
    return 0.01260185;
    } else {
    return -0.05631140;
    }
    } else {
    if (input[8] < 0.96669495f) {
    if (input[11] < 0.88806921f) {
    if (input[4] < 0.13001049f) {
    return 0.06344297;
    } else {
    return 0.00905381;
    }
    } else {
    return -0.03782220;
    }
    } else {
    return -0.04757491;
    }
    }
    } else {
    return -0.05639690;
    }
    } else {
    if (input[10] < -0.38041508f) {
    if (input[0] < 0.83391499f) {
    return 0.06053466;
    } else {
    return -0.04829163;
    }
    } else {
    if (input[11] < -1.02052844f) {
    return 0.00754138;
    } else {
    if (input[10] < -0.23906121f) {
    return -0.00543231;
    } else {
    return -0.05537121;
    }
    }
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.01263843;
    } else {
    if (input[7] < 2.06731868f) {
    if (input[10] < 0.85877699f) {
    return 0.06494980;
    } else {
    if (input[1] < -0.36982876f) {
    return -0.01734313;
    } else {
    return 0.05589238;
    }
    }
    } else {
    return 0.01490502;
    }
    }
    } else {
    return -0.04167055;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.05109581;
    } else {
    if (input[2] < -0.61973667f) {
    return 0.00853311;
    } else {
    return 0.06224492;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05631636;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03674522;
    } else {
    return 0.05453936;
    }
    }
    }
    }
}

static double tree_37(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return 0.00018344;
    } else {
    return 0.06053652;
    }
    } else {
    return -0.04382079;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04394870;
    } else {
    return 0.04993892;
    }
    } else {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.91267395f) {
    if (input[0] < -0.94113231f) {
    return -0.04543146;
    } else {
    return 0.01077628;
    }
    } else {
    return -0.05648572;
    }
    } else {
    return -0.00166991;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    if (input[2] < -0.05683123f) {
    return 0.06490480;
    } else {
    if (input[1] < -0.81595874f) {
    return 0.04343088;
    } else {
    return 0.00238217;
    }
    }
    } else {
    if (input[10] < 0.48682395f) {
    return -0.04132274;
    } else {
    if (input[2] < -0.33413893f) {
    return 0.05513305;
    } else {
    return 0.01554434;
    }
    }
    }
    } else {
    return -0.03620135;
    }
    } else {
    if (input[3] < -0.78995943f) {
    return 0.04846198;
    } else {
    if (input[7] < -0.29566991f) {
    return 0.02182596;
    } else {
    return -0.05195210;
    }
    }
    }
    }
}

static double tree_38(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.04915677;
    } else {
    if (input[9] < -1.02884412f) {
    return 0.05158634;
    } else {
    return -0.00495333;
    }
    }
    } else {
    return 0.06483650;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05649040;
    } else {
    return 0.05286755;
    }
    }
}

static double tree_39(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05921552;
    } else {
    return -0.05208138;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03622998;
    } else {
    if (input[1] < 0.15062134f) {
    return 0.06241213;
    } else {
    return -0.01096249;
    }
    }
    } else {
    return -0.05150636;
    }
    } else {
    return -0.05560209;
    }
    } else {
    return -0.05574496;
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05839756;
    } else {
    return -0.04977800;
    }
    } else {
    return -0.05452098;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.01197411;
    } else {
    if (input[7] < 2.06731868f) {
    if (input[10] < 0.85877699f) {
    return 0.06323375;
    } else {
    if (input[3] < -0.50585538f) {
    return -0.01725827;
    } else {
    return 0.05407240;
    }
    }
    } else {
    return 0.01417045;
    }
    }
    } else {
    return -0.04034748;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.05003042;
    } else {
    if (input[1] < -0.64820862f) {
    return 0.00726127;
    } else {
    return 0.06053473;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05563784;
    } else {
    if (input[0] < -0.91373396f) {
    return -0.03578400;
    } else {
    return 0.05252549;
    }
    }
    }
    }
}

static double tree_40(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return 0.00094885;
    } else {
    return 0.05852721;
    }
    } else {
    return -0.04249801;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04285032;
    } else {
    return 0.04801934;
    }
    } else {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.91267395f) {
    if (input[3] < -0.53852451f) {
    return 0.01162102;
    } else {
    return -0.04440351;
    }
    } else {
    return -0.05582635;
    }
    } else {
    return -0.00139698;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[1] < -0.35219604f) {
    if (input[8] < -1.32616079f) {
    return 0.01887949;
    } else {
    if (input[10] < -0.21848133f) {
    return 0.01972242;
    } else {
    return 0.06328090;
    }
    }
    } else {
    if (input[11] < 1.19001973f) {
    if (input[7] < -0.23463842f) {
    return 0.01723065;
    } else {
    return -0.05067817;
    }
    } else {
    return 0.05687245;
    }
    }
    } else {
    return -0.03490720;
    }
    } else {
    if (input[2] < -0.68392420f) {
    if (input[10] < 1.46158707f) {
    return 0.01266905;
    } else {
    return 0.04260882;
    }
    } else {
    if (input[3] < -0.54840124f) {
    return -0.00404533;
    } else {
    return -0.05023876;
    }
    }
    }
    }
}

static double tree_41(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.04811695;
    } else {
    if (input[4] < -0.13985364f) {
    return -0.00521284;
    } else {
    return 0.04964250;
    }
    }
    } else {
    return 0.06311669;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05583176;
    } else {
    return 0.05079651;
    }
    }
}

static double tree_42(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05753377;
    } else {
    return -0.05124220;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.54398954f) {
    if (input[10] < -0.34290671f) {
    return 0.00960480;
    } else {
    return -0.05502411;
    }
    } else {
    if (input[8] < 0.96669495f) {
    if (input[11] < 0.88806921f) {
    if (input[2] < 0.29047567f) {
    return 0.05989842;
    } else {
    return 0.00779606;
    }
    } else {
    return -0.03547847;
    }
    } else {
    return -0.04530079;
    }
    }
    } else {
    return -0.05513494;
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05647060;
    } else {
    return -0.04873166;
    }
    } else {
    return -0.05381951;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.83577669f) {
    return -0.03647199;
    } else {
    return 0.05160321;
    }
    } else {
    return 0.06170090;
    }
    } else {
    return -0.03906247;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04899963;
    } else {
    if (input[2] < -0.61973667f) {
    return 0.00649112;
    } else {
    return 0.05872060;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05502813;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03461587;
    } else {
    return 0.05058561;
    }
    }
    }
    }
}

static double tree_43(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[10] < -0.04480376f) {
    return 0.00127340;
    } else {
    return 0.05675381;
    }
    } else {
    return -0.04121556;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04178574;
    } else {
    return 0.04630448;
    }
    } else {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.91267395f) {
    if (input[5] < 0.45740175f) {
    return -0.04336024;
    } else {
    return 0.01208659;
    }
    } else {
    return -0.05523556;
    }
    } else {
    return -0.00113979;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[2] < 0.12777591f) {
    if (input[3] < -0.33014220f) {
    if (input[1] < -0.35219604f) {
    return 0.06178239;
    } else {
    if (input[3] < -0.69456637f) {
    return 0.05520308;
    } else {
    return -0.02771700;
    }
    }
    } else {
    if (input[10] < 0.48682395f) {
    return -0.03899805;
    } else {
    return 0.04764349;
    }
    }
    } else {
    return -0.03365183;
    }
    } else {
    if (input[3] < -0.78995943f) {
    return 0.04493548;
    } else {
    if (input[2] < -0.70638204f) {
    return 0.01184391;
    } else {
    return -0.04981812;
    }
    }
    }
    }
}

static double tree_44(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.04714150;
    } else {
    if (input[7] < -1.45803785f) {
    return 0.04775546;
    } else {
    return -0.00551154;
    }
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[1] < 0.09062512f) {
    return 0.04573940;
    } else {
    return -0.00394811;
    }
    } else {
    return 0.06172161;
    }
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05524166;
    } else {
    return 0.04888464;
    }
    }
}

static double tree_45(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05600954;
    } else {
    return -0.05043256;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03372881;
    } else {
    if (input[1] < 0.15062134f) {
    return 0.05907802;
    } else {
    return -0.00984152;
    }
    }
    } else {
    return -0.04989135;
    }
    } else {
    return -0.05443788;
    }
    } else {
    return -0.05461131;
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05470406;
    } else {
    return -0.04771702;
    }
    } else {
    return -0.05317081;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00961520;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.83577669f) {
    return -0.03282650;
    } else {
    return 0.05464375;
    }
    } else {
    return 0.06041818;
    }
    }
    } else {
    return -0.03780924;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04800173;
    } else {
    if (input[1] < -0.64820862f) {
    return 0.00539644;
    } else {
    return 0.05714173;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05447697;
    } else {
    if (input[0] < -0.91373396f) {
    return -0.03376235;
    } else {
    return 0.04888515;
    }
    }
    }
    }
}

static double tree_46(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[9] < 0.40482145f) {
    return 0.05722746;
    } else {
    return 0.00664890;
    }
    } else {
    return -0.04005997;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.04057515;
    } else {
    return 0.04478573;
    }
    } else {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.91267395f) {
    if (input[2] < 0.15114777f) {
    return -0.04229562;
    } else {
    return 0.01239090;
    }
    } else {
    return -0.05470607;
    }
    } else {
    return -0.00089859;
    }
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[1] < -0.35219604f) {
    if (input[10] < -0.13719638f) {
    return 0.02164732;
    } else {
    if (input[8] < -1.32616079f) {
    return 0.01682259;
    } else {
    return 0.06048079;
    }
    }
    } else {
    if (input[11] < 1.19001973f) {
    if (input[7] < 0.63181329f) {
    return 0.00532384;
    } else {
    return -0.04945261;
    }
    } else {
    return 0.05356827;
    }
    }
    } else {
    if (input[1] < -0.46078596f) {
    if (input[7] < 0.63224703f) {
    return 0.04795660;
    } else {
    return -0.02888841;
    }
    } else {
    return -0.04821627;
    }
    }
    }
}

static double tree_47(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.04295430;
    } else {
    return -0.05472144;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.04683994;
    } else {
    return 0.04002443;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[11] < 0.15284377f) {
    return 0.04444681;
    } else {
    return -0.00459034;
    }
    } else {
    return 0.06042496;
    }
    }
    }
}

static double tree_48(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05461511;
    } else {
    return -0.04965914;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[9] < -1.05076098f) {
    return -0.05414527;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03272996;
    } else {
    if (input[8] < 0.91870689f) {
    return 0.05535021;
    } else {
    return -0.01074215;
    }
    }
    } else {
    return -0.04865794;
    }
    } else {
    return -0.05393748;
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05300722;
    } else {
    return -0.04672709;
    }
    } else {
    return -0.05256185;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00891268;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.83577669f) {
    return -0.03156468;
    } else {
    return 0.05291967;
    }
    } else {
    return 0.05927294;
    }
    }
    } else {
    return -0.03661414;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04705035;
    } else {
    if (input[1] < -0.64820862f) {
    return 0.00493884;
    } else {
    return 0.05559675;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05397848;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03263870;
    } else {
    return 0.04732647;
    }
    }
    }
    }
}

static double tree_49(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -1.08557892f) {
    if (input[1] < -0.45922065f) {
    if (input[9] < 0.40482145f) {
    return 0.05555445;
    } else {
    return 0.00651404;
    }
    } else {
    return -0.03888757;
    }
    } else {
    if (input[3] < -1.13855636f) {
    if (input[10] < -0.12388328f) {
    return -0.03956642;
    } else {
    return 0.04330283;
    }
    } else {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.91267395f) {
    if (input[2] < 0.15114777f) {
    return -0.04118425;
    } else {
    return 0.01214825;
    }
    } else {
    return -0.05423048;
    }
    } else {
    return -0.00067202;
    }
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[1] < 0.10455478f) {
    if (input[10] < -0.29426527f) {
    return -0.01409014;
    } else {
    if (input[1] < -0.39323381f) {
    return 0.05934839;
    } else {
    if (input[3] < -0.69456637f) {
    return 0.05419141;
    } else {
    return -0.02192509;
    }
    }
    }
    } else {
    return -0.02783922;
    }
    } else {
    if (input[0] < -0.91373396f) {
    return 0.04058216;
    } else {
    if (input[7] < 0.01651198f) {
    return 0.01495210;
    } else {
    return -0.04922104;
    }
    }
    }
    }
}

static double tree_50(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.04514604;
    } else {
    if (input[5] < -0.46112192f) {
    return 0.04200063;
    } else {
    return 0.00493319;
    }
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[4] < -0.00351296f) {
    return -0.00525093;
    } else {
    return 0.04299724;
    }
    } else {
    return 0.05927146;
    }
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05423767;
    } else {
    return 0.04522127;
    }
    }
}

static double tree_51(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05332754;
    } else {
    return -0.04889905;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03176187;
    } else {
    if (input[3] < 0.34377348f) {
    return 0.05372312;
    } else {
    return 0.00800730;
    }
    }
    } else {
    return -0.04810081;
    }
    } else {
    return -0.05347943;
    }
    } else {
    return -0.05369216;
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05146880;
    } else {
    return -0.04575521;
    }
    } else {
    return -0.05199122;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00825115;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.83577669f) {
    return -0.03035167;
    } else {
    return 0.05140116;
    }
    } else {
    return 0.05826482;
    }
    }
    } else {
    return -0.03541541;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04611849;
    } else {
    if (input[2] < -0.55353349f) {
    return 0.00985128;
    } else {
    return 0.05415733;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    if (input[2] < -0.24939120f) {
    return -0.05352773;
    } else {
    return -0.01093101;
    }
    } else {
    if (input[2] < -0.59626853f) {
    return -0.01288625;
    } else {
    return 0.04758367;
    }
    }
    }
    }
}

static double tree_52(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[10] < -0.12023090f) {
    return -0.00395306;
    } else {
    return 0.05660770;
    }
    } else {
    if (input[7] < 0.09041013f) {
    return -0.01247111;
    } else {
    return -0.04596946;
    }
    }
    } else {
    if (input[1] < -1.17368436f) {
    if (input[0] < -0.74916297f) {
    return 0.03551628;
    } else {
    return -0.03522073;
    }
    } else {
    if (input[2] < -1.39060938f) {
    return -0.01226024;
    } else {
    return -0.05380710;
    }
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[0] < -0.12096445f) {
    if (input[2] < -0.08762391f) {
    return 0.05816713;
    } else {
    if (input[3] < -0.60037798f) {
    return 0.04029595;
    } else {
    return -0.03258637;
    }
    }
    } else {
    return -0.01736636;
    }
    } else {
    if (input[0] < -0.91373396f) {
    return 0.03916198;
    } else {
    if (input[7] < 0.01651198f) {
    return 0.01427415;
    } else {
    return -0.04828551;
    }
    }
    }
    }
}

static double tree_53(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03977528;
    } else {
    return -0.05381990;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.04493281;
    } else {
    return 0.03733681;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[11] < 0.15284377f) {
    return 0.04158937;
    } else {
    return -0.00553980;
    }
    } else {
    return 0.05827090;
    }
    }
    }
}

static double tree_54(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05212735;
    } else {
    return -0.04813731;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[9] < -1.05076098f) {
    return -0.05331557;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.03070223;
    } else {
    if (input[8] < 0.91870689f) {
    return 0.05259172;
    } else {
    return -0.00991565;
    }
    }
    } else {
    return -0.04698151;
    }
    } else {
    return -0.05306433;
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.05004577;
    } else {
    return -0.04479536;
    }
    } else {
    return -0.05145277;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00778817;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.66859758f) {
    return -0.01397126;
    } else {
    return 0.04845634;
    }
    } else {
    return 0.05737379;
    }
    }
    } else {
    return -0.03427147;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04517423;
    } else {
    if (input[2] < -0.55353349f) {
    return 0.00918838;
    } else {
    return 0.05306756;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05311429;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.03109480;
    } else {
    return 0.04439832;
    }
    }
    }
    }
}

static double tree_55(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.05683349;
    } else {
    return 0.00131547;
    }
    } else {
    if (input[1] < -0.40290606f) {
    return -0.01233567;
    } else {
    return -0.04493171;
    }
    }
    } else {
    if (input[1] < -1.17368436f) {
    if (input[0] < -0.74916297f) {
    return 0.03411561;
    } else {
    return -0.03411090;
    }
    } else {
    if (input[2] < -1.39060938f) {
    return -0.01173971;
    } else {
    return -0.05342252;
    }
    }
    }
    } else {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.30117562f) {
    if (input[8] < -1.32616079f) {
    return 0.01270957;
    } else {
    if (input[10] < -0.13719638f) {
    return 0.01901467;
    } else {
    return 0.05744207;
    }
    }
    } else {
    if (input[7] < 0.60811567f) {
    return 0.03566943;
    } else {
    return -0.03241668;
    }
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04612130;
    } else {
    if (input[2] < -0.66400427f) {
    return 0.01354139;
    } else {
    return -0.05088054;
    }
    }
    }
    }
}

static double tree_56(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03844166;
    } else {
    return -0.05343539;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.04405426;
    } else {
    return 0.03570289;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[1] < 0.09062512f) {
    return 0.04027913;
    } else {
    return -0.00613665;
    }
    } else {
    return 0.05737955;
    }
    }
    }
}

static double tree_57(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.05099824;
    } else {
    return -0.04738535;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.02974958;
    } else {
    if (input[3] < 0.34377348f) {
    return 0.05124022;
    } else {
    return 0.00696429;
    }
    }
    } else {
    return -0.04637383;
    }
    } else {
    return -0.05268129;
    }
    } else {
    return -0.05294030;
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.04861781;
    } else {
    return -0.04384258;
    }
    } else {
    return -0.05093506;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00711993;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.66859758f) {
    return -0.01293907;
    } else {
    return 0.04694016;
    }
    } else {
    return 0.05658394;
    }
    }
    } else {
    return -0.03315023;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04425937;
    } else {
    if (input[1] < -0.60861313f) {
    return 0.00845933;
    } else {
    return 0.05177226;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05273826;
    } else {
    if (input[0] < -0.91373396f) {
    return -0.03025692;
    } else {
    return 0.04315148;
    }
    }
    }
    }
}

static double tree_58(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[10] < -0.12023090f) {
    return -0.00398020;
    } else {
    return 0.05391652;
    }
    } else {
    return -0.04092207;
    }
    } else {
    if (input[1] < -1.17368436f) {
    if (input[0] < -0.64337909f) {
    return 0.02812867;
    } else {
    return -0.03209214;
    }
    } else {
    if (input[2] < -1.37369549f) {
    return -0.01349828;
    } else {
    return -0.05307596;
    }
    }
    }
    } else {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.30117562f) {
    if (input[10] < -0.13719638f) {
    return 0.01825639;
    } else {
    if (input[8] < -1.30698967f) {
    return 0.01632055;
    } else {
    return 0.05665190;
    }
    }
    } else {
    if (input[7] < 0.60811567f) {
    return 0.03418975;
    } else {
    return -0.03134981;
    }
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04473137;
    } else {
    if (input[2] < -0.66400427f) {
    return 0.01299863;
    } else {
    return -0.04988692;
    }
    }
    }
    }
}

static double tree_59(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.48335588f) {
    if (input[5] < 0.48966378f) {
    return -0.00772487;
    } else {
    return -0.03736225;
    }
    } else {
    if (input[3] < 0.03790418f) {
    if (input[7] < -0.94695580f) {
    return 0.04035043;
    } else {
    return -0.03788215;
    }
    } else {
    return 0.05659711;
    }
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05308095;
    } else {
    return 0.04044343;
    }
    }
}

static double tree_60(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04992630;
    } else {
    return -0.04664002;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[9] < -1.05076098f) {
    return -0.05263350;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.76189566f) {
    return -0.02875613;
    } else {
    if (input[8] < 0.91870689f) {
    return 0.05005023;
    } else {
    return -0.00857296;
    }
    }
    } else {
    return -0.04529420;
    }
    } else {
    return -0.05233247;
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.04723600;
    } else {
    return -0.04289259;
    }
    } else {
    return -0.05043590;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00671165;
    } else {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.66859758f) {
    return -0.01198687;
    } else {
    return 0.04549633;
    }
    } else {
    return 0.05588189;
    }
    }
    } else {
    return -0.03201684;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04332535;
    } else {
    if (input[2] < -0.55353349f) {
    return 0.00735125;
    } else {
    return 0.05057074;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05239322;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.02934504;
    } else {
    return 0.04187083;
    }
    }
    }
    }
}

static double tree_61(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[10] < -0.12023090f) {
    return -0.00377043;
    } else {
    return 0.05267964;
    }
    } else {
    return -0.03985610;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00135608;
    } else {
    return -0.05276177;
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05596212;
    } else {
    return 0.02117725;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04339164;
    } else {
    return -0.03399863;
    }
    }
    } else {
    if (input[0] < -0.91373396f) {
    return 0.03498299;
    } else {
    if (input[7] < 0.01651198f) {
    return 0.01298055;
    } else {
    return -0.04650324;
    }
    }
    }
    }
}

static double tree_62(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03560672;
    } else {
    return -0.05277672;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.04240594;
    } else {
    return 0.03320296;
    }
    } else {
    if (input[3] < 0.03790418f) {
    if (input[11] < 0.30997124f) {
    return 0.03649929;
    } else {
    return -0.00176789;
    }
    } else {
    return 0.05588963;
    }
    }
    }
}

static double tree_63(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04889948;
    } else {
    return -0.04588064;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    if (input[1] < 1.76464486f) {
    return 0.00652128;
    } else {
    return -0.02893841;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05233688;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[8] < 0.60846502f) {
    if (input[3] < -0.43404687f) {
    return -0.00676962;
    } else {
    return 0.04705746;
    }
    } else {
    if (input[2] < -0.14297880f) {
    return 0.01620156;
    } else {
    return -0.04561767;
    }
    }
    } else {
    return -0.05200796;
    }
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.04596530;
    } else {
    return -0.04194205;
    }
    } else {
    return -0.04995140;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00678651;
    } else {
    if (input[7] < 1.77035892f) {
    if (input[10] < 0.85877699f) {
    return 0.05534066;
    } else {
    if (input[1] < -0.30855870f) {
    return -0.00858320;
    } else {
    return 0.04109598;
    }
    }
    } else {
    if (input[0] < -0.66210568f) {
    return -0.00976749;
    } else {
    return 0.04022713;
    }
    }
    }
    } else {
    return -0.03093901;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04240495;
    } else {
    if (input[1] < -0.60861313f) {
    return 0.00673749;
    } else {
    return 0.04942241;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    if (input[1] < -0.28084129f) {
    return -0.05207799;
    } else {
    return -0.01314739;
    }
    } else {
    if (input[2] < -0.59626853f) {
    return -0.01142504;
    } else {
    return 0.04204718;
    }
    }
    }
    }
}

static double tree_64(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.05300432;
    } else {
    return -0.00031595;
    }
    } else {
    return -0.03881714;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00164470;
    } else {
    return -0.05247916;
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05533599;
    } else {
    return 0.02017510;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04209298;
    } else {
    return -0.03275043;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    return -0.04493691;
    } else {
    if (input[9] < 0.56291699f) {
    return 0.03953066;
    } else {
    return -0.02851336;
    }
    }
    }
    }
}

static double tree_65(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03437745;
    } else {
    return -0.05249409;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.04162410;
    } else {
    return 0.03186993;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[4] < 0.12581275f) {
    return -0.00143987;
    } else {
    return 0.03466859;
    }
    } else {
    return 0.05526161;
    }
    }
    }
}

static double tree_66(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04790754;
    } else {
    return -0.04511653;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    if (input[3] < 1.53935480f) {
    return 0.00736264;
    } else {
    return -0.02804328;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05206492;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[8] < 0.75597382f) {
    if (input[0] < -0.82663107f) {
    return -0.02943036;
    } else {
    return 0.04505481;
    }
    } else {
    if (input[9] < -1.01904941f) {
    return -0.00887874;
    } else {
    return -0.04280823;
    }
    }
    } else {
    return -0.05170633;
    }
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.04473237;
    } else {
    return -0.04098822;
    }
    } else {
    return -0.04947383;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[3] < -1.41711593f) {
    return 0.00663695;
    } else {
    if (input[11] < 0.91271454f) {
    return 0.05472239;
    } else {
    if (input[2] < -0.88968170f) {
    return -0.01633464;
    } else {
    return 0.04577078;
    }
    }
    }
    } else {
    return -0.02988228;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04151203;
    } else {
    if (input[10] < 1.15990615f) {
    return 0.01093753;
    } else {
    return 0.04818902;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05178110;
    } else {
    if (input[2] < -0.61785203f) {
    return -0.02785288;
    } else {
    return 0.03967127;
    }
    }
    }
    }
}

static double tree_67(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00897056;
    } else {
    return 0.05076011;
    }
    } else {
    return -0.04200112;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00178614;
    } else {
    return -0.05222363;
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05477488;
    } else {
    return 0.01922400;
    }
    } else {
    if (input[11] < 1.16641903f) {
    if (input[11] < 0.90427488f) {
    return -0.00090772;
    } else {
    return -0.03748467;
    }
    } else {
    return 0.04390205;
    }
    }
    } else {
    if (input[0] < -0.91373396f) {
    return 0.03297702;
    } else {
    if (input[7] < 0.01651198f) {
    return 0.01213540;
    } else {
    return -0.04493104;
    }
    }
    }
    }
}

static double tree_68(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.03966995;
    } else {
    return 0.02651455;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[11] < 0.02627995f) {
    return 0.03345048;
    } else {
    return -0.00217709;
    }
    } else {
    return 0.05469874;
    }
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05223187;
    } else {
    return 0.03619444;
    }
    }
}

static double tree_69(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04694172;
    } else {
    return -0.04435273;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    if (input[4] < -1.00713766f) {
    return -0.02618521;
    } else {
    return 0.00580337;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05181720;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[4] < 0.15924174f) {
    if (input[1] < -0.66853952f) {
    return 0.00447455;
    } else {
    return 0.04193298;
    }
    } else {
    return -0.01851111;
    }
    } else {
    return -0.04272554;
    }
    } else {
    return -0.05142464;
    }
    }
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04687887;
    } else {
    return -0.04071463;
    }
    } else {
    return -0.04904242;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 1.02569377f) {
    if (input[0] < 1.02910495f) {
    if (input[0] < -1.11980057f) {
    if (input[1] < -0.58730197f) {
    return -0.01797639;
    } else {
    return 0.04138090;
    }
    } else {
    return 0.05416731;
    }
    } else {
    return -0.02880835;
    }
    } else {
    if (input[3] < -0.70070112f) {
    return -0.04058957;
    } else {
    if (input[1] < -0.47783309f) {
    return 0.00993857;
    } else {
    return 0.04693609;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    if (input[3] < -0.37927389f) {
    return -0.05150245;
    } else {
    return -0.01478382;
    }
    } else {
    if (input[2] < -0.59626853f) {
    return -0.01054674;
    } else {
    return 0.03964789;
    }
    }
    }
    }
}

static double tree_70(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00826903;
    } else {
    return 0.04976083;
    }
    } else {
    return -0.04105806;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00211496;
    } else {
    return -0.05199191;
    }
    }
    } else {
    if (input[3] < -0.37554118f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05427201;
    } else {
    return 0.01828756;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.03991811;
    } else {
    return -0.02792259;
    }
    }
    } else {
    if (input[0] < -0.89428109f) {
    return 0.03543175;
    } else {
    if (input[7] < 0.01651198f) {
    return 0.01165329;
    } else {
    return -0.04459832;
    }
    }
    }
    }
}

static double tree_71(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03172267;
    } else {
    return -0.05200736;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.03993221;
    } else {
    return 0.02978496;
    }
    } else {
    if (input[3] < 0.03790418f) {
    if (input[4] < -0.04172301f) {
    return -0.00454190;
    } else {
    return 0.03287115;
    }
    } else {
    return 0.05420522;
    }
    }
    }
}

static double tree_72(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04599435;
    } else {
    return -0.04357025;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.01214486;
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05158914;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[8] < 0.75597382f) {
    if (input[0] < -0.82663107f) {
    return -0.02762181;
    } else {
    return 0.04298820;
    }
    } else {
    if (input[10] < 0.63595486f) {
    return -0.04084708;
    } else {
    return -0.01094545;
    }
    }
    } else {
    return -0.05115919;
    }
    }
    }
    } else {
    if (input[10] < 0.15526852f) {
    if (input[0] < 0.83391499f) {
    return 0.04256008;
    } else {
    return -0.03905330;
    }
    } else {
    return -0.04853398;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 0.63928986f) {
    if (input[0] < 1.02910495f) {
    if (input[7] < 1.77035892f) {
    return 0.05385675;
    } else {
    if (input[11] < 0.01856660f) {
    return 0.03554401;
    } else {
    return -0.00627175;
    }
    }
    } else {
    return -0.02779480;
    }
    } else {
    if (input[3] < -0.72678387f) {
    return -0.04276216;
    } else {
    if (input[2] < -0.69417334f) {
    return -0.00878113;
    } else {
    return 0.05038743;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05124829;
    } else {
    if (input[1] < -0.61856961f) {
    return -0.01762643;
    } else {
    return 0.03445936;
    }
    }
    }
    }
}

static double tree_73(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.04982409;
    } else {
    return -0.00093159;
    }
    } else {
    return -0.03623492;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00187515;
    } else {
    return -0.05178151;
    }
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < -0.13719638f) {
    return -0.00048474;
    } else {
    if (input[8] < -1.27559423f) {
    return 0.01276473;
    } else {
    return 0.05376401;
    }
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04262555;
    } else {
    if (input[2] < -0.64600205f) {
    return 0.01530581;
    } else {
    return -0.04688687;
    }
    }
    }
    }
}

static double tree_74(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.03059956;
    } else {
    return -0.05179701;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.03908528;
    } else {
    return 0.02857045;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[4] < 0.12581275f) {
    return -0.00432129;
    } else {
    return 0.03131500;
    }
    } else {
    return 0.05375370;
    }
    }
    }
}

static double tree_75(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04505903;
    } else {
    return -0.04278075;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.01090902;
    } else {
    if (input[8] < 0.93442154f) {
    if (input[11] < 0.76233613f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.69999653f) {
    return -0.01673420;
    } else {
    if (input[8] < 0.68054438f) {
    return 0.04346371;
    } else {
    return 0.00698938;
    }
    }
    } else {
    return -0.04121821;
    }
    } else {
    return -0.05090433;
    }
    } else {
    return -0.05135908;
    }
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04482441;
    } else {
    return -0.03880490;
    }
    } else {
    return -0.04810643;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 0.63928986f) {
    if (input[0] < 1.02910495f) {
    if (input[7] < 1.77035892f) {
    return 0.05345798;
    } else {
    if (input[6] < -0.33423770f) {
    return -0.00413503;
    } else {
    return 0.03402076;
    }
    }
    } else {
    return -0.02680325;
    }
    } else {
    if (input[3] < -0.72678387f) {
    return -0.04190711;
    } else {
    if (input[1] < -0.65746087f) {
    return -0.00568117;
    } else {
    return 0.04956823;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.05071817;
    } else {
    if (input[2] < -0.59626853f) {
    return -0.01028377;
    } else {
    return 0.03753735;
    }
    }
    }
    }
}

static double tree_76(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00785723;
    } else {
    return 0.04780845;
    }
    } else {
    return -0.03928749;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00162096;
    } else {
    return -0.05158995;
    }
    }
    } else {
    if (input[3] < -0.37554118f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05341697;
    } else {
    return 0.01652451;
    }
    } else {
    if (input[11] < 1.16641903f) {
    return -0.02238353;
    } else {
    return 0.04063314;
    }
    }
    } else {
    if (input[0] < -0.89428109f) {
    return 0.03327499;
    } else {
    if (input[7] < 0.17499133f) {
    return 0.00706731;
    } else {
    return -0.04289655;
    }
    }
    }
    }
}

static double tree_77(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.04290888f) {
    return -0.03687774;
    } else {
    return 0.02411076;
    }
    } else {
    if (input[3] < 0.03790418f) {
    if (input[0] < -0.20225841f) {
    return 0.02988775;
    } else {
    return -0.00446272;
    }
    } else {
    return 0.05334835;
    }
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05159931;
    } else {
    return 0.03230099;
    }
    }
}

static double tree_78(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04413033;
    } else {
    return -0.04198403;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.00973031;
    } else {
    return -0.04897984;
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04380054;
    } else {
    return -0.03783806;
    }
    } else {
    return -0.04762424;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 0.63928986f) {
    if (input[0] < 0.85007799f) {
    if (input[7] < 1.77035892f) {
    return 0.05309976;
    } else {
    if (input[2] < -0.65626275f) {
    return -0.00445104;
    } else {
    return 0.03302109;
    }
    }
    } else {
    return -0.02154141;
    }
    } else {
    if (input[3] < -0.72678387f) {
    return -0.04099482;
    } else {
    if (input[1] < -0.65746087f) {
    return -0.00554093;
    } else {
    return 0.04880322;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05077250;
    } else {
    if (input[1] < -0.61856961f) {
    return -0.01649515;
    } else {
    return 0.03236067;
    }
    }
    }
    }
}

static double tree_79(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00716856;
    } else {
    return 0.04678404;
    }
    } else {
    return -0.03833379;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00141493;
    } else {
    return -0.05141531;
    }
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < -0.13719638f) {
    return -0.00093605;
    } else {
    if (input[8] < -1.25436831f) {
    return 0.01317261;
    } else {
    return 0.05297917;
    }
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.04067663;
    } else {
    if (input[2] < -0.61620510f) {
    return 0.01134677;
    } else {
    return -0.04519404;
    }
    }
    }
    }
}

static double tree_80(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -1.07010603f) {
    return 0.02817446;
    } else {
    return -0.05143092;
    }
    } else {
    if (input[1] < -0.02138405f) {
    if (input[0] < 0.07701479f) {
    return -0.03740575;
    } else {
    return 0.02661237;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.13694084f) {
    return -0.00468144;
    } else {
    return 0.02848228;
    }
    } else {
    return 0.05298397;
    }
    }
    }
}

static double tree_81(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04320366;
    } else {
    return -0.04117004;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.00856848;
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05100015;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[4] < 0.15924174f) {
    if (input[3] < -0.37909919f) {
    return 0.00907460;
    } else {
    return 0.03857105;
    }
    } else {
    return -0.01586824;
    }
    } else {
    return -0.03927026;
    }
    } else {
    return -0.05043742;
    }
    }
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04278775;
    } else {
    return -0.03686241;
    }
    } else {
    return -0.04713152;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 0.63928986f) {
    if (input[2] < 0.85656106f) {
    if (input[7] < 1.77035892f) {
    return 0.05277668;
    } else {
    if (input[11] < -0.02772399f) {
    return 0.03156466;
    } else {
    return -0.00332774;
    }
    }
    } else {
    return -0.02095946;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.54008353f) {
    return -0.04160922;
    } else {
    return 0.00891781;
    }
    } else {
    return 0.04714869;
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05054950;
    } else {
    if (input[2] < -0.59626853f) {
    return -0.01397858;
    } else {
    return 0.03273971;
    }
    }
    }
    }
}

static double tree_82(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00656423;
    } else {
    return 0.04571863;
    }
    } else {
    return -0.03736734;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00128182;
    } else {
    return -0.05125675;
    }
    }
    } else {
    if (input[3] < -0.37554118f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05271852;
    } else {
    return 0.01489610;
    }
    } else {
    if (input[11] < 1.16641903f) {
    return -0.02088378;
    } else {
    return 0.03846418;
    }
    }
    } else {
    if (input[0] < -0.89428109f) {
    return 0.03110900;
    } else {
    if (input[7] < 0.28914562f) {
    return 0.00328635;
    } else {
    return -0.04114213;
    }
    }
    }
    }
}

static double tree_83(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[11] < 0.24468073f) {
    return 0.00023037;
    } else {
    return -0.03972205;
    }
    } else {
    if (input[0] < -0.10271210f) {
    return 0.00635161;
    } else {
    return 0.03566103;
    }
    }
    } else {
    return 0.05265305;
    }
    } else {
    if (input[8] < 1.14140213f) {
    return -0.05126661;
    } else {
    return 0.02981399;
    }
    }
}

static double tree_84(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04227532;
    } else {
    return -0.04034175;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.00777540;
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05082615;
    } else {
    if (input[11] < 0.72615278f) {
    if (input[2] < 0.47617579f) {
    if (input[8] < 0.75597382f) {
    if (input[3] < -0.36081171f) {
    return 0.00102026;
    } else {
    return 0.04148230;
    }
    } else {
    return -0.01321711;
    }
    } else {
    return -0.03844340;
    }
    } else {
    return -0.05021144;
    }
    }
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04177749;
    } else {
    return -0.03587844;
    }
    } else {
    return -0.04662883;
    }
    }
    }
    } else {
    if (input[11] < 1.11839747f) {
    if (input[10] < 0.63928986f) {
    if (input[3] < 1.23449230f) {
    if (input[7] < 1.77035892f) {
    return 0.05248714;
    } else {
    if (input[6] < -0.31706810f) {
    return -0.00190521;
    } else {
    return 0.03006479;
    }
    }
    } else {
    return -0.01700866;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.54008353f) {
    return -0.04099179;
    } else {
    return 0.00687327;
    }
    } else {
    return 0.04635206;
    }
    }
    } else {
    if (input[0] < -0.30413371f) {
    if (input[10] < 0.40729743f) {
    return -0.01154714;
    } else {
    return -0.05036240;
    }
    } else {
    return 0.02567348;
    }
    }
    }
}

static double tree_85(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.04579474;
    } else {
    return -0.00196162;
    }
    } else {
    return -0.03276576;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00095707;
    } else {
    return -0.05111014;
    }
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < -0.13719638f) {
    return -0.00144807;
    } else {
    if (input[8] < -1.23643422f) {
    return 0.01306761;
    } else {
    return 0.05233247;
    }
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.03871330;
    } else {
    if (input[2] < -0.57097959f) {
    return 0.00465896;
    } else {
    return -0.04311065;
    }
    }
    }
    }
}

static double tree_86(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -0.98319393f) {
    return 0.02149772;
    } else {
    return -0.05112561;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[2] < -0.11314867f) {
    return -0.03897557;
    } else {
    return -0.00059038;
    }
    } else {
    if (input[10] < 0.47263661f) {
    return 0.03393356;
    } else {
    return 0.00752749;
    }
    }
    } else {
    return 0.05235505;
    }
    }
}

static double tree_87(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04134230;
    } else {
    return -0.03949512;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.00699225;
    } else {
    return -0.04818021;
    }
    } else {
    if (input[11] < 0.09911872f) {
    if (input[0] < 0.83391499f) {
    return 0.04077109;
    } else {
    return -0.03488709;
    }
    } else {
    return -0.04610971;
    }
    }
    }
    } else {
    if (input[11] < 1.09478235f) {
    if (input[10] < 0.63928986f) {
    if (input[2] < 0.79602486f) {
    if (input[7] < 1.77035892f) {
    return 0.05222138;
    } else {
    if (input[9] < 0.55855882f) {
    return -0.00089704;
    } else {
    return 0.02854987;
    }
    }
    } else {
    return -0.01368877;
    }
    } else {
    if (input[3] < -0.72678387f) {
    return -0.03842561;
    } else {
    if (input[2] < -0.61507922f) {
    return -0.00139529;
    } else {
    return 0.04643706;
    }
    }
    }
    } else {
    if (input[3] < -0.31722856f) {
    return -0.05012607;
    } else {
    if (input[0] < -0.40712890f) {
    return -0.00939379;
    } else {
    return 0.03349473;
    }
    }
    }
    }
}

static double tree_88(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00581189;
    } else {
    return 0.04396750;
    }
    } else {
    return -0.03547686;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00061343;
    } else {
    return -0.05097514;
    }
    }
    } else {
    if (input[3] < -0.33471239f) {
    if (input[1] < -0.35219604f) {
    if (input[0] < -0.29558551f) {
    return 0.05214092;
    } else {
    return 0.01374606;
    }
    } else {
    if (input[11] < 1.16641903f) {
    return -0.02186516;
    } else {
    return 0.03632335;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    return -0.03868155;
    } else {
    if (input[2] < -0.61785203f) {
    return 0.03426487;
    } else {
    return -0.01058046;
    }
    }
    }
    }
}

static double tree_89(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -0.93531644f) {
    return 0.01306928;
    } else {
    return -0.05098621;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[4] < 0.08682705f) {
    return -0.03830545;
    } else {
    return -0.00196831;
    }
    } else {
    if (input[10] < 0.47263661f) {
    return 0.03282266;
    } else {
    return 0.00697562;
    }
    }
    } else {
    return 0.05208040;
    }
    }
}

static double tree_90(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.04040251;
    } else {
    return -0.03863452;
    }
    } else {
    if (input[1] < 0.19662528f) {
    if (input[11] < 0.74000406f) {
    if (input[9] < -0.95112276f) {
    return -0.02985941;
    } else {
    if (input[0] < -0.69166023f) {
    return -0.01260741;
    } else {
    return 0.04517221;
    }
    }
    } else {
    return -0.05000139;
    }
    } else {
    return -0.05050368;
    }
    }
    } else {
    if (input[11] < 1.11839747f) {
    if (input[10] < 0.63928986f) {
    if (input[2] < 0.79602486f) {
    if (input[7] < 1.77035892f) {
    return 0.05198301;
    } else {
    if (input[1] < -0.37168044f) {
    return -0.00004347;
    } else {
    return 0.02715082;
    }
    }
    } else {
    return -0.01314515;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.56825912f) {
    return -0.03888883;
    } else {
    return 0.00303107;
    }
    } else {
    return 0.04481880;
    }
    }
    } else {
    if (input[0] < -0.30413371f) {
    if (input[10] < 0.41818562f) {
    return -0.01097711;
    } else {
    return -0.04994253;
    }
    } else {
    return 0.02430089;
    }
    }
    }
}

static double tree_91(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00529638;
    } else {
    return 0.04308644;
    }
    } else {
    return -0.03453834;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return -0.00043232;
    } else {
    return -0.05085151;
    }
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    if (input[9] < 0.39569652f) {
    return 0.02885734;
    } else {
    return -0.01490053;
    }
    } else {
    return 0.05183206;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.03678284;
    } else {
    if (input[2] < -0.57097959f) {
    return 0.00367521;
    } else {
    return -0.04148711;
    }
    }
    }
    }
}

static double tree_92(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[2] < 0.01632511f) {
    return -0.03629050;
    } else {
    return -0.00300089;
    }
    } else {
    if (input[0] < 0.04339250f) {
    return 0.00740705;
    } else {
    return 0.03149210;
    }
    }
    } else {
    return 0.05183024;
    }
    } else {
    if (input[8] < 1.07924867f) {
    return -0.05086224;
    } else {
    return 0.02462713;
    }
    }
}

static double tree_93(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.03945436;
    } else {
    return -0.03774257;
    }
    } else {
    if (input[1] < 0.19662528f) {
    if (input[11] < 0.74000406f) {
    if (input[9] < -0.95112276f) {
    return -0.02915086;
    } else {
    if (input[0] < -0.69166023f) {
    return -0.01226001;
    } else {
    return 0.04402824;
    }
    }
    } else {
    return -0.04979843;
    }
    } else {
    return -0.05035021;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[3] < 1.15005088f) {
    if (input[7] < 1.77035892f) {
    return 0.05176590;
    } else {
    return 0.01745014;
    }
    } else {
    return -0.01107374;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.58177066f) {
    return -0.03886627;
    } else {
    return 0.00156865;
    }
    } else {
    return 0.04392901;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04971953;
    } else {
    return 0.01535315;
    }
    }
    }
}

static double tree_94(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[9] < 0.42055309f) {
    return 0.04244121;
    } else {
    return -0.00475044;
    }
    } else {
    return -0.03355622;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return 0.00006141;
    } else {
    return -0.05073539;
    }
    }
    } else {
    if (input[3] < -0.37554118f) {
    if (input[1] < -0.36296749f) {
    return 0.05155262;
    } else {
    if (input[3] < -0.79709685f) {
    return 0.03639375;
    } else {
    return -0.01873726;
    }
    }
    } else {
    if (input[0] < -0.89428109f) {
    return 0.02722391;
    } else {
    if (input[7] < 0.52892351f) {
    return -0.00307830;
    } else {
    return -0.03752291;
    }
    }
    }
    }
}

static double tree_95(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[9] < -0.93531644f) {
    return 0.01143099;
    } else {
    return -0.05074663;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[11] < 0.24468073f) {
    return -0.00469307;
    } else {
    return -0.03597435;
    }
    } else {
    return 0.02570098;
    }
    } else {
    return 0.05159895;
    }
    }
}

static double tree_96(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.04132117;
    } else {
    return -0.03776333;
    }
    } else {
    if (input[7] < -0.45586258f) {
    if (input[4] < -0.86300910f) {
    return -0.00429232;
    } else {
    return -0.04744403;
    }
    } else {
    if (input[10] < -0.24407446f) {
    if (input[0] < 0.83391499f) {
    return 0.03907232;
    } else {
    return -0.02896532;
    }
    } else {
    if (input[0] < -0.36955035f) {
    return -0.04537132;
    } else {
    return -0.00802349;
    }
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[3] < 1.02467382f) {
    if (input[7] < 1.77035892f) {
    return 0.05156425;
    } else {
    return 0.01658623;
    }
    } else {
    return 0.00361786;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.61077786f) {
    return -0.03760560;
    } else {
    return 0.00013686;
    }
    } else {
    return 0.04363699;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04945167;
    } else {
    return 0.01758255;
    }
    }
    }
}

static double tree_97(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[10] < -0.12023090f) {
    return -0.00451128;
    } else {
    return 0.04156169;
    }
    } else {
    return -0.03257751;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return 0.00056912;
    } else {
    return -0.05062693;
    }
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    return 0.00898595;
    } else {
    return 0.05137187;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.03481276;
    } else {
    if (input[11] < 1.23560786f) {
    return -0.03959090;
    } else {
    return 0.00060077;
    }
    }
    }
    }
}

static double tree_98(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[11] < 0.30558813f) {
    return -0.00348900;
    } else {
    return -0.03415904;
    }
    } else {
    return 0.02476507;
    }
    } else {
    return 0.05138350;
    }
    } else {
    if (input[8] < 0.83864295f) {
    return -0.05063756;
    } else {
    return 0.01573542;
    }
    }
}

static double tree_99(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.04044755;
    } else {
    return -0.03685729;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.05010299;
    } else {
    if (input[11] < 0.83669835f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.62074184f) {
    return -0.00664782;
    } else {
    if (input[4] < 0.14258060f) {
    return 0.04418897;
    } else {
    return 0.01263925;
    }
    }
    } else {
    return -0.03427255;
    }
    } else {
    return -0.04944751;
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[0] < 0.71773016f) {
    if (input[7] < 1.77035892f) {
    return 0.05138240;
    } else {
    return 0.01575888;
    }
    } else {
    return 0.00455828;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.65027738f) {
    return -0.03643148;
    } else {
    return -0.00120170;
    }
    } else {
    return 0.04282900;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04923421;
    } else {
    return 0.01707250;
    }
    }
    }
}

static double tree_100(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.90182835f) {
    if (input[1] < -0.49978346f) {
    if (input[9] < 0.42055309f) {
    return 0.04081034;
    } else {
    return -0.00460754;
    }
    } else {
    return -0.03159924;
    }
    } else {
    if (input[3] < -1.26077580f) {
    return 0.00071130;
    } else {
    return -0.05052651;
    }
    }
    } else {
    if (input[0] < -0.37501526f) {
    if (input[10] < 0.27282000f) {
    if (input[3] < -0.58810639f) {
    return 0.03182893;
    } else {
    return -0.02841423;
    }
    } else {
    if (input[4] < -0.56612378f) {
    return 0.01296887;
    } else {
    return 0.05124173;
    }
    }
    } else {
    if (input[2] < -0.68392420f) {
    return 0.02040739;
    } else {
    return -0.03219426;
    }
    }
    }
}

static double tree_101(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[4] < 0.00834733f) {
    return -0.03349563;
    } else {
    return -0.00380348;
    }
    } else {
    return 0.02368162;
    }
    } else {
    return 0.05118796;
    }
    } else {
    if (input[8] < 0.83864295f) {
    return -0.05053732;
    } else {
    return 0.01507154;
    }
    }
}

static double tree_102(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.03648936;
    } else {
    return -0.03495090;
    }
    } else {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.74323028f) {
    return -0.04928995;
    } else {
    if (input[11] < 0.74000406f) {
    if (input[8] < 0.96669495f) {
    if (input[4] < 0.19870469f) {
    return 0.04522515;
    } else {
    return 0.01269021;
    }
    } else {
    return -0.02398608;
    }
    } else {
    return -0.02890677;
    }
    }
    } else {
    return -0.04991740;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[2] < 0.74750018f) {
    if (input[5] < 1.02634931f) {
    return 0.05116678;
    } else {
    return 0.00973985;
    }
    } else {
    return -0.00497765;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.65027738f) {
    return -0.03552414;
    } else {
    return -0.00218255;
    }
    } else {
    return 0.04152934;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04908232;
    } else {
    return 0.01365404;
    }
    }
    }
}

static double tree_103(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.78448087f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.04159173;
    } else {
    return -0.00580764;
    }
    } else {
    return -0.03224186;
    }
    } else {
    return -0.05033359;
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    return 0.00809203;
    } else {
    return 0.05097584;
    }
    } else {
    if (input[3] < -0.69456637f) {
    return 0.03269022;
    } else {
    if (input[11] < 1.21820009f) {
    return -0.03773231;
    } else {
    return -0.00144682;
    }
    }
    }
    }
}

static double tree_104(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[2] < 0.74750018f) {
    return -0.05044646;
    } else {
    return 0.00552118;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[8] < 1.15966606f) {
    if (input[4] < 0.03273119f) {
    return -0.03308265;
    } else {
    return -0.00419725;
    }
    } else {
    return 0.02273614;
    }
    } else {
    return 0.05100400;
    }
    }
}

static double tree_105(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03864690;
    } else {
    return -0.03503422;
    }
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 1.05700064f) {
    if (input[0] < -0.62074184f) {
    return -0.00618101;
    } else {
    return 0.04216791;
    }
    } else {
    return -0.03417330;
    }
    } else {
    return -0.04903774;
    }
    } else {
    return -0.04982986;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[9] < -0.75817472f) {
    return 0.00633689;
    } else {
    if (input[7] < 1.77035892f) {
    return 0.05105805;
    } else {
    return 0.01354279;
    }
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.71758914f) {
    return -0.03420626;
    } else {
    return -0.00288135;
    }
    } else {
    return 0.04126096;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04878280;
    } else {
    return 0.01609951;
    }
    }
    }
}

static double tree_106(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.78448087f) {
    if (input[1] < -0.58801365f) {
    if (input[9] < 0.42055309f) {
    return 0.04060181;
    } else {
    return -0.00543697;
    }
    } else {
    return -0.03107360;
    }
    } else {
    return -0.05022698;
    }
    } else {
    if (input[3] < -0.37554118f) {
    if (input[1] < -0.35219604f) {
    return 0.05070609;
    } else {
    if (input[11] < 1.16641903f) {
    return -0.01657753;
    } else {
    return 0.02998035;
    }
    }
    } else {
    if (input[0] < -0.89428109f) {
    return 0.02356584;
    } else {
    if (input[7] < 0.76085520f) {
    return -0.00771218;
    } else {
    return -0.03353902;
    }
    }
    }
    }
}

static double tree_107(float* input) {
    if (input[9] < -0.77117014f) {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.00254132f) {
    if (input[5] < 0.70235109f) {
    return 0.00023369;
    } else {
    return -0.03377816;
    }
    } else {
    return 0.02494732;
    }
    } else {
    return 0.05082810;
    }
    } else {
    if (input[8] < 0.78296804f) {
    return -0.05034858;
    } else {
    return 0.00572548;
    }
    }
}

static double tree_108(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03772745;
    } else {
    return -0.03412079;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.04966640;
    } else {
    if (input[11] < 0.83669835f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.62074184f) {
    return -0.00680002;
    } else {
    if (input[3] < 0.17324632f) {
    return 0.04204965;
    } else {
    return 0.01175336;
    }
    }
    } else {
    return -0.03152094;
    }
    } else {
    return -0.04882233;
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[0] < 0.69575727f) {
    if (input[7] < 1.77035892f) {
    return 0.05091571;
    } else {
    return 0.01284550;
    }
    } else {
    return 0.00706636;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.75105309f) {
    return -0.03311712;
    } else {
    return -0.00346322;
    }
    } else {
    return 0.04042489;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04854468;
    } else {
    return 0.01516943;
    }
    }
    }
}

static double tree_109(float* input) {
    if (input[11] < 0.83516049f) {
    if (input[0] < -0.78448087f) {
    if (input[1] < -0.49985555f) {
    if (input[10] < -0.10000792f) {
    return -0.00876248;
    } else {
    return 0.04001896;
    }
    } else {
    return -0.03328420;
    }
    } else {
    return -0.05012350;
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    return 0.00648280;
    } else {
    return 0.05062332;
    }
    } else {
    if (input[2] < -0.60007924f) {
    return 0.02981400;
    } else {
    if (input[7] < 0.73984194f) {
    return -0.00630911;
    } else {
    return -0.03536529;
    }
    }
    }
    }
}

static double tree_110(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[0] < 0.67154556f) {
    return -0.05026706;
    } else {
    return 0.00183637;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.07701479f) {
    if (input[8] < 0.97019160f) {
    return -0.03262564;
    } else {
    return -0.00012841;
    }
    } else {
    return 0.02516016;
    }
    } else {
    return 0.05066373;
    }
    }
}

static double tree_111(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03679343;
    } else {
    return -0.03316838;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.04951964;
    } else {
    if (input[11] < 0.83669835f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.62074184f) {
    return -0.00684194;
    } else {
    if (input[8] < 0.75597382f) {
    return 0.04147115;
    } else {
    return 0.01138857;
    }
    }
    } else {
    return -0.03061346;
    }
    } else {
    return -0.04859981;
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[3] < 0.81615162f) {
    if (input[7] < 1.77035892f) {
    return 0.05078081;
    } else {
    return 0.01217960;
    }
    } else {
    return 0.00771393;
    }
    } else {
    if (input[3] < -0.72678387f) {
    return -0.03321880;
    } else {
    if (input[1] < -0.53629339f) {
    return 0.00685490;
    } else {
    return 0.03986609;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04829633;
    } else {
    return 0.01460870;
    }
    }
    }
}

static double tree_112(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03606767;
    } else {
    if (input[11] < 0.17041875f) {
    return -0.03288255;
    } else {
    return -0.00620292;
    }
    }
    } else {
    return -0.05001866;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.05056213;
    } else {
    if (input[0] < -0.89155739f) {
    return 0.02727350;
    } else {
    return -0.00062960;
    }
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.02948743;
    } else {
    if (input[10] < 0.60518956f) {
    return -0.03674770;
    } else {
    return -0.00785776;
    }
    }
    }
    }
}

static double tree_113(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.00254132f) {
    if (input[5] < 1.04125631f) {
    return -0.00131990;
    } else {
    return -0.03054266;
    }
    } else {
    return 0.02333701;
    }
    } else {
    return 0.05050453;
    }
    } else {
    if (input[8] < 0.76748002f) {
    return -0.05017582;
    } else {
    return 0.00479630;
    }
    }
}

static double tree_114(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.03239640;
    } else {
    return -0.03110542;
    }
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.72615278f) {
    if (input[8] < 1.05700064f) {
    if (input[0] < -0.62074184f) {
    return -0.00590628;
    } else {
    return 0.03872302;
    }
    } else {
    return -0.03109348;
    }
    } else {
    return -0.04829613;
    }
    } else {
    return -0.04937460;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.30902576f) {
    return 0.03706072;
    } else {
    return -0.03386284;
    }
    } else {
    if (input[3] < 1.13300824f) {
    if (input[0] < -1.11980057f) {
    return 0.00790131;
    } else {
    return 0.05051228;
    }
    } else {
    return 0.00058892;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04813708;
    } else {
    return 0.01158878;
    }
    }
    }
}

static double tree_115(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03517164;
    } else {
    if (input[5] < -0.12161975f) {
    return -0.00691948;
    } else {
    return -0.03155615;
    }
    }
    } else {
    return -0.04991586;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.05040821;
    } else {
    if (input[8] < -0.21206461f) {
    return 0.00284045;
    } else {
    return 0.02293840;
    }
    }
    } else {
    if (input[1] < -0.61079419f) {
    return 0.02979385;
    } else {
    if (input[11] < 1.13439250f) {
    return -0.03576776;
    } else {
    return -0.00859951;
    }
    }
    }
    }
}

static double tree_116(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[0] < 0.63196081f) {
    return -0.05009839;
    } else {
    return -0.00194314;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.07701479f) {
    if (input[8] < 0.97019160f) {
    return -0.03105445;
    } else {
    return -0.00006172;
    }
    } else {
    return 0.02368333;
    }
    } else {
    return 0.05035462;
    }
    }
}

static double tree_117(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03487230;
    } else {
    return -0.03131917;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.04921082;
    } else {
    if (input[11] < 0.83669835f) {
    if (input[2] < 0.47617579f) {
    if (input[0] < -0.62074184f) {
    return -0.00700840;
    } else {
    return 0.03641079;
    }
    } else {
    return -0.02869223;
    }
    } else {
    return -0.04812258;
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[7] < 1.77035892f) {
    if (input[9] < -0.61832535f) {
    return 0.00922064;
    } else {
    return 0.05053319;
    }
    } else {
    return 0.01055776;
    }
    } else {
    if (input[1] < -0.58745420f) {
    if (input[2] < -0.81468546f) {
    return -0.02892505;
    } else {
    return -0.00745607;
    }
    } else {
    return 0.03808119;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04776360;
    } else {
    return 0.01354032;
    }
    }
    }
}

static double tree_118(float* input) {
    if (input[11] < 0.79097688f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03379507;
    } else {
    if (input[10] < -0.15486626f) {
    return -0.03241085;
    } else {
    return 0.00550533;
    }
    }
    } else {
    if (input[2] < -1.03219533f) {
    return -0.01443057;
    } else {
    return -0.04999563;
    }
    }
    } else {
    if (input[0] < -0.32673886f) {
    if (input[10] < 0.28387308f) {
    return 0.00071366;
    } else {
    if (input[4] < -0.56307203f) {
    return 0.00957616;
    } else {
    return 0.05022708;
    }
    }
    } else {
    if (input[1] < -0.39436287f) {
    return 0.00085171;
    } else {
    return -0.03048899;
    }
    }
    }
}

static double tree_119(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.00254132f) {
    return -0.02032247;
    } else {
    return 0.02196912;
    }
    } else {
    return 0.05020562;
    }
    } else {
    if (input[8] < 0.72725487f) {
    return -0.05000974;
    } else {
    return 0.00110448;
    }
    }
}

static double tree_120(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03390567;
    } else {
    return -0.03034885;
    }
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 1.05700064f) {
    if (input[0] < -0.59414947f) {
    return -0.00542128;
    } else {
    return 0.03802079;
    }
    } else {
    return -0.02998077;
    }
    } else {
    return -0.04786578;
    }
    } else {
    return -0.04906017;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.30902576f) {
    return 0.03485722;
    } else {
    return -0.03199752;
    }
    } else {
    if (input[0] < -1.11980057f) {
    return 0.00727236;
    } else {
    if (input[0] < 0.64045948f) {
    return 0.05025723;
    } else {
    return 0.00971261;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04747544;
    } else {
    return 0.01322542;
    }
    }
    }
}

static double tree_121(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03349293;
    } else {
    if (input[11] < 0.08723630f) {
    return -0.02898039;
    } else {
    return -0.00778678;
    }
    }
    } else {
    if (input[2] < -1.02520633f) {
    return -0.01455146;
    } else {
    return -0.04991107;
    }
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.05011630;
    } else {
    return 0.01556191;
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.02750279;
    } else {
    return -0.03078788;
    }
    }
    }
}

static double tree_122(float* input) {
    if (input[8] < 0.90678108f) {
    if (input[9] < -1.12760210f) {
    return 0.02840510;
    } else {
    return -0.04975512;
    }
    } else {
    if (input[1] < -0.01243420f) {
    return -0.00026702;
    } else {
    return 0.05007362;
    }
    }
}

static double tree_123(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.24716578f) {
    return 0.02931433;
    } else {
    return -0.02820050;
    }
    } else {
    if (input[1] < 0.19662528f) {
    if (input[0] < -0.74323028f) {
    return -0.04761023;
    } else {
    if (input[11] < 0.58431899f) {
    if (input[8] < 0.91679180f) {
    return 0.03751493;
    } else {
    return -0.01474465;
    }
    } else {
    return -0.01758724;
    }
    }
    } else {
    return -0.04884223;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[3] < 0.75103933f) {
    if (input[7] < 1.77035892f) {
    return 0.05031621;
    } else {
    return 0.00914062;
    }
    } else {
    return 0.00375793;
    }
    } else {
    if (input[1] < -0.58745420f) {
    return -0.02408137;
    } else {
    return 0.03598847;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04729896;
    } else {
    return 0.01044866;
    }
    }
    }
}

static double tree_124(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03261530;
    } else {
    return -0.02418192;
    }
    } else {
    if (input[2] < -1.01810265f) {
    return -0.01449349;
    } else {
    return -0.04982665;
    }
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04997036;
    } else {
    return 0.01484165;
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.02673852;
    } else {
    return -0.02993504;
    }
    }
    }
}

static double tree_125(float* input) {
    if (input[9] < -0.77905369f) {
    if (input[1] < 0.11780160f) {
    if (input[0] < 0.00254132f) {
    return -0.01930993;
    } else {
    return 0.02084054;
    }
    } else {
    return 0.04991910;
    }
    } else {
    if (input[8] < 0.67065090f) {
    return -0.04984532;
    } else {
    return -0.00179081;
    }
    }
}

static double tree_126(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03193128;
    } else {
    return -0.02850557;
    }
    } else {
    if (input[9] < -1.05076098f) {
    return -0.04869821;
    } else {
    if (input[11] < 0.58393097f) {
    if (input[8] < 1.06666005f) {
    if (input[4] < 0.11801394f) {
    return 0.03482843;
    } else {
    return 0.00708501;
    }
    } else {
    return -0.02553204;
    }
    } else {
    if (input[3] < -0.64231455f) {
    return -0.04727624;
    } else {
    return -0.01365746;
    }
    }
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.30902576f) {
    return 0.03276692;
    } else {
    return -0.03040927;
    }
    } else {
    if (input[0] < -1.11980057f) {
    return 0.00665518;
    } else {
    if (input[0] < 0.62195808f) {
    return 0.05002047;
    } else {
    return 0.01096397;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04684701;
    } else {
    return 0.01201556;
    }
    }
    }
}

static double tree_127(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03170955;
    } else {
    return -0.02312261;
    }
    } else {
    return -0.04950517;
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    return 0.00124670;
    } else {
    return 0.04963775;
    }
    } else {
    if (input[2] < -0.60007924f) {
    return 0.02476252;
    } else {
    return -0.02909727;
    }
    }
    }
}

static double tree_128(float* input) {
    if (input[8] < 0.90678108f) {
    if (input[9] < -1.12760210f) {
    return 0.02626895;
    } else {
    return -0.04954670;
    }
    } else {
    if (input[1] < -0.01243420f) {
    return -0.00041938;
    } else {
    return 0.04978842;
    }
    }
}

static double tree_129(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[7] < -0.48508310f) {
    if (input[4] < -0.71829605f) {
    return -0.00387034;
    } else {
    return -0.04487194;
    }
    } else {
    if (input[10] < 0.46107721f) {
    if (input[8] < 0.10524689f) {
    return 0.03365888;
    } else {
    return -0.01173112;
    }
    } else {
    return -0.03969769;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[7] < 1.73212039f) {
    if (input[0] < 0.60546303f) {
    return 0.05010167;
    } else {
    return 0.01167549;
    }
    } else {
    return 0.00878909;
    }
    } else {
    if (input[1] < -0.58745420f) {
    return -0.02310107;
    } else {
    return 0.03467245;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04650196;
    } else {
    return 0.01162479;
    }
    }
    }
}

static double tree_130(float* input) {
    if (input[11] < 0.73959661f) {
    if (input[0] < -0.78448087f) {
    if (input[7] < -0.06145909f) {
    return 0.03091679;
    } else {
    return -0.02226294;
    }
    } else {
    return -0.04939413;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04968266;
    } else {
    return 0.01385875;
    }
    } else {
    if (input[1] < -0.61079419f) {
    return 0.02605613;
    } else {
    return -0.02811451;
    }
    }
    }
}

static double tree_131(float* input) {
    if (input[8] < 0.69948041f) {
    if (input[0] < 0.54188818f) {
    return -0.04968167;
    } else {
    return -0.00879033;
    }
    } else {
    if (input[1] < 0.11780160f) {
    if (input[0] < -0.00410536f) {
    return -0.01900049;
    } else {
    return 0.01899345;
    }
    } else {
    return 0.04963591;
    }
    }
}

static double tree_132(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[10] < 0.14948033f) {
    return 0.03004330;
    } else {
    return -0.02645506;
    }
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 1.05700064f) {
    if (input[0] < -0.53017271f) {
    return -0.00167585;
    } else {
    return 0.03475706;
    }
    } else {
    return -0.02624139;
    }
    } else {
    return -0.04670105;
    }
    } else {
    return -0.04833480;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.30902576f) {
    return 0.03065894;
    } else {
    return -0.02890298;
    }
    } else {
    if (input[0] < -1.10291576f) {
    return 0.00782974;
    } else {
    if (input[1] < 0.68858814f) {
    return 0.04978551;
    } else {
    return 0.01204895;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04613617;
    } else {
    return 0.01099113;
    }
    }
    }
}

static double tree_133(float* input) {
    if (input[11] < 0.84121370f) {
    if (input[0] < -0.78448087f) {
    if (input[1] < -0.49985555f) {
    if (input[10] < 0.14770478f) {
    return 0.00283635;
    } else {
    return 0.03278532;
    }
    } else {
    return -0.02681831;
    }
    } else {
    return -0.04928616;
    }
    } else {
    if (input[0] < -0.37501526f) {
    if (input[10] < 0.27282000f) {
    return 0.00138513;
    } else {
    if (input[4] < -0.50623244f) {
    return 0.01194042;
    } else {
    return 0.04955566;
    }
    }
    } else {
    return -0.01625159;
    }
    }
}

static double tree_134(float* input) {
    if (input[9] < -0.97151744f) {
    if (input[1] < -0.00464893f) {
    return -0.00088832;
    } else {
    return 0.04949952;
    }
    } else {
    if (input[8] < 0.96017802f) {
    return -0.04937431;
    } else {
    return 0.01983520;
    }
    }
}

static double tree_135(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[7] < -0.63923657f) {
    return -0.04439463;
    } else {
    if (input[11] < 0.44350183f) {
    if (input[1] < 0.69318676f) {
    return 0.03647701;
    } else {
    return -0.02811015;
    }
    } else {
    return -0.04037587;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[10] < 0.63928986f) {
    if (input[9] < -0.38178104f) {
    return 0.00706629;
    } else {
    if (input[6] < -0.79935634f) {
    return 0.01424383;
    } else {
    return 0.04990232;
    }
    }
    } else {
    if (input[1] < -0.58745420f) {
    return -0.02240561;
    } else {
    return 0.03258044;
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04592609;
    } else {
    return 0.00905708;
    }
    }
    }
}

static double tree_136(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[1] < -1.00936925f) {
    return 0.00931482;
    } else {
    if (input[0] < -1.00237560f) {
    return -0.00795110;
    } else {
    return -0.04947496;
    }
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04942499;
    } else {
    return 0.01080405;
    }
    } else {
    if (input[1] < -0.61079419f) {
    return 0.02313635;
    } else {
    return -0.03110133;
    }
    }
    }
}

static double tree_137(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[2] < 0.66005123f) {
    return -0.04932426;
    } else {
    return 0.01475268;
    }
    } else {
    if (input[1] < 0.02362346f) {
    return 0.00606728;
    } else {
    return 0.04933990;
    }
    }
}

static double tree_138(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    if (input[0] < -0.51925027f) {
    return -0.02186462;
    } else {
    return 0.02731402;
    }
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 0.96669495f) {
    if (input[3] < -0.37909919f) {
    return 0.00164510;
    } else {
    return 0.03313252;
    }
    } else {
    return -0.02310412;
    }
    } else {
    return -0.04600430;
    }
    } else {
    return -0.04790914;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[2] < -1.01529217f) {
    return -0.00099058;
    } else {
    if (input[10] < 0.85877699f) {
    if (input[3] < 0.52295834f) {
    return 0.04975065;
    } else {
    return 0.01283925;
    }
    } else {
    if (input[0] < -0.34225231f) {
    return -0.00527494;
    } else {
    return 0.02661636;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04533471;
    } else {
    return 0.01023522;
    }
    }
    }
}

static double tree_139(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    if (input[8] < -0.05056951f) {
    return -0.02322546;
    } else {
    return 0.02381916;
    }
    } else {
    return -0.04937215;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04926483;
    } else {
    return 0.01022611;
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.02104033;
    } else {
    return -0.03134861;
    }
    }
    }
}

static double tree_140(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -1.07925999f) {
    return 0.01900203;
    } else {
    if (input[9] < -0.80512124f) {
    return -0.01313414;
    } else {
    return -0.04941423;
    }
    }
    } else {
    if (input[1] < 0.02362346f) {
    return 0.00539573;
    } else {
    return 0.04918661;
    }
    }
}

static double tree_141(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[7] < -0.63923657f) {
    if (input[9] < 0.43345815f) {
    return -0.04455382;
    } else {
    return -0.01572457;
    }
    } else {
    if (input[11] < 0.44350183f) {
    if (input[1] < 0.69318676f) {
    return 0.03685542;
    } else {
    return -0.02700101;
    }
    } else {
    return -0.03892995;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.30902576f) {
    return 0.02737886;
    } else {
    return -0.02665592;
    }
    } else {
    if (input[1] < -0.99995995f) {
    return 0.00853959;
    } else {
    if (input[9] < -0.54845560f) {
    return 0.01277387;
    } else {
    return 0.04950387;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04489681;
    } else {
    return 0.00965879;
    }
    }
    }
}

static double tree_142(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    if (input[9] < 0.25165287f) {
    return 0.02062965;
    } else {
    return -0.02384573;
    }
    } else {
    return -0.04926854;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04910244;
    } else {
    return 0.00948289;
    }
    } else {
    if (input[1] < -0.61079419f) {
    return 0.02207216;
    } else {
    return -0.02950082;
    }
    }
    }
}

static double tree_143(float* input) {
    if (input[9] < -0.97151744f) {
    if (input[1] < -0.00464893f) {
    return -0.00205316;
    } else {
    return 0.04903992;
    }
    } else {
    if (input[8] < 0.70510805f) {
    return -0.04931771;
    } else {
    return 0.00331810;
    }
    }
}

static double tree_144(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    return 0.00450435;
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 0.91870689f) {
    if (input[11] < 0.37031802f) {
    return 0.03150914;
    } else {
    return 0.00243854;
    }
    } else {
    return -0.01552684;
    }
    } else {
    return -0.04522902;
    }
    } else {
    return -0.04742092;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    if (input[10] < 0.16866244f) {
    return 0.02627952;
    } else {
    return -0.02517562;
    }
    } else {
    if (input[1] < -0.99995995f) {
    return 0.00807587;
    } else {
    if (input[9] < -0.52825093f) {
    return 0.01328433;
    } else {
    return 0.04937467;
    }
    }
    }
    } else {
    if (input[3] < -0.25893420f) {
    return -0.04443157;
    } else {
    return 0.00906187;
    }
    }
    }
}

static double tree_145(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    if (input[9] < 0.25165287f) {
    return 0.02012552;
    } else {
    return -0.02290085;
    }
    } else {
    return -0.04915982;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.36296749f) {
    return 0.04893108;
    } else {
    return 0.00906917;
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.02032337;
    } else {
    return -0.03000062;
    }
    }
    }
}

static double tree_146(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[2] < 0.66005123f) {
    return -0.04897278;
    } else {
    return 0.01271945;
    }
    } else {
    if (input[1] < 0.02616353f) {
    return 0.00564687;
    } else {
    return 0.04885681;
    }
    }
}

static double tree_147(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[9] < 0.41319638f) {
    if (input[4] < -0.60748398f) {
    return -0.00686529;
    } else {
    if (input[7] < -0.34148169f) {
    return -0.04303834;
    } else {
    return -0.01216485;
    }
    }
    } else {
    if (input[10] < 0.06176368f) {
    return 0.02694379;
    } else {
    return -0.03098335;
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[10] < 0.63928986f) {
    if (input[9] < -0.36464477f) {
    return 0.00611289;
    } else {
    return 0.04947567;
    }
    } else {
    if (input[3] < -0.29209641f) {
    return -0.01079818;
    } else {
    return 0.02537846;
    }
    }
    } else {
    if (input[2] < -0.60497844f) {
    return -0.04432137;
    } else {
    return 0.01865997;
    }
    }
    }
}

static double tree_148(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    if (input[9] < 0.25165287f) {
    return 0.01977183;
    } else {
    return -0.02194241;
    }
    } else {
    return -0.04904395;
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[10] < 0.21173006f) {
    return 0.00032951;
    } else {
    return 0.04853002;
    }
    } else {
    if (input[2] < -0.60007924f) {
    return 0.01787220;
    } else {
    return -0.02903443;
    }
    }
    }
}

static double tree_149(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[2] < 0.66005123f) {
    return -0.04881601;
    } else {
    return 0.01201080;
    }
    } else {
    if (input[1] < 0.04813634f) {
    return 0.00576163;
    } else {
    return 0.04867787;
    }
    }
}

static double tree_150(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[7] < -0.63923657f) {
    return -0.04222750;
    } else {
    if (input[11] < 0.44350183f) {
    if (input[1] < 0.15848684f) {
    return 0.03405404;
    } else {
    return -0.02023306;
    }
    } else {
    return -0.03668127;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[2] < -1.01529217f) {
    return -0.00213837;
    } else {
    if (input[10] < 0.85877699f) {
    return 0.04892042;
    } else {
    return 0.01284775;
    }
    }
    } else {
    if (input[3] < -0.31144834f) {
    return -0.04334890;
    } else {
    return 0.00613580;
    }
    }
    }
}

static double tree_151(float* input) {
    if (input[0] < -0.67344034f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < -0.02929480f) {
    return 0.01832589;
    } else {
    return -0.03115390;
    }
    } else {
    return 0.04808754;
    }
    } else {
    if (input[11] < 1.17659509f) {
    if (input[1] < -0.90163910f) {
    return -0.00867964;
    } else {
    return -0.04876845;
    }
    } else {
    return 0.01635236;
    }
    }
}

static double tree_152(float* input) {
    if (input[9] < -0.97151744f) {
    if (input[1] < 0.02362346f) {
    return -0.00150148;
    } else {
    return 0.04851649;
    }
    } else {
    if (input[8] < 0.70510805f) {
    return -0.04898498;
    } else {
    return 0.00197049;
    }
    }
}

static double tree_153(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[8] < -0.63218582f) {
    return 0.00441810;
    } else {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.83669835f) {
    if (input[8] < 0.74415970f) {
    return 0.02478224;
    } else {
    return -0.00866300;
    }
    } else {
    return -0.04389847;
    }
    } else {
    return -0.04657963;
    }
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    return -0.00008381;
    } else {
    if (input[1] < -0.91139662f) {
    return 0.01157507;
    } else {
    if (input[8] < 0.43211120f) {
    return 0.04920945;
    } else {
    return 0.01402978;
    }
    }
    }
    } else {
    if (input[2] < -0.63989443f) {
    return -0.04282715;
    } else {
    return 0.00537357;
    }
    }
    }
}

static double tree_154(float* input) {
    if (input[0] < -0.67344034f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < 0.07905733f) {
    return 0.01661327;
    } else {
    return -0.03001143;
    }
    } else {
    return 0.04783449;
    }
    } else {
    if (input[11] < 1.17659509f) {
    if (input[1] < -0.88764858f) {
    return -0.00886122;
    } else {
    return -0.04861441;
    }
    } else {
    return 0.01539225;
    }
    }
}

static double tree_155(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[2] < 0.66005123f) {
    return -0.04854064;
    } else {
    return 0.01059736;
    }
    } else {
    if (input[1] < 0.09062512f) {
    return 0.00670986;
    } else {
    return 0.04829850;
    }
    }
}

static double tree_156(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[7] < -0.63923657f) {
    if (input[9] < 0.43345815f) {
    return -0.04227006;
    } else {
    return -0.01198997;
    }
    } else {
    if (input[11] < 0.44350183f) {
    if (input[2] < 0.02647661f) {
    return 0.03160438;
    } else {
    return -0.01364514;
    }
    } else {
    return -0.03512293;
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[10] < 0.63928986f) {
    if (input[9] < -0.21948837f) {
    return 0.01109984;
    } else {
    return 0.04910159;
    }
    } else {
    return 0.00799356;
    }
    } else {
    if (input[2] < -0.60497844f) {
    return -0.04252445;
    } else {
    return 0.01806689;
    }
    }
    }
}

static double tree_157(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < -0.02929480f) {
    return 0.01411065;
    } else {
    return -0.03139782;
    }
    } else {
    if (input[1] < -0.36056703f) {
    return 0.04831316;
    } else {
    return 0.00667292;
    }
    }
    } else {
    if (input[11] < 1.21820009f) {
    return -0.04842162;
    } else {
    return 0.01153956;
    }
    }
}

static double tree_158(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00391342;
    } else {
    return -0.04873164;
    }
    } else {
    if (input[1] < 0.10772082f) {
    return 0.00724300;
    } else {
    return 0.04808509;
    }
    }
}

static double tree_159(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[9] < -1.05076098f) {
    return -0.04591122;
    } else {
    if (input[0] < -0.74323028f) {
    return -0.04349647;
    } else {
    if (input[4] < 0.14258060f) {
    return 0.02646362;
    } else {
    return -0.00471769;
    }
    }
    }
    } else {
    if (input[11] < 0.96541059f) {
    if (input[10] < 0.63928986f) {
    if (input[9] < -0.20461047f) {
    return 0.01164153;
    } else {
    return 0.04896385;
    }
    } else {
    return 0.00764911;
    }
    } else {
    if (input[2] < -0.60497844f) {
    return -0.04192178;
    } else {
    return 0.01764616;
    }
    }
    }
}

static double tree_160(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < 0.06035345f) {
    return 0.01296606;
    } else {
    return -0.03031984;
    }
    } else {
    if (input[1] < -0.36991328f) {
    return 0.04810044;
    } else {
    return 0.00678212;
    }
    }
    } else {
    if (input[11] < 1.18875825f) {
    return -0.04824312;
    } else {
    return 0.00998977;
    }
    }
}

static double tree_161(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00325413;
    } else {
    return -0.04858908;
    }
    } else {
    if (input[0] < 0.07701479f) {
    return 0.00760901;
    } else {
    return 0.04788189;
    }
    }
}

static double tree_162(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[9] < -1.05076098f) {
    return -0.04553687;
    } else {
    if (input[11] < 0.58393097f) {
    if (input[2] < -0.05729085f) {
    return 0.03061985;
    } else {
    return -0.00525784;
    }
    } else {
    return -0.04126206;
    }
    }
    } else {
    if (input[10] < 0.63928986f) {
    if (input[11] < 0.96663743f) {
    if (input[9] < -0.17197880f) {
    return 0.01202893;
    } else {
    return 0.04881776;
    }
    } else {
    return 0.00706855;
    }
    } else {
    if (input[2] < -0.62452984f) {
    return -0.04099892;
    } else {
    return 0.01714206;
    }
    }
    }
}

static double tree_163(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    return 0.00030002;
    } else {
    return -0.04834455;
    }
    } else {
    if (input[3] < -0.54214919f) {
    if (input[1] < -0.42000487f) {
    return 0.04779304;
    } else {
    return 0.01037489;
    }
    } else {
    if (input[2] < -0.62974524f) {
    return 0.01646555;
    } else {
    return -0.02662346;
    }
    }
    }
}

static double tree_164(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00287659;
    } else {
    return -0.04843363;
    }
    } else {
    if (input[1] < 0.17668152f) {
    return 0.00783021;
    } else {
    return 0.04762403;
    }
    }
}

static double tree_165(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < 1.05644286f) {
    if (input[0] < -0.74323028f) {
    return -0.04227291;
    } else {
    if (input[1] < -0.01791527f) {
    return 0.02363423;
    } else {
    return -0.00140681;
    }
    }
    } else {
    return -0.04511319;
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    return -0.00175424;
    } else {
    if (input[1] < -0.91139662f) {
    return 0.00902100;
    } else {
    if (input[8] < 0.41167456f) {
    return 0.04866832;
    } else {
    return 0.01235706;
    }
    }
    }
    } else {
    if (input[2] < -0.69189495f) {
    return -0.04059159;
    } else {
    return 0.00235139;
    }
    }
    }
}

static double tree_166(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < 0.26818812f) {
    return 0.00900259;
    } else {
    return -0.02770478;
    }
    } else {
    if (input[1] < -0.41112816f) {
    return 0.04772552;
    } else {
    return 0.00655661;
    }
    }
    } else {
    if (input[11] < 1.11615896f) {
    return -0.04791559;
    } else {
    return 0.00625692;
    }
    }
}

static double tree_167(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00252885;
    } else {
    return -0.04826672;
    }
    } else {
    if (input[0] < 0.09239297f) {
    return 0.00769484;
    } else {
    return 0.04738113;
    }
    }
}

static double tree_168(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[7] < -0.63923657f) {
    return -0.03938451;
    } else {
    if (input[11] < 0.44350183f) {
    return 0.01507763;
    } else {
    return -0.03149368;
    }
    }
    } else {
    if (input[10] < 0.63928986f) {
    if (input[11] < 0.91271454f) {
    return 0.04794639;
    } else {
    return 0.00935023;
    }
    } else {
    if (input[1] < -0.58473551f) {
    return -0.03886255;
    } else {
    return 0.01792092;
    }
    }
    }
}

static double tree_169(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.28628367f) {
    if (input[7] < 0.28007835f) {
    return 0.00827590;
    } else {
    return -0.02672315;
    }
    } else {
    if (input[1] < -0.42380375f) {
    return 0.04748067;
    } else {
    return 0.00703666;
    }
    }
    } else {
    if (input[11] < 1.11615896f) {
    return -0.04769228;
    } else {
    return 0.00578570;
    }
    }
}

static double tree_170(float* input) {
    if (input[9] < -0.97151744f) {
    if (input[1] < 0.10772082f) {
    return 0.00101135;
    } else {
    return 0.04714588;
    }
    } else {
    if (input[8] < 0.70510805f) {
    return -0.04808095;
    } else {
    return 0.00005455;
    }
    }
}

static double tree_171(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[9] < -1.05076098f) {
    return -0.04432240;
    } else {
    if (input[11] < 0.82649308f) {
    if (input[2] < -0.09257878f) {
    return 0.02667214;
    } else {
    return -0.00591198;
    }
    } else {
    return -0.04125778;
    }
    }
    } else {
    if (input[11] < 1.33175945f) {
    if (input[10] < 0.38597399f) {
    return 0.04777418;
    } else {
    if (input[1] < -0.47783712f) {
    return -0.01878604;
    } else {
    return 0.02926032;
    }
    }
    } else {
    return -0.03592089;
    }
    }
}

static double tree_172(float* input) {
    if (input[0] < -0.71427911f) {
    if (input[10] < 0.28628367f) {
    return -0.00743752;
    } else {
    return 0.04629567;
    }
    } else {
    if (input[11] < 1.17659509f) {
    if (input[1] < -0.81516695f) {
    return -0.00767123;
    } else {
    return -0.04771945;
    }
    } else {
    return 0.01285760;
    }
    }
}

static double tree_173(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00141771;
    } else {
    return -0.04789986;
    }
    } else {
    if (input[1] < 0.51169997f) {
    return 0.00885352;
    } else {
    return 0.04680705;
    }
    }
}

static double tree_174(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[9] < -1.05076098f) {
    return -0.04385553;
    } else {
    if (input[0] < -0.74323028f) {
    return -0.04064719;
    } else {
    if (input[4] < 0.11899805f) {
    return 0.02342147;
    } else {
    return -0.00186547;
    }
    }
    }
    } else {
    if (input[10] < 0.38597399f) {
    return 0.04724420;
    } else {
    if (input[2] < -0.62452984f) {
    return -0.03876431;
    } else {
    if (input[3] < -0.24411431f) {
    return 0.00559316;
    } else {
    return 0.02611646;
    }
    }
    }
    }
}

static double tree_175(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.35195255f) {
    if (input[7] < 0.31797600f) {
    return 0.00861769;
    } else {
    return -0.02498824;
    }
    } else {
    if (input[1] < -0.47495547f) {
    return 0.04695638;
    } else {
    return 0.00885772;
    }
    }
    } else {
    if (input[11] < 1.02670264f) {
    return -0.04745915;
    } else {
    return 0.00273399;
    }
    }
}

static double tree_176(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00108517;
    } else {
    return -0.04769293;
    }
    } else {
    if (input[0] < 0.20022376f) {
    return 0.00919187;
    } else {
    return 0.04650184;
    }
    }
}

static double tree_177(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[8] < 1.05644286f) {
    if (input[0] < -0.74323028f) {
    return -0.03980563;
    } else {
    if (input[4] < 0.00838202f) {
    return 0.02179504;
    } else {
    return 0.00200350;
    }
    }
    } else {
    return -0.04332529;
    }
    } else {
    if (input[11] < 1.16226375f) {
    if (input[3] < -0.94200897f) {
    return -0.00241516;
    } else {
    if (input[9] < -0.28218699f) {
    return 0.01034087;
    } else {
    return 0.04712545;
    }
    }
    } else {
    if (input[2] < -0.75403625f) {
    return -0.03744492;
    } else {
    return -0.00043722;
    }
    }
    }
}

static double tree_178(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.35195255f) {
    if (input[7] < 0.38869363f) {
    return 0.00743654;
    } else {
    return -0.02359928;
    }
    } else {
    if (input[1] < -0.48838341f) {
    return 0.04660996;
    } else {
    return 0.01056880;
    }
    }
    } else {
    if (input[11] < 0.94133949f) {
    return -0.04734769;
    } else {
    return 0.00155525;
    }
    }
}

static double tree_179(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[0] < 0.34465367f) {
    return -0.04744756;
    } else {
    return 0.00174782;
    }
    } else {
    if (input[0] < 0.25978497f) {
    return 0.00955759;
    } else {
    return 0.04616721;
    }
    }
}

static double tree_180(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[7] < -0.63923657f) {
    return -0.03722778;
    } else {
    if (input[11] < 0.44350183f) {
    return 0.01666757;
    } else {
    return -0.02896181;
    }
    }
    } else {
    if (input[10] < 0.38597399f) {
    return 0.04706400;
    } else {
    if (input[2] < -0.62452984f) {
    return -0.03676214;
    } else {
    return 0.02003759;
    }
    }
    }
}

static double tree_181(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    return 0.00099001;
    } else {
    return -0.04710316;
    }
    } else {
    if (input[3] < -0.54214919f) {
    return 0.04476624;
    } else {
    return -0.00970950;
    }
    }
}

static double tree_182(float* input) {
    if (input[1] < 0.59911370f) {
    if (input[8] < 0.92735636f) {
    return -0.04674448;
    } else {
    return 0.00514860;
    }
    } else {
    return 0.04473412;
    }
}

static double tree_183(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.82649308f) {
    if (input[8] < 0.66885948f) {
    return 0.02739747;
    } else {
    return -0.00162174;
    }
    } else {
    return -0.03851702;
    }
    } else {
    return -0.04240096;
    }
    } else {
    if (input[10] < 0.38597399f) {
    return 0.04677740;
    } else {
    if (input[0] < -0.66996252f) {
    return -0.03487961;
    } else {
    return 0.02120764;
    }
    }
    }
}

static double tree_184(float* input) {
    if (input[0] < -0.72277379f) {
    if (input[10] < 0.28628367f) {
    return -0.00564637;
    } else {
    return 0.04485305;
    }
    } else {
    if (input[3] < -0.79154205f) {
    return 0.01070977;
    } else {
    if (input[11] < 0.84270573f) {
    return -0.04682383;
    } else {
    return -0.01284113;
    }
    }
    }
}

static double tree_185(float* input) {
    if (input[1] < 0.55818099f) {
    if (input[8] < 0.92735636f) {
    return -0.04643928;
    } else {
    return 0.00420874;
    }
    } else {
    return 0.04419498;
    }
}

static double tree_186(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[9] < -1.05076098f) {
    return -0.04183727;
    } else {
    if (input[11] < 0.82649308f) {
    if (input[8] < 0.61431980f) {
    return 0.02370778;
    } else {
    return -0.00174034;
    }
    } else {
    return -0.03797628;
    }
    }
    } else {
    if (input[11] < 1.33175945f) {
    if (input[1] < -0.91139662f) {
    return -0.00499004;
    } else {
    if (input[3] < -0.75332081f) {
    return 0.01061797;
    } else {
    return 0.04646331;
    }
    }
    } else {
    return -0.03180923;
    }
    }
}

static double tree_187(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.35195255f) {
    return -0.00984259;
    } else {
    if (input[1] < -0.51595533f) {
    return 0.04565442;
    } else {
    return 0.00902872;
    }
    }
    } else {
    if (input[11] < 0.94133949f) {
    return -0.04656110;
    } else {
    return 0.00115940;
    }
    }
}

static double tree_188(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[0] < 0.33888107f) {
    return -0.04668562;
    } else {
    return 0.00190380;
    }
    } else {
    if (input[0] < 0.53388286f) {
    return 0.01037589;
    } else {
    return 0.04503082;
    }
    }
}

static double tree_189(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.82649308f) {
    if (input[8] < 0.66217315f) {
    return 0.02553697;
    } else {
    return -0.00143711;
    }
    } else {
    return -0.03706363;
    }
    } else {
    return -0.04129251;
    }
    } else {
    if (input[10] < 0.38597399f) {
    return 0.04615458;
    } else {
    if (input[2] < -0.62452984f) {
    return -0.03455434;
    } else {
    return 0.01893258;
    }
    }
    }
}

static double tree_190(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.78448087f) {
    return 0.00096783;
    } else {
    return -0.04626387;
    }
    } else {
    if (input[1] < -0.39600799f) {
    if (input[3] < -0.57968974f) {
    return 0.04515087;
    } else {
    return 0.01188134;
    }
    } else {
    return -0.01170722;
    }
    }
}

static double tree_191(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.87312329f) {
    return 0.00093553;
    } else {
    return -0.04644337;
    }
    } else {
    if (input[0] < 0.56374240f) {
    return 0.01075115;
    } else {
    return 0.04459413;
    }
    }
}

static double tree_192(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[9] < -1.05076098f) {
    return -0.04060392;
    } else {
    if (input[11] < 0.58393097f) {
    return 0.01507436;
    } else {
    return -0.03501069;
    }
    }
    } else {
    if (input[11] < 0.84121370f) {
    if (input[8] < 0.00034259f) {
    return 0.04617547;
    } else {
    return 0.01158591;
    }
    } else {
    if (input[2] < -0.60497844f) {
    return -0.03427145;
    } else {
    return 0.01706110;
    }
    }
    }
}

static double tree_193(float* input) {
    if (input[0] < -0.61931300f) {
    if (input[10] < 0.28628367f) {
    return -0.00946763;
    } else {
    if (input[1] < -0.52260882f) {
    return 0.04491914;
    } else {
    return 0.00918243;
    }
    }
    } else {
    if (input[11] < 0.92312974f) {
    return -0.04593797;
    } else {
    return 0.00038980;
    }
    }
}

static double tree_194(float* input) {
    if (input[1] < 0.59911370f) {
    if (input[9] < -0.95112276f) {
    return 0.00216027;
    } else {
    return -0.04553973;
    }
    } else {
    return 0.04303470;
    }
}

static double tree_195(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[7] < -0.67153430f) {
    return -0.03471171;
    } else {
    if (input[11] < 0.44350183f) {
    return 0.01493932;
    } else {
    return -0.02515902;
    }
    }
    } else {
    if (input[3] < -0.81592894f) {
    if (input[10] < 1.01780701f) {
    return -0.00226352;
    } else {
    return -0.03058250;
    }
    } else {
    if (input[0] < -0.86308026f) {
    return 0.00538387;
    } else {
    return 0.04518399;
    }
    }
    }
}

static double tree_196(float* input) {
    if (input[0] < -0.72277379f) {
    if (input[10] < 0.28628367f) {
    return -0.00416793;
    } else {
    return 0.04309780;
    }
    } else {
    if (input[10] < 0.74184596f) {
    return -0.04518475;
    } else {
    return 0.00105879;
    }
    }
}

static double tree_197(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.85101861f) {
    return -0.00074520;
    } else {
    return -0.04579481;
    }
    } else {
    if (input[0] < 0.63247418f) {
    return 0.01123752;
    } else {
    return 0.04364237;
    }
    }
}

static double tree_198(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[2] < 0.45651072f) {
    if (input[11] < 0.82649308f) {
    if (input[7] < -0.94459683f) {
    return -0.00009471;
    } else {
    return 0.02405007;
    }
    } else {
    return -0.03484648;
    }
    } else {
    return -0.03955751;
    }
    } else {
    if (input[10] < 0.35727122f) {
    return 0.04521135;
    } else {
    if (input[2] < -0.62452984f) {
    return -0.03224792;
    } else {
    return 0.01723470;
    }
    }
    }
}

static double tree_199(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[10] < 0.35195255f) {
    return -0.01063136;
    } else {
    if (input[1] < -0.55641830f) {
    return 0.04417475;
    } else {
    return 0.00964206;
    }
    }
    } else {
    if (input[11] < 0.69204229f) {
    return -0.04505599;
    } else {
    return -0.00858642;
    }
    }
}

static double tree_200(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[9] < -0.87312329f) {
    return -0.00351468;
    } else {
    return -0.04541758;
    }
    } else {
    return 0.04154462;
    }
}

static double tree_201(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < 0.18132129f) {
    if (input[11] < 0.58431899f) {
    return 0.01565607;
    } else {
    return -0.03182450;
    }
    } else {
    return -0.03873828;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.02555422;
    } else {
    return 0.02767334;
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04517959;
    } else {
    return -0.01188245;
    }
    }
}

static double tree_202(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[10] < 0.35195255f) {
    return -0.00988215;
    } else {
    if (input[1] < -0.56517994f) {
    return 0.04371375;
    } else {
    return 0.00970017;
    }
    }
    } else {
    if (input[11] < 0.64569819f) {
    return -0.04464008;
    } else {
    return -0.00893308;
    }
    }
}

static double tree_203(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[9] < -0.74757796f) {
    return -0.00283113;
    } else {
    return -0.04506820;
    }
    } else {
    if (input[0] < 0.79914224f) {
    return 0.01208065;
    } else {
    return 0.04260074;
    }
    }
}

static double tree_204(float* input) {
    if (input[7] < -0.09201070f) {
    if (input[9] < -1.05076098f) {
    return -0.03834280;
    } else {
    if (input[11] < 0.58393097f) {
    return 0.01733188;
    } else {
    return -0.03181757;
    }
    }
    } else {
    if (input[3] < -0.76796299f) {
    if (input[10] < 1.09872746f) {
    return -0.00373081;
    } else {
    return -0.02765644;
    }
    } else {
    if (input[1] < -0.70513082f) {
    return 0.00845013;
    } else {
    return 0.04410169;
    }
    }
    }
}

static double tree_205(float* input) {
    if (input[0] < -0.73923028f) {
    if (input[10] < 0.28628367f) {
    return -0.00200718;
    } else {
    return 0.04145041;
    }
    } else {
    if (input[1] < -0.74718726f) {
    return 0.00679775;
    } else {
    return -0.04301074;
    }
    }
}

static double tree_206(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[9] < -0.87312329f) {
    return -0.00391528;
    } else {
    return -0.04465813;
    }
    } else {
    return 0.04045941;
    }
}

static double tree_207(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < 0.18132129f) {
    if (input[11] < 0.58431899f) {
    return 0.01463172;
    } else {
    return -0.03020461;
    }
    } else {
    return -0.03746731;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.02405973;
    } else {
    return 0.02579038;
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04437718;
    } else {
    return -0.01102354;
    }
    }
}

static double tree_208(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[1] < -0.41068035f) {
    if (input[10] < 0.45702964f) {
    return 0.00646910;
    } else {
    return 0.04300127;
    }
    } else {
    return -0.01153363;
    }
    } else {
    if (input[11] < 0.58251423f) {
    return -0.04374193;
    } else {
    return -0.00943029;
    }
    }
}

static double tree_209(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[0] < 0.14575744f) {
    return -0.04426108;
    } else {
    return -0.00444054;
    }
    } else {
    return 0.03909145;
    }
}

static double tree_210(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < 0.18132129f) {
    if (input[11] < 0.58431899f) {
    return 0.01401466;
    } else {
    return -0.02936423;
    }
    } else {
    return -0.03676295;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.02317656;
    } else {
    return 0.02495632;
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04392267;
    } else {
    return -0.01041442;
    }
    }
}

static double tree_211(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.73740905f) {
    return -0.00159997;
    } else {
    return -0.04356981;
    }
    } else {
    if (input[1] < -0.39600799f) {
    return 0.04042764;
    } else {
    return -0.01025464;
    }
    }
}

static double tree_212(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[9] < -0.87312329f) {
    return -0.00395381;
    } else {
    return -0.04383985;
    }
    } else {
    return 0.03933775;
    }
}

static double tree_213(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < 0.18132129f) {
    if (input[11] < 0.58431899f) {
    return 0.01341537;
    } else {
    return -0.02849622;
    }
    } else {
    return -0.03605288;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.02226987;
    } else {
    return 0.02419979;
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04345612;
    } else {
    return -0.00969812;
    }
    }
}

static double tree_214(float* input) {
    if (input[3] < -0.67885411f) {
    if (input[10] < 0.75969487f) {
    return 0.00748684;
    } else {
    return 0.04139641;
    }
    } else {
    if (input[1] < -0.81865042f) {
    return 0.01386878;
    } else {
    return -0.04078589;
    }
    }
}

static double tree_215(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[0] < 0.10555104f) {
    return -0.04332709;
    } else {
    return -0.00598492;
    }
    } else {
    return 0.03774531;
    }
}

static double tree_216(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[7] < -0.63923657f) {
    return -0.03050479;
    } else {
    return -0.00295814;
    }
    } else {
    if (input[3] < -0.76796299f) {
    return -0.01976223;
    } else {
    if (input[11] < 0.79097688f) {
    return 0.04311612;
    } else {
    return 0.01067244;
    }
    }
    }
}

static double tree_217(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[1] < -0.48340941f) {
    if (input[10] < 0.65263617f) {
    return 0.01045481;
    } else {
    return 0.04137071;
    }
    } else {
    return -0.00907384;
    }
    } else {
    if (input[11] < 0.50552255f) {
    return -0.04218714;
    } else {
    return -0.01083800;
    }
    }
}

static double tree_218(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[9] < -0.87312329f) {
    return -0.00434785;
    } else {
    return -0.04293941;
    }
    } else {
    return 0.03809684;
    }
}

static double tree_219(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < -0.04124764f) {
    if (input[11] < 0.82649308f) {
    return 0.01466725;
    } else {
    return -0.02829955;
    }
    } else {
    return -0.03417408;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.02122333;
    } else {
    return 0.02262219;
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04250921;
    } else {
    return -0.00909917;
    }
    }
}

static double tree_220(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[10] < 0.28628367f) {
    return -0.00828848;
    } else {
    if (input[1] < -0.65258282f) {
    return 0.04075227;
    } else {
    return 0.01139186;
    }
    }
    } else {
    if (input[11] < 0.47422957f) {
    return -0.04163331;
    } else {
    return -0.01101917;
    }
    }
}

static double tree_221(float* input) {
    if (input[1] < 0.59911370f) {
    if (input[9] < -0.87312329f) {
    return -0.00362665;
    } else {
    return -0.04237230;
    }
    } else {
    return 0.03801938;
    }
}

static double tree_222(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[9] < -1.07155347f) {
    return -0.03456491;
    } else {
    if (input[3] < -0.67817867f) {
    return -0.03209780;
    } else {
    if (input[7] < -0.55976439f) {
    return 0.00457908;
    } else {
    return 0.02437843;
    }
    }
    }
    } else {
    if (input[10] < 0.43322268f) {
    return 0.04195474;
    } else {
    return -0.00840330;
    }
    }
}

static double tree_223(float* input) {
    if (input[3] < -0.67885411f) {
    if (input[11] < 1.17525959f) {
    return 0.00944045;
    } else {
    return 0.03966562;
    }
    } else {
    if (input[0] < -0.91267395f) {
    return 0.01119430;
    } else {
    return -0.03965614;
    }
    }
}

static double tree_224(float* input) {
    if (input[8] < 0.94355404f) {
    if (input[2] < -0.03228369f) {
    return -0.04189689;
    } else {
    return -0.00800032;
    }
    } else {
    return 0.03575378;
    }
}

static double tree_225(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.12658133f) {
    if (input[2] < -0.04124764f) {
    if (input[0] < -0.74323028f) {
    return -0.02628250;
    } else {
    return 0.01234222;
    }
    } else {
    return -0.03282804;
    }
    } else {
    if (input[0] < -0.78535736f) {
    return -0.01988301;
    } else {
    return 0.02140055;
    }
    }
    } else {
    if (input[10] < 0.35727122f) {
    return 0.04162671;
    } else {
    return -0.00742948;
    }
    }
}

static double tree_226(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[1] < -0.48340941f) {
    return 0.03691125;
    } else {
    return -0.00845785;
    }
    } else {
    return -0.03757690;
    }
}

static double tree_227(float* input) {
    if (input[8] < 1.10714674f) {
    if (input[9] < -0.61557496f) {
    return -0.00348052;
    } else {
    return -0.04152200;
    }
    } else {
    return 0.03663712;
    }
}

static double tree_228(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[7] < -0.63923657f) {
    return -0.02806550;
    } else {
    return -0.00261686;
    }
    } else {
    if (input[11] < 0.73959661f) {
    return 0.04083076;
    } else {
    if (input[3] < -0.67212504f) {
    return -0.02694906;
    } else {
    return 0.01125179;
    }
    }
    }
}

static double tree_229(float* input) {
    if (input[11] < 0.58443308f) {
    if (input[0] < -0.63148510f) {
    return -0.00456877;
    } else {
    return -0.04037450;
    }
    } else {
    if (input[1] < -0.44909948f) {
    return 0.03789329;
    } else {
    return -0.00708391;
    }
    }
}

static double tree_230(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[8] < 0.70040429f) {
    return -0.04082934;
    } else {
    return -0.00627598;
    }
    } else {
    return 0.03551019;
    }
}

static double tree_231(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[9] < -1.07155347f) {
    return -0.03251874;
    } else {
    if (input[3] < -0.67817867f) {
    return -0.03026384;
    } else {
    if (input[4] < 0.00838202f) {
    return 0.02283751;
    } else {
    return 0.00551213;
    }
    }
    }
    } else {
    if (input[10] < 0.35727122f) {
    return 0.04056943;
    } else {
    return -0.00682997;
    }
    }
}

static double tree_232(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[10] < 0.28628367f) {
    return -0.00756317;
    } else {
    return 0.03584594;
    }
    } else {
    return -0.03626092;
    }
}

static double tree_233(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[8] < 0.67774916f) {
    return -0.04023445;
    } else {
    return -0.00674390;
    }
    } else {
    return 0.03475048;
    }
}

static double tree_234(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[2] < 0.08897178f) {
    if (input[11] < 0.82649308f) {
    return 0.01693427;
    } else {
    return -0.02700285;
    }
    } else {
    return -0.03074176;
    }
    } else {
    if (input[3] < -0.76796299f) {
    return -0.01753109;
    } else {
    if (input[11] < 0.79097688f) {
    return 0.04013019;
    } else {
    return 0.00930682;
    }
    }
    }
}

static double tree_235(float* input) {
    if (input[1] < -0.75446737f) {
    return 0.03470014;
    } else {
    if (input[11] < 0.96541059f) {
    return -0.03838431;
    } else {
    return 0.00749105;
    }
    }
}

static double tree_236(float* input) {
    if (input[8] < 1.10714674f) {
    if (input[9] < -0.43429953f) {
    return -0.00594826;
    } else {
    return -0.03973758;
    }
    } else {
    return 0.03468771;
    }
}

static double tree_237(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[9] < -1.07155347f) {
    return -0.03112031;
    } else {
    if (input[3] < -0.67817867f) {
    return -0.02896415;
    } else {
    if (input[4] < -0.01526450f) {
    return 0.02196744;
    } else {
    return 0.00518288;
    }
    }
    }
    } else {
    if (input[10] < 0.35727122f) {
    return 0.03942220;
    } else {
    return -0.00621100;
    }
    }
}

static double tree_238(float* input) {
    if (input[0] < -0.73923028f) {
    if (input[1] < -0.62648517f) {
    return 0.03651799;
    } else {
    return 0.00218159;
    }
    } else {
    if (input[11] < 0.75298560f) {
    return -0.03848391;
    } else {
    return 0.00119763;
    }
    }
}

static double tree_239(float* input) {
    if (input[0] < 0.34465367f) {
    if (input[9] < -0.45488673f) {
    return -0.00931355;
    } else {
    return -0.03882476;
    }
    } else {
    return 0.03316711;
    }
}

static double tree_240(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[7] < -0.63923657f) {
    return -0.02580870;
    } else {
    return -0.00192882;
    }
    } else {
    if (input[2] < -0.68973243f) {
    return -0.01422162;
    } else {
    return 0.03660170;
    }
    }
}

static double tree_241(float* input) {
    if (input[1] < -0.75446737f) {
    return 0.03357561;
    } else {
    if (input[11] < 0.96541059f) {
    return -0.03708132;
    } else {
    return 0.00673360;
    }
    }
}

static double tree_242(float* input) {
    if (input[8] < 1.10714674f) {
    if (input[1] < -0.05333658f) {
    return -0.03848663;
    } else {
    return -0.00697527;
    }
    } else {
    return 0.03327360;
    }
}

static double tree_243(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[9] < -1.05076098f) {
    return -0.02957382;
    } else {
    if (input[0] < -0.78441244f) {
    return -0.02724808;
    } else {
    if (input[4] < -0.00429581f) {
    return 0.02236101;
    } else {
    return 0.00484101;
    }
    }
    }
    } else {
    if (input[10] < 0.32796070f) {
    return 0.03830672;
    } else {
    return -0.00567095;
    }
    }
}

static double tree_244(float* input) {
    if (input[0] < -0.73923028f) {
    if (input[1] < -0.66375625f) {
    return 0.03535764;
    } else {
    return 0.00352114;
    }
    } else {
    if (input[11] < 0.58540225f) {
    return -0.03785577;
    } else {
    return -0.00042818;
    }
    }
}

static double tree_245(float* input) {
    if (input[0] < 0.39703411f) {
    if (input[9] < -0.38795823f) {
    return -0.00851898;
    } else {
    return -0.03769010;
    }
    } else {
    return 0.03249111;
    }
}

static double tree_246(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[8] < 1.10714674f) {
    if (input[0] < -0.78441244f) {
    return -0.02664151;
    } else {
    if (input[4] < -0.01044104f) {
    return 0.02137357;
    } else {
    return 0.00536097;
    }
    }
    } else {
    return -0.02911714;
    }
    } else {
    if (input[10] < 0.29034400f) {
    return 0.03774592;
    } else {
    return -0.00521597;
    }
    }
}

static double tree_247(float* input) {
    if (input[3] < -0.67320996f) {
    return 0.03227222;
    } else {
    if (input[0] < -0.78498256f) {
    return 0.00567501;
    } else {
    return -0.03535675;
    }
    }
}

static double tree_248(float* input) {
    if (input[1] < 0.44972104f) {
    if (input[8] < 0.46364537f) {
    return -0.03692861;
    } else {
    return -0.00926507;
    }
    } else {
    return 0.03168738;
    }
}

static double tree_249(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[2] < 0.08897178f) {
    if (input[11] < 0.82649308f) {
    return 0.01531765;
    } else {
    return -0.02392124;
    }
    } else {
    return -0.02765721;
    }
    } else {
    if (input[3] < -0.76796299f) {
    return -0.01581489;
    } else {
    return 0.03406807;
    }
    }
}

static double tree_250(float* input) {
    if (input[1] < -0.75446737f) {
    return 0.03211420;
    } else {
    if (input[11] < 0.96541059f) {
    return -0.03529384;
    } else {
    return 0.00614913;
    }
    }
}

static double tree_251(float* input) {
    if (input[0] < 0.34465367f) {
    return -0.03287403;
    } else {
    return 0.03057149;
    }
}

static double tree_252(float* input) {
    if (input[8] < -0.45187804f) {
    if (input[10] < 0.03880658f) {
    return 0.03643427;
    } else {
    return -0.00282272;
    }
    } else {
    if (input[8] < 1.10714674f) {
    if (input[3] < -0.76762569f) {
    return -0.02706775;
    } else {
    return 0.01573529;
    }
    } else {
    return -0.02788937;
    }
    }
}

static double tree_253(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[10] < 0.64515424f) {
    return -0.00270737;
    } else {
    return 0.03305409;
    }
    } else {
    return -0.03198217;
    }
}

static double tree_254(float* input) {
    if (input[8] < 1.10714674f) {
    if (input[1] < -0.12599173f) {
    return -0.03562642;
    } else {
    return -0.00902202;
    }
    } else {
    return 0.03064243;
    }
}

static double tree_255(float* input) {
    if (input[7] < -0.22704370f) {
    if (input[2] < 0.08897178f) {
    return -0.00695447;
    } else {
    return -0.02633867;
    }
    } else {
    if (input[2] < -0.69358957f) {
    return -0.01480379;
    } else {
    return 0.03349172;
    }
    }
}

static double tree_256(float* input) {
    if (input[1] < -0.48825750f) {
    if (input[10] < 0.64002287f) {
    return -0.00317168;
    } else {
    return 0.03449079;
    }
    } else {
    return -0.03006488;
    }
}

static double tree_257(float* input) {
    if (input[1] < 0.44972104f) {
    return -0.03130280;
    } else {
    return 0.02979526;
    }
}

static double tree_258(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.63923657f) {
    return -0.02292336;
    } else {
    if (input[2] < -0.63023675f) {
    return -0.01982216;
    } else {
    return 0.01600465;
    }
    }
    } else {
    if (input[10] < 0.06990016f) {
    return 0.03523814;
    } else {
    return -0.00242752;
    }
    }
}

static double tree_259(float* input) {
    if (input[11] < 0.58443308f) {
    return -0.02950615;
    } else {
    if (input[3] < -0.67086685f) {
    return 0.03411003;
    } else {
    return -0.00170429;
    }
    }
}

static double tree_260(float* input) {
    if (input[8] < 0.94355404f) {
    return -0.03162245;
    } else {
    return 0.02798690;
    }
}

static double tree_261(float* input) {
    if (input[8] < -0.45187804f) {
    if (input[11] < 0.32781404f) {
    return 0.03444403;
    } else {
    return -0.00081307;
    }
    } else {
    if (input[9] < -1.07155347f) {
    return -0.02621295;
    } else {
    if (input[3] < -0.76762569f) {
    return -0.02552675;
    } else {
    return 0.01445233;
    }
    }
    }
}

static double tree_262(float* input) {
    if (input[1] < -0.75446737f) {
    return 0.03032576;
    } else {
    if (input[11] < 0.89008778f) {
    return -0.03294504;
    } else {
    return 0.00437659;
    }
    }
}

static double tree_263(float* input) {
    if (input[0] < 0.34465367f) {
    return -0.03060016;
    } else {
    return 0.02838500;
    }
}

static double tree_264(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[2] < 0.21249977f) {
    if (input[3] < -0.67817867f) {
    return -0.02450805;
    } else {
    return 0.01629367;
    }
    } else {
    return -0.02477567;
    }
    } else {
    if (input[10] < -0.03772479f) {
    return 0.03389745;
    } else {
    return -0.00091859;
    }
    }
}

static double tree_265(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[11] < 1.04258621f) {
    return 0.00042966;
    } else {
    return 0.03246678;
    }
    } else {
    return -0.02967044;
    }
}

static double tree_266(float* input) {
    if (input[1] < 0.44972104f) {
    return -0.02945851;
    } else {
    return 0.02811632;
    }
}

static double tree_267(float* input) {
    if (input[7] < -0.16926515f) {
    if (input[2] < 0.08897178f) {
    return -0.00607581;
    } else {
    return -0.02440562;
    }
    } else {
    if (input[2] < -0.63360935f) {
    return -0.01248387;
    } else {
    return 0.03197221;
    }
    }
}

static double tree_268(float* input) {
    if (input[1] < -0.47922948f) {
    if (input[10] < 0.74640960f) {
    return 0.00012428;
    } else {
    return 0.03212981;
    }
    } else {
    return -0.02799709;
    }
}

static double tree_269(float* input) {
    if (input[0] < 0.34465367f) {
    return -0.02912353;
    } else {
    return 0.02717292;
    }
}

static double tree_270(float* input) {
    if (input[9] < 0.44063318f) {
    if (input[7] < -0.63923657f) {
    return -0.02129088;
    } else {
    if (input[11] < 0.79097688f) {
    return 0.01415104;
    } else {
    return -0.01581452;
    }
    }
    } else {
    if (input[10] < -0.09767881f) {
    return 0.03247957;
    } else {
    return -0.00012450;
    }
    }
}

static double tree_271(float* input) {
    if (input[3] < -0.54381490f) {
    if (input[11] < 1.35726845f) {
    return 0.00800075;
    } else {
    return 0.03031821;
    }
    } else {
    if (input[0] < -0.39459395f) {
    return -0.00372955;
    } else {
    return -0.03084804;
    }
    }
}

static double tree_272(float* input) {
    if (input[8] < 0.94355404f) {
    return -0.02946571;
    } else {
    return 0.02586823;
    }
}

static double tree_273(float* input) {
    if (input[8] < -0.45187804f) {
    if (input[11] < 0.18095338f) {
    return 0.03142984;
    } else {
    return 0.00147104;
    }
    } else {
    if (input[7] < -0.22575533f) {
    if (input[2] < -0.04124764f) {
    return -0.00547152;
    } else {
    return -0.02364131;
    }
    } else {
    return 0.00079293;
    }
    }
}

static double tree_274(float* input) {
    if (input[1] < -0.48825750f) {
    if (input[10] < 0.79331368f) {
    return 0.00138605;
    } else {
    return 0.03089638;
    }
    } else {
    return -0.02667424;
    }
}

static double tree_275(float* input) {
    if (input[1] < -0.01104637f) {
    return -0.03130605;
    } else {
    return 0.02248492;
    }
}

static double tree_276(float* input) {
    if (input[9] < 0.56847656f) {
    if (input[11] < 1.16226375f) {
    if (input[2] < 0.13847627f) {
    return 0.01697914;
    } else {
    return -0.02108996;
    }
    } else {
    return -0.02552575;
    }
    } else {
    return 0.02561694;
    }
}

static double tree_277(float* input) {
    if (input[0] < -0.54029107f) {
    if (input[11] < 1.04258621f) {
    return 0.00056005;
    } else {
    return 0.03071064;
    }
    } else {
    return -0.02751566;
    }
}

static double tree_278(float* input) {
    if (input[8] < 0.94355404f) {
    return -0.02846748;
    } else {
    return 0.02466822;
    }
}

static double tree_279(float* input) {
    if (input[7] < -0.06360215f) {
    if (input[2] < 0.08897178f) {
    return -0.00472720;
    } else {
    return -0.02262280;
    }
    } else {
    if (input[2] < -0.63360935f) {
    return -0.01111010;
    } else {
    return 0.03009732;
    }
    }
}

static double tree_280(float* input) {
    if (input[10] < 0.45124459f) {
    return -0.02507521;
    } else {
    if (input[3] < -0.77183914f) {
    return 0.03048316;
    } else {
    return 0.00270840;
    }
    }
}

static double tree_281(float* input) {
    if (input[0] < 0.34465367f) {
    return -0.02721322;
    } else {
    return 0.02514113;
    }
}

static double tree_282(float* input) {
    if (input[8] < -0.45187804f) {
    if (input[11] < 0.07784054f) {
    return 0.02902037;
    } else {
    return 0.00289873;
    }
    } else {
    if (input[2] < -0.69358957f) {
    return -0.02157761;
    } else {
    if (input[2] < 0.13747874f) {
    return 0.01550012;
    } else {
    return -0.02115514;
    }
    }
    }
}

static double tree_283(float* input) {
    if (input[1] < -0.47922948f) {
    if (input[10] < 0.86055100f) {
    return 0.00291692;
    } else {
    return 0.02926952;
    }
    } else {
    return -0.02529963;
    }
}

static double tree_284(float* input) {
    if (input[1] < -0.01104637f) {
    return -0.02976437;
    } else {
    return 0.02116597;
    }
}

static double tree_285(float* input) {
    if (input[9] < 0.56847656f) {
    if (input[11] < 1.16226375f) {
    if (input[9] < -0.95112276f) {
    return -0.02029455;
    } else {
    return 0.01542479;
    }
    } else {
    return -0.02423062;
    }
    } else {
    return 0.02394436;
    }
}

static double tree_286(float* input) {
    if (input[3] < -0.54381490f) {
    return 0.02476874;
    } else {
    if (input[0] < -0.31526965f) {
    return -0.00553293;
    } else {
    return -0.02721070;
    }
    }
}

static double tree_287(float* input) {
    if (input[8] < 1.10714674f) {
    return -0.02603947;
    } else {
    return 0.02455632;
    }
}

static double tree_288(float* input) {
    if (input[3] < -0.76796299f) {
    return -0.02191165;
    } else {
    if (input[9] < -0.86708093f) {
    return -0.01673269;
    } else {
    if (input[10] < 0.28504223f) {
    return 0.03215809;
    } else {
    return 0.00534822;
    }
    }
    }
}

static double tree_289(float* input) {
    if (input[0] < -0.77962661f) {
    return 0.02414819;
    } else {
    if (input[10] < -0.15918165f) {
    return -0.02775955;
    } else {
    return -0.00460713;
    }
    }
}

static double tree_290(float* input) {
    if (input[1] < -0.01104637f) {
    return -0.02872059;
    } else {
    return 0.02028065;
    }
}

static double tree_291(float* input) {
    if (input[7] < -0.16926515f) {
    return -0.01622521;
    } else {
    if (input[2] < -0.61844707f) {
    return -0.01079749;
    } else {
    return 0.02809193;
    }
    }
}

static double tree_292(float* input) {
    if (input[1] < -0.47922948f) {
    if (input[11] < 1.15105915f) {
    return 0.00431630;
    } else {
    return 0.02761601;
    }
    } else {
    return -0.02399411;
    }
}

static double tree_293(float* input) {
    if (input[8] < 0.94355404f) {
    return -0.02598483;
    } else {
    return 0.02230943;
    }
}

static double tree_294(float* input) {
    if (input[3] < -0.76796299f) {
    return -0.02108240;
    } else {
    if (input[9] < -0.86708093f) {
    return -0.01585147;
    } else {
    if (input[10] < 0.13953891f) {
    return 0.03108394;
    } else {
    return 0.00613629;
    }
    }
    }
}

static double tree_295(float* input) {
    if (input[11] < 0.58443308f) {
    return -0.02338860;
    } else {
    if (input[3] < -0.91881824f) {
    return 0.02784009;
    } else {
    return 0.00361471;
    }
    }
}

static double tree_296(float* input) {
    if (input[0] < 0.34465367f) {
    return -0.02492120;
    } else {
    return 0.02293596;
    }
}

static double tree_297(float* input) {
    if (input[9] < 0.56847656f) {
    if (input[11] < 1.04258621f) {
    if (input[9] < -0.86708093f) {
    return -0.01678243;
    } else {
    return 0.01570324;
    }
    } else {
    return -0.02123495;
    }
    } else {
    return 0.02200003;
    }
}

static double tree_298(float* input) {
    if (input[1] < -0.75446737f) {
    return 0.02573221;
    } else {
    if (input[10] < 0.26423860f) {
    return -0.02715322;
    } else {
    return 0.00039999;
    }
    }
}

static double tree_299(float* input) {
    if (input[1] < 0.44972104f) {
    return -0.02413017;
    } else {
    return 0.02284730;
    }
}


// ── Aggregate scores across all trees ────────────────────
static double* score(float* input) {
    double score_0 = 0.0;
    double score_1 = 0.0;
    double score_2 = 0.0;
    score_0 += tree_0(input);
    score_1 += tree_1(input);
    score_2 += tree_2(input);
    score_0 += tree_3(input);
    score_1 += tree_4(input);
    score_2 += tree_5(input);
    score_0 += tree_6(input);
    score_1 += tree_7(input);
    score_2 += tree_8(input);
    score_0 += tree_9(input);
    score_1 += tree_10(input);
    score_2 += tree_11(input);
    score_0 += tree_12(input);
    score_1 += tree_13(input);
    score_2 += tree_14(input);
    score_0 += tree_15(input);
    score_1 += tree_16(input);
    score_2 += tree_17(input);
    score_0 += tree_18(input);
    score_1 += tree_19(input);
    score_2 += tree_20(input);
    score_0 += tree_21(input);
    score_1 += tree_22(input);
    score_2 += tree_23(input);
    score_0 += tree_24(input);
    score_1 += tree_25(input);
    score_2 += tree_26(input);
    score_0 += tree_27(input);
    score_1 += tree_28(input);
    score_2 += tree_29(input);
    score_0 += tree_30(input);
    score_1 += tree_31(input);
    score_2 += tree_32(input);
    score_0 += tree_33(input);
    score_1 += tree_34(input);
    score_2 += tree_35(input);
    score_0 += tree_36(input);
    score_1 += tree_37(input);
    score_2 += tree_38(input);
    score_0 += tree_39(input);
    score_1 += tree_40(input);
    score_2 += tree_41(input);
    score_0 += tree_42(input);
    score_1 += tree_43(input);
    score_2 += tree_44(input);
    score_0 += tree_45(input);
    score_1 += tree_46(input);
    score_2 += tree_47(input);
    score_0 += tree_48(input);
    score_1 += tree_49(input);
    score_2 += tree_50(input);
    score_0 += tree_51(input);
    score_1 += tree_52(input);
    score_2 += tree_53(input);
    score_0 += tree_54(input);
    score_1 += tree_55(input);
    score_2 += tree_56(input);
    score_0 += tree_57(input);
    score_1 += tree_58(input);
    score_2 += tree_59(input);
    score_0 += tree_60(input);
    score_1 += tree_61(input);
    score_2 += tree_62(input);
    score_0 += tree_63(input);
    score_1 += tree_64(input);
    score_2 += tree_65(input);
    score_0 += tree_66(input);
    score_1 += tree_67(input);
    score_2 += tree_68(input);
    score_0 += tree_69(input);
    score_1 += tree_70(input);
    score_2 += tree_71(input);
    score_0 += tree_72(input);
    score_1 += tree_73(input);
    score_2 += tree_74(input);
    score_0 += tree_75(input);
    score_1 += tree_76(input);
    score_2 += tree_77(input);
    score_0 += tree_78(input);
    score_1 += tree_79(input);
    score_2 += tree_80(input);
    score_0 += tree_81(input);
    score_1 += tree_82(input);
    score_2 += tree_83(input);
    score_0 += tree_84(input);
    score_1 += tree_85(input);
    score_2 += tree_86(input);
    score_0 += tree_87(input);
    score_1 += tree_88(input);
    score_2 += tree_89(input);
    score_0 += tree_90(input);
    score_1 += tree_91(input);
    score_2 += tree_92(input);
    score_0 += tree_93(input);
    score_1 += tree_94(input);
    score_2 += tree_95(input);
    score_0 += tree_96(input);
    score_1 += tree_97(input);
    score_2 += tree_98(input);
    score_0 += tree_99(input);
    score_1 += tree_100(input);
    score_2 += tree_101(input);
    score_0 += tree_102(input);
    score_1 += tree_103(input);
    score_2 += tree_104(input);
    score_0 += tree_105(input);
    score_1 += tree_106(input);
    score_2 += tree_107(input);
    score_0 += tree_108(input);
    score_1 += tree_109(input);
    score_2 += tree_110(input);
    score_0 += tree_111(input);
    score_1 += tree_112(input);
    score_2 += tree_113(input);
    score_0 += tree_114(input);
    score_1 += tree_115(input);
    score_2 += tree_116(input);
    score_0 += tree_117(input);
    score_1 += tree_118(input);
    score_2 += tree_119(input);
    score_0 += tree_120(input);
    score_1 += tree_121(input);
    score_2 += tree_122(input);
    score_0 += tree_123(input);
    score_1 += tree_124(input);
    score_2 += tree_125(input);
    score_0 += tree_126(input);
    score_1 += tree_127(input);
    score_2 += tree_128(input);
    score_0 += tree_129(input);
    score_1 += tree_130(input);
    score_2 += tree_131(input);
    score_0 += tree_132(input);
    score_1 += tree_133(input);
    score_2 += tree_134(input);
    score_0 += tree_135(input);
    score_1 += tree_136(input);
    score_2 += tree_137(input);
    score_0 += tree_138(input);
    score_1 += tree_139(input);
    score_2 += tree_140(input);
    score_0 += tree_141(input);
    score_1 += tree_142(input);
    score_2 += tree_143(input);
    score_0 += tree_144(input);
    score_1 += tree_145(input);
    score_2 += tree_146(input);
    score_0 += tree_147(input);
    score_1 += tree_148(input);
    score_2 += tree_149(input);
    score_0 += tree_150(input);
    score_1 += tree_151(input);
    score_2 += tree_152(input);
    score_0 += tree_153(input);
    score_1 += tree_154(input);
    score_2 += tree_155(input);
    score_0 += tree_156(input);
    score_1 += tree_157(input);
    score_2 += tree_158(input);
    score_0 += tree_159(input);
    score_1 += tree_160(input);
    score_2 += tree_161(input);
    score_0 += tree_162(input);
    score_1 += tree_163(input);
    score_2 += tree_164(input);
    score_0 += tree_165(input);
    score_1 += tree_166(input);
    score_2 += tree_167(input);
    score_0 += tree_168(input);
    score_1 += tree_169(input);
    score_2 += tree_170(input);
    score_0 += tree_171(input);
    score_1 += tree_172(input);
    score_2 += tree_173(input);
    score_0 += tree_174(input);
    score_1 += tree_175(input);
    score_2 += tree_176(input);
    score_0 += tree_177(input);
    score_1 += tree_178(input);
    score_2 += tree_179(input);
    score_0 += tree_180(input);
    score_1 += tree_181(input);
    score_2 += tree_182(input);
    score_0 += tree_183(input);
    score_1 += tree_184(input);
    score_2 += tree_185(input);
    score_0 += tree_186(input);
    score_1 += tree_187(input);
    score_2 += tree_188(input);
    score_0 += tree_189(input);
    score_1 += tree_190(input);
    score_2 += tree_191(input);
    score_0 += tree_192(input);
    score_1 += tree_193(input);
    score_2 += tree_194(input);
    score_0 += tree_195(input);
    score_1 += tree_196(input);
    score_2 += tree_197(input);
    score_0 += tree_198(input);
    score_1 += tree_199(input);
    score_2 += tree_200(input);
    score_0 += tree_201(input);
    score_1 += tree_202(input);
    score_2 += tree_203(input);
    score_0 += tree_204(input);
    score_1 += tree_205(input);
    score_2 += tree_206(input);
    score_0 += tree_207(input);
    score_1 += tree_208(input);
    score_2 += tree_209(input);
    score_0 += tree_210(input);
    score_1 += tree_211(input);
    score_2 += tree_212(input);
    score_0 += tree_213(input);
    score_1 += tree_214(input);
    score_2 += tree_215(input);
    score_0 += tree_216(input);
    score_1 += tree_217(input);
    score_2 += tree_218(input);
    score_0 += tree_219(input);
    score_1 += tree_220(input);
    score_2 += tree_221(input);
    score_0 += tree_222(input);
    score_1 += tree_223(input);
    score_2 += tree_224(input);
    score_0 += tree_225(input);
    score_1 += tree_226(input);
    score_2 += tree_227(input);
    score_0 += tree_228(input);
    score_1 += tree_229(input);
    score_2 += tree_230(input);
    score_0 += tree_231(input);
    score_1 += tree_232(input);
    score_2 += tree_233(input);
    score_0 += tree_234(input);
    score_1 += tree_235(input);
    score_2 += tree_236(input);
    score_0 += tree_237(input);
    score_1 += tree_238(input);
    score_2 += tree_239(input);
    score_0 += tree_240(input);
    score_1 += tree_241(input);
    score_2 += tree_242(input);
    score_0 += tree_243(input);
    score_1 += tree_244(input);
    score_2 += tree_245(input);
    score_0 += tree_246(input);
    score_1 += tree_247(input);
    score_2 += tree_248(input);
    score_0 += tree_249(input);
    score_1 += tree_250(input);
    score_2 += tree_251(input);
    score_0 += tree_252(input);
    score_1 += tree_253(input);
    score_2 += tree_254(input);
    score_0 += tree_255(input);
    score_1 += tree_256(input);
    score_2 += tree_257(input);
    score_0 += tree_258(input);
    score_1 += tree_259(input);
    score_2 += tree_260(input);
    score_0 += tree_261(input);
    score_1 += tree_262(input);
    score_2 += tree_263(input);
    score_0 += tree_264(input);
    score_1 += tree_265(input);
    score_2 += tree_266(input);
    score_0 += tree_267(input);
    score_1 += tree_268(input);
    score_2 += tree_269(input);
    score_0 += tree_270(input);
    score_1 += tree_271(input);
    score_2 += tree_272(input);
    score_0 += tree_273(input);
    score_1 += tree_274(input);
    score_2 += tree_275(input);
    score_0 += tree_276(input);
    score_1 += tree_277(input);
    score_2 += tree_278(input);
    score_0 += tree_279(input);
    score_1 += tree_280(input);
    score_2 += tree_281(input);
    score_0 += tree_282(input);
    score_1 += tree_283(input);
    score_2 += tree_284(input);
    score_0 += tree_285(input);
    score_1 += tree_286(input);
    score_2 += tree_287(input);
    score_0 += tree_288(input);
    score_1 += tree_289(input);
    score_2 += tree_290(input);
    score_0 += tree_291(input);
    score_1 += tree_292(input);
    score_2 += tree_293(input);
    score_0 += tree_294(input);
    score_1 += tree_295(input);
    score_2 += tree_296(input);
    score_0 += tree_297(input);
    score_1 += tree_298(input);
    score_2 += tree_299(input);

    static double result[3];
    result[0] = score_0;
    result[1] = score_1;
    result[2] = score_2;
    return result;
}

// ── Softmax normalization ─────────────────────────────────
static void softmax_fn(double* s, int n, double* p) {
    double maxv = s[0];
    for (int i=1; i<n; i++) if (s[i]>maxv) maxv=s[i];
    double sum = 0;
    for (int i=0; i<n; i++) { p[i]=exp(s[i]-maxv); sum+=p[i]; }
    for (int i=0; i<n; i++) p[i] /= sum;
}

// ── Main predict function ─────────────────────────────────
// feat : pointer to SCALED feature array (call scale_features first)
// returns: 0=Normal  1=Stopped  2=Unbalance
inline int predict(float* feat) {
    double* raw = score(feat);
    double probs[3];
    softmax_fn(raw, 3, probs);
    int best = 0;
    for (int i=1; i<3; i++)
        if (probs[i] > probs[best]) best = i;
    return best;
}
