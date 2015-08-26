#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
		ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, DEL, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, HOME,\
        GRV,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,   ENT,  END,\
        LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, FN1,    UP, FN0, \
        LCTL, LGUI,LALT,  SPC,   PGUP,PGDN,  INS, LEFT,  DOWN,  RGHT),
		
    /* 1: FN 1 */
    KEYMAP(
        GRV, F1, F2, F3, F4, F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, TRNS,\
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, HOME,\
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,   ENT,  END,\
        LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN1,    F13, FN0, \
        LCTL, LGUI,LALT,  SPC,   F17,F18,  F19, F14,  F15,  F16),
        
    /* 2: numpad / mouse */
    KEYMAP(
		ESC, 1,   2,   3,   4,   5,   6,   NLCK,   PSLS,   PAST,   PMNS,   MINS,EQL, BSPC, DEL, \
        TAB, Q,   W,   E,   R,   T,   Y,   P7,  P8,  P9,   P,   LBRC,RBRC,BSLS, HOME,\
        CAPS,A,   S,   D,   F,   G,   H,   P4,  P5,  P6,   PPLS,QUOT,   ENT,  END,\
        LSFT, Z,   X,   C,   V,   B,   P1,  P2,  P3, PDOT, PENT, FN1,    UP, FN0, \
        LCTL, LGUI,LALT,  SPC,   PGUP,PGDN,  INS, LEFT,  DOWN,  RGHT),
        
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2)
  //[2] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV)
};
