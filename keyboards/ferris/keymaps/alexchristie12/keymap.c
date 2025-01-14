#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "features/achordion.h"


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LALT_T(KC_A), LGUI_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RGUI_T(KC_L), RALT_T(KC_SCLN), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, LT(0,KC_ENT), LT(1,KC_SPC), LT(3,KC_BSPC), LT(4,KC_TAB)),
    [1] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, KC_NO, KC_EQL, KC_4, KC_5, KC_6, KC_QUOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_MINS, KC_0),
    [2] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_LALT, KC_LGUI, KC_LCTL, KC_LSFT, KC_NO, KC_PLUS, KC_DLR, KC_PERC, KC_CIRC, KC_DQUO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_UNDS, KC_RPRN),
    [3] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_UP, CW_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_NO, KC_RSFT, KC_RCTL, KC_RGUI, KC_RALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [4] = LAYOUT_split_3x5_2(KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RGUI, KC_RALT, KC_NO, KC_WH_L, KC_BTN3, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO),
    [5] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_VOLU, KC_F7, KC_F8, KC_F9, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO)
};

// Define all of the combos
const uint16_t PROGMEM esc_combo[] = { LSFT_T(KC_F), RSFT(KC_J), COMBO_END };
const uint16_t PROGMEM win_combo[] = { LSFT_T(KC_S), RSFT(KC_L), COMBO_END };
const uint16_t PROGMEM del_combo[] = { KC_B, KC_N, COMBO_END };
const uint16_t PROGMEM fn_combo[] = { KC_Q, KC_P, COMBO_END };
const uint16_t PROGMEM caps_combo[] = { LCTL_T(KC_D), RCTL_T(KC_K), COMBO_END };

combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(win_combo, KC_LGUI),
    COMBO(del_combo, KC_DEL),
    COMBO(fn_combo, TO(3)),
    COMBO(caps_combo, KC_CAPS),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_achordion(keycode, record)) { return false; }
  // Your macros ...

  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


