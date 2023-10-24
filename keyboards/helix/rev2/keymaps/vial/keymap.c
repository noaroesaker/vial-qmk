/* Copyright 2020 yushakobo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
      KC_LSFT,  KC_ESC,  KC_LALT, KC_LGUI, KC_LSFT,    KC_LSFT,   KC_SPC,  KC_SPC,  KC_LSFT,   KC_LSFT,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
      ),
    [1] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
      KC_LSFT,  KC_ESC,  KC_LALT, KC_LGUI, KC_LSFT,    KC_LSFT,   KC_SPC,  KC_SPC,  KC_LSFT,   KC_LSFT,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
      ),
    [2] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
      KC_LSFT,  KC_ESC,  KC_LALT, KC_LGUI, KC_LSFT,    KC_LSFT,   KC_SPC,  KC_SPC,  KC_LSFT,   KC_LSFT,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
      ),
    [3] = LAYOUT(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
      KC_LSFT,  KC_ESC,  KC_LALT, KC_LGUI, KC_LSFT,    KC_LSFT,   KC_SPC,  KC_SPC,  KC_LSFT,   KC_LSFT,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
      )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_SPC, KC_M)},
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)},
    //                  Encoder 1
};

/*
https://get.vial.today/docs/encoders.html
https://docs.qmk.fm/#/feature_encoders?id=encoder-map
https://www.google.com/search?client=firefox-b-d&q=pro+micro+pihnoiut#vhid=Lp4j6gZsFVwfRM&vssid=l
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_encoders.md
http://www.keyboard-layout-editor.com/#/
