/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, S(KC_9),    S(KC_0),    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LBRC,    KC_RBRC,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, S(KC_1),
  //|--------+--------+--------+--------+--------+--------,                    `--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, LT(1, KC_SPC), LT(1, KC_LNG2),   LT(2, KC_LNG1), LT(2, KC_ENT), RALT_T(KC_BSPC) 
                              //`----------------------------------'  `------------------------------------------'
    ),

    [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_MINS,     KC_EQL,    KC_6,    KC_7,    KC_8,    KC_9,   KC_0,  KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
       KC_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,S(KC_COMM),S(KC_DOT), KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO, KC_COMM,  KC_DOT,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------,                    `--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, LT(1, KC_SPC), LT(1, KC_LNG2),   LT(2, KC_LNG1),LGUI(KC_ENT), RALT_T(KC_BSPC) 
                              //`----------------------------------'  `------------------------------------------'
    ),

    [2] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_MINS,     KC_EQL, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,S(KC_COMM),S(KC_DOT), KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,           S(KC_MINS),S(KC_EQL),S(KC_LBRC),S(KC_RBRC),S(KC_BSLS),S(KC_GRV),
  //|--------+--------+--------+--------+--------+--------,                    `--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, LT(1, KC_SPC), LT(1, KC_LNG2),   LT(2, KC_LNG1), LT(2, KC_ENT), RALT_T(KC_BSPC) 
                              //`----------------------------------'  `------------------------------------------'

    ),

    [3] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,  KC_ESC,      KC_NO,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_MINS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_P,      KC_NO,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, S(KC_1),
  //|--------+--------+--------+--------+--------+--------,                    `--------+--------+--------+--------+--------+--------|
                                          KC_LALT,  KC_SPC, KC_LSFT,      KC_NO,  KC_ENT, KC_BSPC 
                              //`----------------+--------+--------'  `--------+--------+--------'
    )
};

const uint16_t PROGMEM combo1[] = {
    KC_LSFT, S(KC_1), COMBO_END,
};
combo_t key_combos[] = {
    [0] = COMBO(combo1, TG(3)),
};

#ifdef RGB_MATRIX_ENABLE
layer_state_t layer_state_set_user(layer_state_t state) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);

    switch (get_highest_layer(state)) {
        case 1:
            rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
            break;
        case 2:
            rgb_matrix_sethsv_noeeprom(HSV_YELLOW);
            break;
        case 3:
            rgb_matrix_sethsv_noeeprom(HSV_GREEN);
            break;
        default:
            rgb_matrix_sethsv_noeeprom(HSV_CYAN);
            break;
    }

    return state;
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    layer_state_set_user(layer_state);
}
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
