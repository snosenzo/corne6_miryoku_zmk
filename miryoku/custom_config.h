// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_CANARY
#define MIRYOKU_NAV_VI
#define MIRYOKU_TAP_QWERTY

#define XXX &none


// corne_v4 layout

// Change to contain button to go to game layer
#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04  XXX  XXX  K05  K06  K07  K08  K09  &u_to_U_GAME \
XXX  K10  K11  K12  K13  K14  XXX  XXX  K15  K16  K17  K18  K19  &kp SEMI \
XXX  K20  K21  K22  K23  K24            K25  K26  K27  K28  K29  XXX \
               K32  K33  K34            K35  K36  K37
// end this

// Canary layout
// Space on right side
#define MIRYOKU_LAYER_BASE \
&kp W,             &kp L,             &kp Y,             &kp P,             &kp B,             &kp Z,             &kp F,             &kp O,             &kp U,             &kp SQT,           \
U_MT(LGUI, C),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, A),     \
U_LT(U_BUTTON, Q), U_MT(RALT, J),     &kp V,             &kp D,             &kp K,             &kp X,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, BSPC), U_LT(U_MOUSE, RET), U_LT(U_SYM, TAB),  U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP


// Num layer such that lower numbers are at the top, swap grave and backslash
#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N1,            &kp N2,            &kp N3,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp BSLH,          &kp N7,            &kp N8,            &kp N9,            &kp GRAVE,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// Symbol layer that follows numbers. swap PIPE and TILDE
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp EXCL,          &kp AT,            &kp HASH,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp PIPE,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp TILDE,         U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// Fun layer with same logic number logic applied
#define MIRYOKU_LAYER_FUN \
&kp F12,           &kp F1,            &kp F2,            &kp F3,            &kp PSCRN,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp F11,           &kp F4,            &kp F5,            &kp F6,            &kp SLCK,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp F10,           &kp F7,            &kp F8,            &kp F9,            &kp PAUSE_BREAK,   U_NA,              &u_to_U_FUN,       &u_to_U_MEDIA,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp K_APP,         &kp SPACE,         &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// qwerty extra layer
#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, BSPC),U_LT(U_MOUSE, RET),U_LT(U_SYM, TAB),  U_LT(U_NUM, SPACE), U_LT(U_FUN, ESC),  U_NP,              U_NP


// VI like nav layer with changed thumb cluster
#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         &u_caps_word,      \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp BSPC,         &kp SPACE,          &kp DEL,           U_NP,              U_NP



// Extend MEDIA_VI to add support for extra BT buttons
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         U_RGB_TOG,         \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        U_EP_TOG,          \
U_NA,              &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,        \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP


// Change to contain 4 bt channel button and include out tog on outside of keyboard
#define MIRYOKU_LAYERMAPPING_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04  XXX  XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX  XXX  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24            K25  K26  K27  K28  K29  &u_out_tog \
               K32  K33  K34            K35  K36  K37
// end this

// Game layer
// QWERTY layout with thumbs: LALT, SPC, and Gamenum layer hold
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,            &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,            &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,            &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_GAMENUM,    &kp RET,           &kp BSPC,          &kp ESC,           U_NP,              U_NP

// Game number layer -- doesn't override W and S keys so that movement can still happen while selecting a number
#define MIRYOKU_LAYER_GAMENUM \
&kp F12,           &kp W,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,           &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp F11,           &kp S,             &kp NUM_4,         &kp NUM_5,         &kp NUM_6,           &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp NUM_0,         &kp ESC,           &kp NUM_7,         &kp NUM_8,         &kp NUM_9,           &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &none,             &kp SPC,             &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

// layer mapping which puts TAB, LSHFT, and LCTRL on the 6th row of the keyboard
#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB   K00  K01  K02  K03  K04  XXX  XXX  K05  K06  K07  K08  K09  &u_to_U_BASE \
&kp LSHFT K10  K11  K12  K13  K14  XXX  XXX  K15  K16  K17  K18  K19  &kp SQT \
&kp LCTRL K20  K21  K22  K23  K24            K25  K26  K27  K28  K29  XXX \
                    K32  K33  K34            K35  K36  K37
// end this

#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAMENUM,"GNum")


#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAME       10
#define U_GAMENUM    11