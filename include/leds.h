CRGBPalette256 currentPalette;
TBlendType    currentBlending;

extern CRGBPalette256 myRedWhiteBluePalette;
extern const TProgmemPalette16 myRedWhiteBluePalette_p PROGMEM;

//====Paletas para codigos de colores
DEFINE_GRADIENT_PALETTE( breathRed ) {
        0,     0,   0,  0,   //black
        128,   255, 0,  0,   //red
        255,   0,   0,  0};
        
DEFINE_GRADIENT_PALETTE( breathBlue ) {
        0,     0,   0,  0,   //black
        128,   0, 0,  255,   //azul
        255,   0,   0,  0};

DEFINE_GRADIENT_PALETTE( breathYellow ) {
        0,     0,   0,  0,   //black
        128,   255, 255,  0,   //yellow
        255,   0,   0,  0};

DEFINE_GRADIENT_PALETTE( breathOrange ) {
        0,     0,   0,  0,   //black
        128,   255, 60,  0,   //orange
        255,   0,   0,  0};          

DEFINE_GRADIENT_PALETTE( solidWhite ) {
        0,     255,   255,  184,   //white
        255,   255,   255,  184};          
//====
//====Paleta dinamica====
byte bytes[12];
//====
uint8_t palletteColors1[64] = {0,68,3,86,
17,72,26,108,
34,70,48,126,
51,65,68,135,
68,57,86,140,
85,49,104,142,
102,42,120,142,
120,36,135,142,
136,31,152,139,
153,34,167,133,
170,52,182,121,
187,82,197,105,
204,119,209,83,
221,162,218,55,
238,207,225,28,
255,250,231,34};

uint8_t palletteColors2[64] = {0,71,223,203,
17,104,225,193,
34,164,230,166,
51,212,233,138,
68,240,219,99,
85,251,197,51,
102,254,176,20,
120,254,136,29,
136,255,105,42,
153,255,88,53,
170,249,64,83,
187,229,56,117,
204,206,77,133,
221,165,120,154,
238,108,190,190,
255,92,219,204};

uint8_t palletteColors3[64] = {
    0,251,118,87,
    42,253,89,98,
    85,233,94,197,
    127,107,62,243,
    170,233,94,197,
    212,253,89,98,
    255,251,118,87
};

uint8_t palletteColors4[64] = {
    0,254,240,214,
    85,255,175,178,
    170,190,233,233,
    255,254,240,214
};

uint8_t palletteColors5[64] = {
    0,20,247,247,
    64,255,255,255,
    127,208,0,64,
    191,231,0,213,
    255,20,247,247
};

uint8_t palletteColors6[64] = {
    0,255,51,6,
    106,255,255,255,
    212,255,6,83,
    255,255,51,6
};

uint8_t palletteColors7[64] = {
    0,134,219,216,
    42,252,76,97,
    85,254,230,130,
    127,255,106,90,
    170,255,200,197,
    212,253,181,123,
    255,134,219,216
};

uint8_t palletteColors8[64] = {
    0,6,164,175,
    127,216,235,203,
    255,6,164,175
};

uint8_t palletteColors9[64] = {
    0,188,233,254,
    85,253,221,234,
    170,255,255,255,
    255,188,233,254
};

uint8_t palletteColors10[64] = {
    0,214,242,230,
    127,0,77,126,
    255,214,242,230
};

uint8_t palletteColors11[64] = {
    0,251,232,89,
    17,230,227,26,
    34,164,217,37,
    51,98,200,67,
    68,58,177,94,
    85,35,145,114,
    102,32,115,122,
    120,36,94,123,
    136,50,66,132,
    153,95,30,164,
    170,136,14,156,
    187,153,26,117,
    204,178,41,98,
    221,218,85,92,
    238,243,149,88,
    255,251,194,68
};

uint8_t palletteColors12[64] = {
    0,252,219,37,
    17,251,201,36,
    34,246,155,43,
    51,228,99,67,
    68,203,63,89,
    85,175,34,111,
    102,140,7,135,
    120,99,0,148,
    136,97,0,149,
    153,132,4,138,
    170,169,28,116,
    187,199,60,92,
    204,223,92,71,
    221,244,142,48,
    238,250,194,35,
    255,251,220,40
};


uint8_t palletteColors13[64] = {
    0,71,223,203,
    17,104,225,193,
    34,164,230,166,
    51,212,233,138,
    68,240,219,99,
    85,251,197,51,
    102,254,176,20,
    120,254,136,29,
    136,255,105,42,
    153,255,88,53,
    170,249,64,83,
    187,229,56,117,
    204,206,77,133,
    221,165,120,154,
    238,108,190,190,
    255,92,219,204
};


uint8_t palletteColors14[64] = {
    0,114,213,174,
    17,123,216,173,
    34,141,222,173,
    51,161,228,173,
    68,180,233,174,
    85,199,240,173,
    102,219,245,174,
    120,237,251,174,
    136,236,251,174,
    153,219,246,174,
    170,198,239,173,
    187,180,234,173,
    204,161,227,173,
    221,141,221,173,
    238,122,215,173,
    255,118,214,175
};

uint8_t palletteColors15[64] = {
    0,199,255,220,
    17,209,247,203,
    34,219,239,187,
    51,229,231,170,
    68,240,224,153,
    85,250,216,137,
    102,250,199,132,
    120,250,182,131,
    136,249,163,129,
    153,248,146,128,
    170,247,132,128,
    187,244,140,136,
    204,238,163,151,
    221,228,193,173,
    238,213,228,199,
    255,215,252,225
};



const uint8_t gamma8[] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,
    2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  5,  5,  5,
    5,  6,  6,  6,  6,  7,  7,  7,  7,  8,  8,  8,  9,  9,  9, 10,
   10, 10, 11, 11, 11, 12, 12, 13, 13, 13, 14, 14, 15, 15, 16, 16,
   17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25,
   25, 26, 27, 27, 28, 29, 29, 30, 31, 32, 32, 33, 34, 35, 35, 36,
   37, 38, 39, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 50,
   51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 67, 68,
   69, 70, 72, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89,
   90, 92, 93, 95, 96, 98, 99,101,102,104,105,107,109,110,112,114,
  115,117,119,120,122,124,126,127,129,131,133,135,137,138,140,142,
  144,146,148,150,152,154,156,158,160,162,164,167,169,171,173,175,
  177,180,182,184,186,189,191,193,196,198,200,203,205,208,210,213,
  215,218,220,223,225,228,231,233,236,239,241,244,247,249,252,255 };