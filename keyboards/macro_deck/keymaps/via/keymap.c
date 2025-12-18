#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _L1,
    _L2,
    _L3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_MUTE, KC_VOLD, KC_VOLU,
        KC_MPRV, KC_MPLY, KC_MNXT,
        KC_PSCR, KC_HOME, KC_END
    ),
    [_L1] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______
    ),
    [_L2] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______
    ),
    [_L3] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______,
        _______, _______, _______
    ),
};