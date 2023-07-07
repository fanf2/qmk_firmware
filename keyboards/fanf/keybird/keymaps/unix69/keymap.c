// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        RGB_TOG, EE_CLR, RGB_MOD, KC_3, RGB_VAD, KC_5, RGB_VAI, KC_7, RGB_SAI, KC_9, RGB_SAD, KC_MINUS, RGB_HUI, KC_BSLS, RGB_HUD, KC_F13,
//        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BSLS, KC_GRAVE, KC_F13,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC, KC_F14,
        KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOTE, KC_ENTER, KC_F15,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RSFT, KC_UP, KC_F16,
        MO(1), KC_LALT, KC_LGUI, KC_SPACE, KC_RGUI, KC_RCTL, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT),
};

void keyboard_post_init_user(void) {
	debug_enable=true;
}

// faster!
const uint8_t RGBLED_RAINBOW_MOOD_INTERVALS[] PROGMEM = {60, 30, 15};
