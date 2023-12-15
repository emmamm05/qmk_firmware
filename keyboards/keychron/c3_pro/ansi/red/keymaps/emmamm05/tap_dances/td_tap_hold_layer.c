#include "td_tap_hold_layer.h"

// Functions that control what our tap dance key does
void td_tap_hold_layer_finished(tap_dance_state_t *state, void *user_data) {
    td_tap_hold_layer_opts_t *tap_hold_layer = (td_tap_hold_layer_opts_t *)user_data;
    tap_hold_layer->state = cur_dance(state);
    switch (tap_hold_layer->state) {
        case TD_SINGLE_TAP:
            tap_code(tap_hold_layer->tap);
            break;
        case TD_SINGLE_HOLD:
            layer_on(tap_hold_layer->hold_layer);
            break;
        default:
            break;
    }
}

void td_tap_hold_layer_reset(tap_dance_state_t *state, void *user_data) {
    td_tap_hold_layer_opts_t *tap_hold_layer = (td_tap_hold_layer_opts_t *)user_data;
    // If the key was held down and now is released then switch off the layer
    if (tap_hold_layer->state == TD_SINGLE_HOLD) {
        layer_off(tap_hold_layer->hold_layer);
    }
    tap_hold_layer->state = TD_NONE;
}
