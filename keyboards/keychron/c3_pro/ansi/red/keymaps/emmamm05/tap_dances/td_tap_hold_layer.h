#pragma once

#include QMK_KEYBOARD_H

#include "common.h"

typedef struct {
    uint16_t tap;
    uint16_t hold_layer;
    td_state_t state;
    bool is_press_action;
} td_tap_hold_layer_opts_t;

// Functions associated with individual tap dances
void td_tap_hold_layer_finished(tap_dance_state_t *state, void *user_data);
void td_tap_hold_layer_reset(tap_dance_state_t *state, void *user_data);

#define ACTION_TAP_DANCE_TAP_HOLD_LAYER(tap, hold_layer) \
    { .fn = {NULL, td_tap_hold_layer_finished, td_tap_hold_layer_reset}, .user_data = (void *)&((td_tap_hold_layer_opts_t){tap, hold_layer}), }


