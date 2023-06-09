/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
  KC_NO, KC_PGDN, KC_NO, KC_NO, KC_9, KC_7, KC_3, KC_1, KC_F5, KC_2, KC_4, KC_8, KC_0, KC_F10, KC_NO, KC_NO,  \
  KC_NO, KC_KP_MINUS, KC_DOWN, KC_RCTL, MO(3), KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, KC_SLASH, KC_F12, KC_RIGHT, KC_LEFT,  \
  KC_NO, KC_KP_DOT, KC_SPACE, KC_LCTL, KC_NO, KC_H, KC_F4, KC_ESC, KC_NO, KC_NO, KC_G, KC_F6, KC_QUOTE, KC_F11, KC_P0, KC_UP,  \
  KC_LSFT, KC_P6, KC_P4, KC_NO, KC_F7, KC_Y, KC_F3, KC_TAB, KC_LGUI, KC_CAPS, KC_T, KC_RBRC, KC_LBRC, KC_BSPC, KC_P5, KC_NO,  \
  KC_NO, KC_P9, KC_P7, KC_NO, KC_O, KC_U, KC_E, KC_Q, KC_NO, KC_W, KC_R, KC_I, KC_P, KC_NO, KC_P8, KC_KP_PLUS,  \
  KC_RSFT, KC_P3, KC_P1, KC_NO, KC_L, KC_J, KC_D, KC_A, KC_NO, KC_S, KC_F, KC_K, KC_SCLN, KC_BSLS, KC_P2, KC_KP_ENTER,  \
  KC_NO, KC_KP_ASTERISK, KC_NUM, KC_NO, KC_DOT, KC_M, KC_C, KC_Z, KC_RALT, KC_X, KC_V, KC_COMMA, KC_NO, KC_ENTER, KC_KP_SLASH, KC_NO,  \
  KC_NO, KC_PGUP, KC_DEL, KC_NO, KC_F8, KC_6, KC_F2, KC_GRAVE, KC_LALT, KC_F1, KC_5, KC_EQUAL, KC_MINUS, KC_F9, KC_INS, KC_NO), 

  [_FN3] = LAYOUT( //function key pressed
  RESET, KC_END, KC_NO, KC_NO, KC_9, KC_7, TG(_FN3), DF(0), KC_F5, TG(_FN2), KC_4, KC_8, KC_0, KC_F10, KC_NO, KC_NO,  \
  KC_NO, KC_KP_MINUS, KC_VOLD, KC_APP, MO(3), KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, KC_SLASH, KC_F12, KC_END, KC_HOME,  \
  KC_NO, KC_KP_DOT, KC_SPACE, KC_LCTL, KC_NO, KC_H, KC_F4, KC_ESC, KC_NO, KC_NO, KC_G, KC_F6, KC_QUOTE, KC_F11, KC_P0, KC_VOLU,  \
  KC_LSFT, KC_P6, KC_P4, KC_NO, KC_F7, KC_Y, KC_F3, KC_TAB, KC_LGUI, KC_CAPS, KC_T, KC_RBRC, KC_LBRC, KC_BSPC, KC_P5, KC_NO,  \
  KC_NO, KC_P9, KC_P7, KC_NO, KC_SCROLL_LOCK, KC_U, KC_E, AS_UP, KC_NO, AS_RPT, KC_R, KC_PSCR, KC_PAUSE, KC_NO, KC_P8, KC_KP_PLUS,  \
  KC_RSFT, KC_P3, KC_P1, KC_NO, KC_L, KC_J, KC_D, AS_DOWN, KC_NO, AS_TOGG, KC_F, KC_K, KC_SCLN, KC_BSLS, KC_P2, KC_KP_ENTER,  \
  KC_NO, KC_KP_ASTERISK, TG(_FN1), KC_NO, KC_MEDIA_NEXT_TRACK, KC_M, KC_C, KC_Z, KC_RALT, KC_X, KC_V, KC_MEDIA_PREV_TRACK, KC_NO, KC_ENTER, KC_KP_SLASH, KC_NO,  \
  KC_NO, KC_HOME, KC_DEL, KC_NO, KC_F8, KC_6, KC_F2, KC_GRAVE, KC_LALT, KC_F1, KC_5, KC_EQUAL, KC_MINUS, KC_F9, KC_INS, KC_NO), 

  [_FN1] = LAYOUT( //fn+numlock - space cadet shift
  KC_NO, KC_PGDN, KC_NO, KC_NO, KC_9, KC_7, KC_3, KC_1, KC_F5, KC_2, KC_4, KC_8, KC_0, KC_F10, KC_NO, KC_NO,  \
  KC_NO, KC_KP_MINUS, KC_DOWN, KC_RCTL, MO(3), KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, KC_SLASH, KC_F12, KC_RIGHT, KC_LEFT,  \
  KC_NO, KC_KP_DOT, KC_SPACE, KC_LCTL, KC_NO, KC_H, KC_F4, KC_ESC, KC_NO, KC_NO, KC_G, KC_F6, KC_QUOTE, KC_F11, KC_P0, KC_UP,  \
  SC_LSPO, KC_P6, KC_P4, KC_NO, KC_F7, KC_Y, KC_F3, KC_TAB, KC_LGUI, KC_CAPS, KC_T, KC_RBRC, KC_LBRC, KC_BSPC, KC_P5, KC_NO,  \
  KC_NO, KC_P9, KC_P7, KC_NO, KC_O, KC_U, KC_E, KC_Q, KC_NO, KC_W, KC_R, KC_I, KC_P, KC_NO, KC_P8, KC_KP_PLUS,  \
  SC_RSPC, KC_P3, KC_P1, KC_NO, KC_L, KC_J, KC_D, KC_A, KC_NO, KC_S, KC_F, KC_K, KC_SCLN, KC_BSLS, KC_P2, KC_KP_ENTER,  \
  KC_NO, KC_KP_ASTERISK, KC_NUM, KC_NO, KC_DOT, KC_M, KC_C, KC_Z, KC_RALT, KC_X, KC_V, KC_COMMA, KC_NO, KC_ENTER, KC_KP_SLASH, KC_NO,  \
  KC_NO, KC_PGUP, KC_DEL, KC_NO, KC_F8, KC_6, KC_F2, KC_GRAVE, KC_LALT, KC_F1, KC_5, KC_EQUAL, KC_MINUS, KC_F9, KC_INS, KC_NO), 

    [_FN2] = LAYOUT( //fn+2 - F3/F4 copy/paste
  KC_NO, KC_PGDN, KC_NO, KC_NO, KC_9, KC_7, KC_3, KC_1, KC_F5, KC_2, KC_4, KC_8, KC_0, KC_F10, KC_NO, KC_NO,  \
  KC_NO, KC_KP_MINUS, KC_DOWN, KC_RCTL, MO(3), KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, KC_SLASH, KC_F12, KC_RIGHT, KC_LEFT,  \
  KC_NO, KC_KP_DOT, KC_SPACE, KC_LCTL, KC_NO, KC_H, KC_PASTE, KC_ESC, KC_NO, KC_NO, KC_G, KC_F6, KC_QUOTE, KC_F11, KC_P0, KC_UP,  \
  KC_TRNS, KC_P6, KC_P4, KC_NO, KC_F7, KC_Y, KC_COPY, KC_TAB, KC_LGUI, KC_CAPS, KC_T, KC_RBRC, KC_LBRC, KC_BSPC, KC_P5, KC_NO,  \
  KC_NO, KC_P9, KC_P7, KC_NO, KC_O, KC_U, KC_E, KC_Q, KC_NO, KC_W, KC_R, KC_I, KC_P, KC_NO, KC_P8, KC_KP_PLUS,  \
  KC_TRNS, KC_P3, KC_P1, KC_NO, KC_L, KC_J, KC_D, KC_A, KC_NO, KC_S, KC_F, KC_K, KC_SCLN, KC_BSLS, KC_P2, KC_KP_ENTER,  \
  KC_NO, KC_KP_ASTERISK, KC_NUM, KC_NO, KC_DOT, KC_M, KC_C, KC_Z, KC_RALT, KC_X, KC_V, KC_COMMA, KC_NO, KC_ENTER, KC_KP_SLASH, KC_NO,  \
  KC_NO, KC_PGUP, KC_DEL, KC_NO, KC_F8, KC_6, KC_F2, KC_GRAVE, KC_LALT, KC_F1, KC_5, KC_EQUAL, KC_MINUS, KC_F9, KC_INS, KC_NO),  

      [_FN3] = LAYOUT( //fn+2 - word caps lock
  KC_NO, KC_PGDN, KC_NO, KC_NO, KC_9, KC_7, KC_3, KC_1, KC_F5, KC_2, KC_4, KC_8, KC_0, KC_F10, KC_NO, KC_NO,  \
  KC_NO, KC_KP_MINUS, KC_DOWN, KC_RCTL, MO(3), KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, KC_SLASH, KC_F12, KC_RIGHT, KC_LEFT,  \
  KC_NO, KC_KP_DOT, KC_SPACE, KC_LCTL, KC_NO, KC_H, KC_TRNS, KC_ESC, KC_NO, KC_NO, KC_G, KC_F6, KC_QUOTE, KC_F11, KC_P0, KC_UP,  \
  KC_TRNS, KC_P6, KC_P4, KC_NO, KC_F7, KC_Y, KC_TRNS, KC_TAB, KC_LGUI, CW_TOGG, KC_T, KC_RBRC, KC_LBRC, KC_BSPC, KC_P5, KC_NO,  \
  KC_NO, KC_P9, KC_P7, KC_NO, KC_O, KC_U, KC_E, KC_Q, KC_NO, KC_W, KC_R, KC_I, KC_P, KC_NO, KC_P8, KC_KP_PLUS,  \
  KC_TRNS, KC_P3, KC_P1, KC_NO, KC_L, KC_J, KC_D, KC_A, KC_NO, KC_S, KC_F, KC_K, KC_SCLN, KC_BSLS, KC_P2, KC_KP_ENTER,  \
  KC_NO, KC_KP_ASTERISK, KC_NUM, KC_NO, KC_DOT, KC_M, KC_C, KC_Z, KC_RALT, KC_X, KC_V, KC_COMMA, KC_NO, KC_ENTER, KC_KP_SLASH, KC_NO,  \
  KC_NO, KC_PGUP, KC_DEL, KC_NO, KC_F8, KC_6, KC_F2, KC_GRAVE, KC_LALT, KC_F1, KC_5, KC_EQUAL, KC_MINUS, KC_F9, KC_INS, KC_NO),  
};
