#include "combos.h"
#include "keys.h"

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
const uint16_t PROGMEM cb_ca[]            = {KC_J, KC_A, COMBO_END};
const uint16_t PROGMEM cb_cw[]            = {KC_J, KC_W, COMBO_END};
const uint16_t PROGMEM cb_cc[]            = {KC_J, KC_C, COMBO_END};
const uint16_t PROGMEM cb_ax[]            = {KC_SCLN, KC_X, COMBO_END};
const uint16_t PROGMEM cb_mouse[]         = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM cb_nav[]           = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM cb_sym[]           = {KC_G, KC_H, COMBO_END};

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
    [CB_LMEH] = COMBO(cb_left_meh, OS_MEH),
    [CB_LNEXUS] = COMBO(cb_left_nexus, OS_NEXUS),
    [CB_LASTRAL] = COMBO(cb_left_astral, OS_ASTRAL),
    [CB_LTRINITY] = COMBO(cb_left_trinity, OS_TRINITY),
    [CB_LHYPER] = COMBO(cb_left_hyper, OSM(MOD_HYPR)),
    [CB_RCS] = COMBO(cb_right_cs, OSM(MOD_LCTL | MOD_LSFT)),
    [CB_RCA] = COMBO(cb_right_ca, OSM(MOD_LCTL | MOD_LALT)),
    [CB_RCG] = COMBO(cb_right_cg, OSM(MOD_LCTL | MOD_LGUI)),
    [CB_RGS] = COMBO(cb_right_gs, OSM(MOD_LGUI | MOD_LSFT)),
    [CB_RGA] = COMBO(cb_right_ga, OSM(MOD_LGUI | MOD_LALT)),
    [CB_RSA] = COMBO(cb_right_sa, OSM(MOD_LSFT | MOD_LALT)),
    [CB_RMEH] = COMBO(cb_right_meh, OS_MEH),
    [CB_RNEXUS] = COMBO(cb_right_nexus, OS_NEXUS),
    [CB_RASTRAL] = COMBO(cb_right_astral, OS_ASTRAL),
    [CB_RTRINITY] = COMBO(cb_right_trinity, OS_TRINITY),
    [CB_CTL_A] = COMBO(cb_ca, C(KC_A)),
    [CB_CTL_W] = COMBO(cb_cw, C(KC_W)),
    [CB_CTL_C] = COMBO(cb_cc, C(KC_C)),
    [CB_ALT_X] = COMBO(cb_ax, A(KC_X)),
    [CB_MOUSE] = COMBO(cb_mouse, OSL(LY_MOUSE)),
    [CB_NAV] = COMBO(cb_nav, OSL(LY_NAV)),
    [CB_SYM] = COMBO(cb_sym, OSL(LY_SYM)),
};

bool get_combo_must_hold(uint16_t index, combo_t *combo) {
    // Same as above, decide by keycode, the combo index, or by the keys in the chord.
    return true;
}

// bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
//     uint8_t wpm = get_current_wpm();
//     if (wpm > COMBOS_WPM_THRESHOLD) {
// #ifdef CONSOLE_ENABLE
//     dprintf("wpm: %u, combos disabled\n", wpm);
// #endif
//         return false;
//     }
// #ifdef CONSOLE_ENABLE
//     dprintf("wpm: %u, combos enabled\n", wpm);
// #endif
//     return true;
// }
