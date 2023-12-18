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

#include QMK_KEYBOARD_H
#include "tap_dances/td_tap_hold_layer.h"

enum layers{
  LY_BASE,
  LY_FN,
  LY_GAME,
  LY_GAME_FN,
  LY_NAV,
  LY_MOD,
};

#define DF_BASE DF(LY_BASE)
#define DF_GAME DF(LY_GAME)
#define MOD_ASTRAL MOD_LGUI | MOD_LALT | MOD_LSFT
#define MOD_NEXUS MOD_LCTL | MOD_LGUI | MOD_LSFT
#define MOD_TRINITY MOD_LCTL | MOD_LGUI | MOD_LALT
#define OS_CMD OSM(MOD_LGUI)
#define OS_CTL OSM(MOD_LCTL)
#define OS_OPT OSM(MOD_LALT)
#define OS_SFT OSM(MOD_LSFT)
#define OS_MEH OSM(MOD_MEH)
#define OS_HYP OSM(MOD_HYPR)
#define OS_ASTRAL OSM(MOD_ASTRAL) // GUI + ALT + SHIFT
// MOD_MEH = MOD_LCTL | MOD_LALT | MOD_LSFT
// MOD_HYPR = MOD_LCTL | MOD_LALT | MOD_LGUI | MOD_LSFT

enum {
    TAB_NAV, // Our custom tap dance key; add any other tap dance keys to this enum
    CAPS_MOD,
    ENT_MOD,
};

tap_dance_action_t tap_dance_actions[] = {
    [TAB_NAV]  = ACTION_TAP_DANCE_TAP_HOLD_LAYER(KC_TAB, LY_NAV),
    [CAPS_MOD] = ACTION_TAP_DANCE_TRIPLE_TAP_HOLD_LAYER(KC_ESC, CW_TOGG, KC_CAPS, LY_MOD),
    [ENT_MOD]  = ACTION_TAP_DANCE_TAP_HOLD_LAYER(KC_ENT, LY_MOD),
};

enum COMBOS {
    CB_CTL,
    CB_CTL_A,
    CB_CTL_W,
    CB_CTL_C,
    CB_GUI,
    CB_MEH,
    CB_ASTRAL,
    CB_NEXUS,
    CB_TRINITY,
    CB_HYPER,
    CB_CS,
    CB_CS2,
    CB_CA,
    CB_CA2,
    CB_CG,
    CB_CG2,
    CB_GS,
    CB_GS2,
    CB_GA,
    CB_GA2,
    CB_SA,
    CB_SA2,
};

const uint16_t PROGMEM cb_ctl[]     = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM cb_ctl_a[]   = {KC_A, KC_J, COMBO_END};
const uint16_t PROGMEM cb_ctl_w[]   = {KC_W, KC_J, COMBO_END};
const uint16_t PROGMEM cb_ctl_c[]   = {KC_C, KC_J, COMBO_END};
const uint16_t PROGMEM cb_gui[]     = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM cb_meh[]     = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM cb_astral[]  = {KC_G, KC_H, COMBO_END};
const uint16_t PROGMEM cb_nexus[]   = {KC_T, KC_Y, COMBO_END};
const uint16_t PROGMEM cb_trinity[] = {KC_C, KC_M, COMBO_END};
const uint16_t PROGMEM cb_hyper[]   = {KC_V, KC_N, COMBO_END};
const uint16_t PROGMEM cb_cs[]      = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM cb_cs2[]      = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM cb_ca[]      = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM cb_ca2[]      = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_cg[]      = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM cb_cg2[]      = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM cb_gs[]      = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM cb_gs2[]      = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM cb_ga[]      = {KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM cb_ga2[]      = {KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_sa[]      = {KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM cb_sa2[]      = {KC_L, KC_SCLN, COMBO_END};
combo_t key_combos[] = {
    [CB_CTL]     = COMBO(cb_ctl, OSM(MOD_LCTL)),
    [CB_CTL_A]   = COMBO(cb_ctl_a, LCTL(KC_A)),
    [CB_CTL_W]   = COMBO(cb_ctl_w, LCTL(KC_W)),
    [CB_CTL_C]   = COMBO(cb_ctl_c, LCTL(KC_C)),
    [CB_GUI]     = COMBO(cb_gui, OSM(MOD_LGUI)),
    [CB_ASTRAL]  = COMBO(cb_astral, OSM(MOD_ASTRAL)),
    [CB_MEH]     = COMBO(cb_meh, OSM(MOD_MEH)),
    [CB_NEXUS]   = COMBO(cb_nexus, OSM(MOD_NEXUS)),
    [CB_TRINITY] = COMBO(cb_trinity, OSM(MOD_TRINITY)),
    [CB_HYPER]   = COMBO(cb_hyper, OSM(MOD_HYPR)),
    [CB_CS]      = COMBO(cb_cs, OSM(MOD_LCTL | MOD_LSFT)),
    [CB_CS2]     = COMBO(cb_cs2, OSM(MOD_LCTL | MOD_LSFT)),
    [CB_CA]      = COMBO(cb_ca, OSM(MOD_LCTL | MOD_LALT)),
    [CB_CA2]     = COMBO(cb_ca2, OSM(MOD_LCTL | MOD_LALT)),
    [CB_CG]      = COMBO(cb_cg, OSM(MOD_LCTL | MOD_LGUI)),
    [CB_CG2]     = COMBO(cb_cg2, OSM(MOD_LCTL | MOD_LGUI)),
    [CB_GS]      = COMBO(cb_gs, OSM(MOD_LGUI | MOD_LSFT)),
    [CB_GS2]     = COMBO(cb_gs2, OSM(MOD_LGUI | MOD_LSFT)),
    [CB_GA]      = COMBO(cb_ga, OSM(MOD_LGUI | MOD_LALT)),
    [CB_GA2]     = COMBO(cb_ga2, OSM(MOD_LGUI | MOD_LALT)),
    [CB_SA]      = COMBO(cb_sa, OSM(MOD_LSFT | MOD_LALT)),
    [CB_SA2]     = COMBO(cb_sa2, OSM(MOD_LSFT | MOD_LALT)),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LY_BASE] = LAYOUT_tkl_ansi(
        KC_ESC ,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  QK_LOCK,  QK_REP,
        KC_GRV,      KC_1,  KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        TD(TAB_NAV), KC_Q,  KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        TD(CAPS_MOD),KC_A,  KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  MO(LY_FN),KC_ROPT,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [LY_FN] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_NO,    QK_LOCK,  QK_REP,
        KC_OSSW,  DF_BASE,  DF_GAME,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  CM_TOGG,  KC_F18,   KC_F17,   _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_TRNS,  _______,    _______,  _______,  _______,  _______),
    [LY_NAV] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,KC_PAGE_DOWN,KC_PAGE_UP,KC_END, _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP  ,  KC_RIGHT, _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_MOD] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  C(KC_W),  C(KC_A),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  OS_OPT,   OS_SFT,   OS_CMD,   OS_CTL,   _______,  _______,  OS_CTL,   OS_CMD,   OS_SFT,   OS_OPT,   _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_GAME] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  QK_LOCK,  KC_PAUS,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(LY_GAME_FN),KC_APP,KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),
    [LY_GAME_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,  KC_BRIU,  _______,  _______,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  BL_STEP,
        KC_OSSW,  DF_BASE,  DF_GAME,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  KC_TRNS,  _______,    _______,  _______,  _______,  _______),
};

    // [TEMPLATE] = LAYOUT_tkl_ansi(
    //     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
    //     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
    //     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),


