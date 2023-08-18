/* Copyright 2020 GhostSeven <work@ghost7.com>
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
#define ENCODER_RESOLUTION 2
#define _BASE 0
#define _UTIL 1

enum encoder_names {
  _ENCODER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        LT(_UTIL, KC_ESC), KC_UP, KC_MUTE,
        SGUI(LSFT(KC_4)), SGUI(KC_5), KC_RGHT
    ),
    [_UTIL] = LAYOUT(
        _______, KC_HOME, QK_BOOT,
        KC_MPRV, KC_END , KC_MNXT
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_UTIL] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif