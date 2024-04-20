/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include <stdint.h>
#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "common/keys.h"
#include "common/layers.h"
#include "common/combos.h"
#include "common/tap_dances.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LY_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  QK_LOCK,  QK_REP,
        KC_GRV,      KC_1,  KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        TD(TAB_NAV), KC_Q,  KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        MOD_CAPS,    KC_A,  KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        OS_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              OS_RSFT,            KC_UP,
        OS_LCTL,  OS_LOPT,  OS_LCMD,                                KC_SPC,                                 OS_RCMD,  MO(LY_FN),OS_ROPT,    OS_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [LY_FN] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_NO,    QK_LOCK,  QK_REP,
        KC_OSSW,  DF_BASE,  DF_GAME,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  DM_RSTP,  DM_REC1,  DM_REC2,  DM_PLY1,  DM_PLY2,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  CM_TOGG,  KC_F18,   KC_F17,   _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_TRNS,  _______,    _______,  _______,  _______,  _______),
    [LY_LEFT] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  OS_LSFT,  OS_LOPT,  OS_LCMD,  OS_LCTL,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                KC_BTN1,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_RIGHT] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  KC_LABK,  KC_LPRN,  KC_LBRC,  KC_LCBR,  KC_CIRC,  KC_DLR,   KC_RCBR,  KC_RBRC,  KC_RPRN,  KC_RABK,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  OS_RCTL,  OS_RCMD,  OS_RSFT,  OS_ROPT,  _______,              _______,
        _______,            _______,  _______,  _______,  KC_AMPR,  _______,  KC_PIPE,  KC_SLSH,  KC_BSLS,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_GAME] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  QK_LOCK,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(LY_GAME_FN),KC_APP,KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [LY_GAME_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,  KC_BRIU,  _______,  _______,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  QK_REP,  BL_STEP,
        KC_OSSW,  DF_BASE,  DF_GAME,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  DM_RSTP,  DM_REC1,  DM_REC2,  DM_PLY1,  DM_PLY2,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  CM_TOGG,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_TRNS,  _______,    _______,  _______,  _______,  _______),
};

void print_buf(uint8_t *data, uint8_t length) {
#ifdef CONSOLE_ENABLE
    for (int i = 0; i < length; i++) {

        dprintf("%02X ", data[i]);
    }
    dprintf("\n");
#endif
}

///////////////////////////////////// RAW ID /////////////////////////////////////

#define KEYS_SEGMENT_START 1
#define MACRO_PAD_SIZE 8
#define MAX_KEYS_PER_REPORT 8
#define USAGE_MAXIMUM 0x08
#define USAGE_MINIMUM 0x01

uint8_t keypad_state;
uint8_t keypad_bitmask(uint8_t key) {
    return 1 << (key - USAGE_MINIMUM);
}
uint8_t is_macrokey(uint8_t state, uint8_t key) {
    return state & keypad_bitmask(key);
}

// `data` is a pointer to the buffer containing the received HID report
// `length` is the length of the report - always `RAW_EPSIZE`
void raw_hid_receive(uint8_t *data, uint8_t length) {
#ifdef CONSOLE_ENABLE
    dprintf("Received data: %d\n", length);
    print_buf(data, length);
#endif
    keypad_state = 0;

    int i;
    for (i = KEYS_SEGMENT_START; i < KEYS_SEGMENT_START + MAX_KEYS_PER_REPORT; i ++) {
        if (data[i] >= USAGE_MINIMUM && data[i] <= USAGE_MAXIMUM) {
            keypad_state |= keypad_bitmask(data[i]);
        }
    }

    if (is_macrokey(keypad_state, 0x01)) {
        leader_start();
    }
    is_macrokey(keypad_state, 0x02) ? layer_on(LY_LEFT) : layer_off(LY_LEFT);
    is_macrokey(keypad_state, 0x03) ? layer_on(LY_RIGHT) : layer_off(LY_RIGHT);
    if (is_macrokey(keypad_state, 0x04)) {
        set_oneshot_mods(MOD_BIT(KC_LCTL) | MOD_BIT(KC_LCMD));
    }
}

///////////////////////////////////// LEADER KEY/////////////////////////////////////
void leader_start_user(void) {
    // Do something when the leader key is pressed
#ifdef CONSOLE_ENABL
E
    dprintf("Leader key start\n");
#endif
}

void leader_end_user(void) {
#ifdef CONSOLE_ENABLE
    dprintf("Leader key end\n");
#endif
    if (leader_sequence_one_key(KC_J)) {
    }
}
