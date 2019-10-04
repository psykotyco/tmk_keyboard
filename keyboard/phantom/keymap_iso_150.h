// Phantom ISO 150
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ISO_150(\
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,       PSCR,SLCK,BRK,  \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,      INS, HOME,PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,           DEL, END, PGDN, \
        LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,                       \
        LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,           UP,        \
        LCTL,LALT,LGUI,               SPC,                     RALT,FN0 ,RCTL,      LEFT,DOWN,RGHT),
    /* 1: media keys */
    KEYMAP_ISO_150(\
        TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      MUTE,VOLD,VOLU, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,         MPLY,MPRV,MNXT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      BTN1,BTN2,BTN3, \
        TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                      \
        TRNS,MPLY,MPRV,MNXT,MSEL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,           MS_U,      \
        TRNS,TRNS,TRNS,               TRNS,                    TRNS,FN0 ,TRNS,      MS_L,MS_D,MS_R)
};
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};