#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_horizontal(
		KC_ESCAPE, KC_1, KC_2, KC_3, KC_4, 
		KC_GRAVE, KC_Q, KC_W, KC_E, KC_R,
		KC_LSHIFT, KC_A, KC_S, KC_D, KC_F, 
		KC_LCTRL, KC_Z, KC_C, KC_SPACE, KC_V,
		
    )
};
