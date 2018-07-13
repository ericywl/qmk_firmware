#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*rBase layer */
  [0] = LAYOUT(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,      KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,      KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,    KC_J,    KC_K,      KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,    KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, MO(1),
      KC_LCTL, KC_LALT, KC_LGUI, KC_LGUI,          KC_SPACE,                   KC_SPACE,  KC_RGUI, KC_RGUI, KC_RALT, KC_RCTL, KC_RCTL
      ),

  /* Function layer */
  [1] = LAYOUT(
      KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_DEL,
      KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_HOME, KC_AMPR,  KC_TILD, KC_TRNS, KC_TRNS,   KC_TRNS, KC_PSCR, KC_UP,   KC_DEL,  KC_BSPC,
      KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_ASTR,  KC_TRNS, KC_TRNS, KC_PGUP,   KC_HOME, KC_LEFT, KC_RGHT, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_LPRN, KC_RPRN,  KC_PIPE, KC_TRNS, KC_TRNS,   KC_PGDN, KC_END,  KC_DOWN, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                    KC_TRNS,   MO(2),   MO(2),   KC_TRNS, KC_TRNS, KC_TRNS
      ),

  /* Reset layer */
  [2] = LAYOUT(
      RESET,   KC_A,    KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      RGB_TOG, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO, 
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
      KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,                      KC_NO,     KC_TRNS, KC_TRNS,   KC_NO,   KC_NO,   KC_NO
      ),

};

