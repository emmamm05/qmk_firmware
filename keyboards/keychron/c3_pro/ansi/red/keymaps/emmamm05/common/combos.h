#pragma once

#include QMK_KEYBOARD_H
#include "keys.h"
#include "layers.h"

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
#define KEY_COMBOS_SIZE 30
extern combo_t key_combos[KEY_COMBOS_SIZE];
