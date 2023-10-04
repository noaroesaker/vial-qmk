// Copyright 2021 Andrzej Kotulski (@akotulski)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)


#define NO_OE     NO_OSTR                 // Ø //
#define NO_AA     NO_ARNG                 // Å //

enum layer_names {
    _BASE,
    _RAISE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    NO_AA,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    NO_OE,   NO_AE,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  NO_MINS, KC_ENT,
                          KC_LBRC, KC_RBRC,                                                KC_PLUS, KC_EQL,
                                         KC_DEL,  KC_BSPC,               KC_SPC,  KC_LGUI,
                                                    KC_NO,               KC_NO
    ),

    [_LOWER] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_LBRC, KC_RBRC,                                                KC_PLUS, KC_EQL,
                                       KC_SPC,  KC_BSPC, KC_BSPC,                   KC_LGUI,  KC_ENT, KC_LGUI
    ),

    [_RAISE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                          KC_LBRC, KC_RBRC,                                                KC_PLUS, KC_EQL,
                                       KC_SPC,  KC_BSPC, KC_BSPC,                   KC_LGUI,  KC_ENT, KC_LGUI
    )
};

