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
  LY_MOUSE,
  LY_NUM,
  LY_MOD,
};

#define DF_BASE DF(LY_BASE)
#define DF_GAME DF(LY_GAME)
// MOD_MEH = MOD_LCTL | MOD_LALT | MOD_LSFT
// MOD_HYPR = MOD_LCTL | MOD_LALT | MOD_LGUI | MOD_LSFT
#define MOD_ASTRAL  MOD_LGUI | MOD_LALT | MOD_LSFT
#define MOD_NEXUS   MOD_LCTL | MOD_LGUI | MOD_LSFT
#define MOD_TRINITY MOD_LCTL | MOD_LGUI | MOD_LALT
#define OS_CMD OSM(MOD_LGUI)
#define OS_CTL OSM(MOD_LCTL)
#define OS_OPT OSM(MOD_LALT)
#define OS_SFT OSM(MOD_LSFT)
#define OS_MEH OSM(MOD_MEH)
#define OS_HYP OSM(MOD_HYPR)
#define OS_ASTRAL  OSM(MOD_ASTRAL)
#define OS_NEXUS   OSM(MOD_NEXUS)
#define OS_TRINITY OSM(MOD_TRINITY)

enum {
    TAB_NAV, // Our custom tap dance key; add any other tap dance keys to this enum
    BSLS_NAV,
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
    CB_GUI,
    CB_ALT,
    CB_SFT,
    CB_LCS,
    CB_LCA,
    CB_LCG,
    CB_LGS,
    CB_LGA,
    CB_LSA,
    CB_LMEH,
    CB_LNEXUS,
    CB_LASTRAL,
    CB_LTRINITY,
    CB_LHYPER,
    CB_RCA,
    CB_RCS,
    CB_RCG,
    CB_RGS,
    CB_RGA,
    CB_RSA,
    CB_RMEH,
    CB_RNEXUS,
    CB_RASTRAL,
    CB_RTRINITY,
    CB_RHYPER,
    CB_CA,
    CB_CW,
    CB_CC,
    CB_MOUSE,
};

const uint16_t PROGMEM cb_ctl[]           = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM cb_gui[]           = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM cb_sft[]           = {KC_S, KC_L, COMBO_END};
const uint16_t PROGMEM cb_opt[]           = {KC_A, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_left_cs[]       = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM cb_left_ca[]       = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_cg[]       = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM cb_left_gs[]       = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM cb_left_ga[]       = {KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_sa[]       = {KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_meh[]      = {KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_astral[]   = {KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_nexus[]    = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM cb_left_trinity[]  = {KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM cb_left_hyper[]    = {KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM cb_right_ca[]      = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_cs[]      = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM cb_right_cg[]      = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM cb_right_gs[]      = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM cb_right_ga[]      = {KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_sa[]      = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_meh[]     = {KC_J, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_astral[]  = {KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_nexus[]   = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM cb_right_trinity[] = {KC_J, KC_K, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_right_hyper[]   = {KC_J, KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM cb_ca[]   = {KC_J, KC_A, COMBO_END};
const uint16_t PROGMEM cb_cw[]   = {KC_J, KC_W, COMBO_END};
const uint16_t PROGMEM cb_cc[]   = {KC_J, KC_C, COMBO_END};
const uint16_t PROGMEM cb_mouse[] = {KC_I, KC_O, COMBO_END};
combo_t key_combos[] = {
    [CB_CTL] = COMBO(cb_ctl, OSM(MOD_LCTL)),
    [CB_GUI] = COMBO(cb_gui, OSM(MOD_LGUI)),
    [CB_SFT] = COMBO(cb_sft, OSM(MOD_LSFT)),
    [CB_ALT] = COMBO(cb_opt, OSM(MOD_LALT)),
    [CB_LCS] = COMBO(cb_left_cs, OSM(MOD_LCTL | MOD_LSFT)),
    [CB_LCA] = COMBO(cb_left_ca, OSM(MOD_LCTL | MOD_LALT)),
    [CB_LCG] = COMBO(cb_left_cg, OSM(MOD_LCTL | MOD_LGUI)),
    [CB_LGS] = COMBO(cb_left_gs, OSM(MOD_LGUI | MOD_LSFT)),
    [CB_LGA] = COMBO(cb_left_ga, OSM(MOD_LGUI | MOD_LALT)),
    [CB_LSA] = COMBO(cb_left_sa, OSM(MOD_LSFT | MOD_LALT)),
    [CB_LMEH] = COMBO(cb_left_meh, OSM(MOD_MEH)),
    [CB_LNEXUS] = COMBO(cb_left_nexus, OSM(MOD_NEXUS)),
    [CB_LASTRAL] = COMBO(cb_left_astral, OSM(MOD_ASTRAL)),
    [CB_LTRINITY] = COMBO(cb_left_trinity, OSM(MOD_TRINITY)),
    [CB_LHYPER] = COMBO(cb_left_hyper, OSM(MOD_HYPR)),
    [CB_RCS] = COMBO(cb_right_cs, OSM(MOD_LCTL | MOD_LSFT)),
    [CB_RCA] = COMBO(cb_right_ca, OSM(MOD_LCTL | MOD_LALT)),
    [CB_RCG] = COMBO(cb_right_cg, OSM(MOD_LCTL | MOD_LGUI)),
    [CB_RGS] = COMBO(cb_right_gs, OSM(MOD_LGUI | MOD_LSFT)),
    [CB_RGA] = COMBO(cb_right_ga, OSM(MOD_LGUI | MOD_LALT)),
    [CB_RSA] = COMBO(cb_right_sa, OSM(MOD_LSFT | MOD_LALT)),
    [CB_RMEH] = COMBO(cb_right_meh, OSM(MOD_MEH)),
    [CB_RNEXUS] = COMBO(cb_right_nexus, OSM(MOD_NEXUS)),
    [CB_RASTRAL] = COMBO(cb_right_astral, OSM(MOD_ASTRAL)),
    [CB_RTRINITY] = COMBO(cb_right_trinity, OSM(MOD_TRINITY)),
    [CB_CA] = COMBO(cb_ca, C(KC_A)),
    [CB_CW] = COMBO(cb_cw, C(KC_W)),
    [CB_CC] = COMBO(cb_cc, C(KC_C)),
    [CB_MOUSE] = COMBO(cb_mouse, OSL(LY_MOUSE)),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LY_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  QK_LOCK,  QK_REP,
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
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                KC_BTN1,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_MOUSE] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_ACL0,  KC_ACL1,  KC_ACL2,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  KC_MS_U,  _______,  KC_WH_U,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_BTN2,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_WH_D,  _______,  _______,  KC_ACL1,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  KC_ACL0,  KC_ACL2,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                KC_BTN1,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    [LY_NUM] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_MINS,  KC_7,     KC_8,     KC_9,     KC_PSLS,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_PLUS,  KC_4,     KC_5,     KC_6,     KC_ASTR,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  KC_0,     KC_1,     KC_2,     KC_3,     _______,  _______,              _______,            _______,
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
