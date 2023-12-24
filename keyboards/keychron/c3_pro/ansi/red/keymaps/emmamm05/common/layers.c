#include "layers.h"

layer_state_t default_layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, LY_GAME)) {
        combo_disable();
#ifdef CONSOLE_ENABLE
        dprintf("Combos disabled\n");
#endif
    } else if (layer_state_cmp(state, LY_BASE)) {
        combo_enable();
#ifdef CONSOLE_ENABLE
        dprintf("Combos enabled\n");
#endif
    }
    return state;
}
