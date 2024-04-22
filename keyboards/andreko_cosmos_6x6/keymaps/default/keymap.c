// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // /*
    //  * ┌──────┬───┬───┬───┬───┬───┐                           ┌───┬───┬───┬───┬───┬──────┐
    //  * │Escape│F1 │F2 │F3 │F4 │F5 │                           │F6 │F7 │F8 │F9 │F10│ Del  │
    //  * ├──────┼───┼───┼───┼───┼───┤                           ├───┼───┼───┼───┼───┼──────┤
    //  * │  ~   │ 1 │ 2 │ 3 │ 4 │ 5 │                           │ 6 │ 7 │ 8 │ 9 │10 │ Bspc │
    //  * ├──────┼───┼───┼───┼───┼───┤                           ├───┼───┼───┼───┼───┼──────┤
    //  * │ Tab  │ Q │ W │ E │ R │ T │                           │ Y │ U │ I │ O │ P │   \  │
    //  * ├──────┼───┼───┼───┼───┼───┤                           ├───┼───┼───┼───┼───┼──────┤
    //  * │ GUI  │ A │ S │ D │ F │ G │                           │ H │ J │ K │ L │ ; │   '  │
    //  * ├──────┼───┼───┼───┼───┼───┤                           ├───┼───┼───┼───┼───┼──────┤
    //  * │Shift │ Z │ X │ C │ V │ B │                           │ N │ M │ , │ . │ / │ Shift│
    //  * └──────┴┬──┴┬──┴┬──┴───┴───┘                           └───┴───┴──┬┴──┬┴──┬┴──────┘
    //  *         │PgD│PgU│  ┌───┬───┬───┐                   ┌───┬───┬───┐  │ [ │ ] │
    //  *         └───┴───┘  │Alt│Hme│End│                   │Ctl│Alt│Del│  └───┴───┘
    //  *                    └───┼───┼───┤                   ├───┼───┼───┘
    //  *                        │Spc│   │                   │   │Spc│
    //  *                        └───┘───┘                   └───┴───┘                              


    //TODO: Change KC_NO to MO(1)
    //TODO: Change KC_NO to MO(2)
    [0] = LAYOUT (

        KC_F2, KC_F3, KC_F4, KC_F5,
        KC_ESC, KC_F1, KC_2, KC_3, KC_4, KC_5,
        KC_TILDE, KC_1, KC_W, KC_E, KC_R, KC_T,
        KC_TAB, KC_Q, KC_S, KC_D, KC_F, KC_G,
        KC_LGUI, KC_A, KC_X, KC_C, KC_V, KC_B,
        KC_LSFT, KC_Z, KC_PGDN, KC_PGUP, 
                                        KC_PRINT_SCREEN, KC_HOME, KC_END,
                                        KC_SPC, KC_NO,


       KC_F6, KC_F7, KC_F8, KC_F9,
       KC_6, KC_7, KC_8, KC_9, KC_F10, KC_DEL,
       KC_Y, KC_U, KC_I, KC_O, KC_0, KC_BSPC,
       KC_H, KC_J, KC_K, KC_L, KC_P, KC_BSLS,
       KC_N, KC_M, KC_COMM, KC_DOT, KC_SCLN, KC_QUOT,  
       KC_LBRC, KC_RBRC, KC_SLSH, KC_RSFT,
       KC_RCTL, KC_RALT, KC_DEL,
       KC_NO, KC_SPC                             
    )
};
