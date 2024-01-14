#include "tap_dances.h"
#include <print.h>

tap_dance_action_t tap_dance_actions[] = {
    [TAB_NAV]  = ACTION_TAP_DANCE_TAP_HOLD_LAYER(KC_TAB, LY_NAV),
    [CAPS_MOD] = ACTION_TAP_DANCE_TRIPLE_TAP_HOLD_LAYER(KC_ESC, CW_TOGG, KC_CAPS, LY_MOD),
    [ENT_MOD]  = ACTION_TAP_DANCE_TAP_HOLD_LAYER(KC_ENT, LY_MOD),
};

// SHIFT TAP DANCE

void td_kc_sft_finished(tap_dance_state_t *state, void *user_data) {
    td_kc_sft_opts_t *opts (td_kc_sft_opts_t *)user_data;

}

void td_kc_sft_reset(tap_dance_state_t *state, void *user_data) {
    td_kc_sft_opts_t *opts (td_kc_sft_opts_t *)user_data;

    opts->state = TD_NONE;
}

td_state_t td_kc_sft_read_key_state(tap_dance_state_t *state, void *user_data) {
    td_kc_sft_opts_t *opts = (td_kc_sft_opts_t *)user_data;

    if (state->count == 1) {
        if (!state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2){
        else return TD_DOUBLE_TAP;
    } else if (state->count == 3){
        else return TD_TRIPLE_TAP;
    }
    return TD_UNKNOWN;
}

// HOLD LAYER TAP DANCE

// Functions that control what our tap dance key does
void td_tap_hold_layer_finished(tap_dance_state_t *state, void *user_data) {
    td_tap_hold_layer_opts_t *opts = (td_tap_hold_layer_opts_t *)user_data;
    opts->state = td_tap_hold_layer_read_key_state(state, opts);
#ifdef CONSOLE_ENABLE
    dprintf("TD state: %u\n", opts->state);
#endif
    switch (opts->state) {
        case TD_SINGLE_TAP:
            if (opts->tap_key == CW_TOGG) caps_word_toggle();
            else tap_code(opts->tap_key);
            break;
        case TD_DOUBLE_TAP:
            if (opts->double_tap_key == CW_TOGG) caps_word_toggle();
            else tap_code(opts->double_tap_key);
            break;
        case TD_TRIPLE_TAP:
            if (opts->triple_tap_key == CW_TOGG) caps_word_toggle();
            else tap_code(opts->triple_tap_key);
            break;
        case TD_DOUBLE_SINGLE_TAP:
            tap_code(opts->tap_key);
            tap_code(opts->tap_key);
            break;
        case TD_TRIPLE_SINGLE_TAP:
            tap_code(opts->tap_key);
            tap_code(opts->tap_key);
            tap_code(opts->tap_key);
            break;
        case TD_SINGLE_HOLD:
            layer_on(opts->hold_layer);
            break;
        default:
            break;
    }
}

void td_tap_hold_layer_reset(tap_dance_state_t *state, void *user_data) {
    td_tap_hold_layer_opts_t *opts = (td_tap_hold_layer_opts_t *)user_data;

    if (opts->state == TD_SINGLE_HOLD) {
        layer_off(opts->hold_layer);
    }
    opts->state = TD_NONE;
}

td_state_t td_tap_hold_layer_read_key_state(tap_dance_state_t *state, void *user_data) {
    td_tap_hold_layer_opts_t *opts = (td_tap_hold_layer_opts_t *)user_data;

    if (state->count == 1) {
        if (!state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2){
        if (opts->double_tap_key == KC_NO) return TD_DOUBLE_SINGLE_TAP;
        else return TD_DOUBLE_TAP;
    } else if (state->count == 3){
        if (opts->triple_tap_key == KC_NO) return TD_TRIPLE_SINGLE_TAP;
        else return TD_TRIPLE_TAP;
    }
    return TD_UNKNOWN;
}
