// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"
#include "quantum.h"

enum layers {
    _BL = 0,
    _GAME,
    _FL,
    _MBL,
    _MFL,
};

enum custom_keycodes {
    // Applications
    STEAM = SAFE_RANGE,
    // Keyboard layers
    BL_LAYER,
    GAME_LAYER
};


#define ______ HS_BLACK

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,    
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LCMD,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_GAME] = LAYOUT( /* Base */ 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        KC_F13,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  KC_F14,  _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______),
    
    [_FL] = LAYOUT( /* Base */
        QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  STEAM,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SLEP,  XXXXXXX,
        KC_BT1,   XXXXXXX, EE_CLR,  BT_TEST,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_SPD,  RGB_SPI,  XXXXXXX,  BL_LAYER,   
        KC_BT2,  XXXXXXX,  HS_DIR,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,   XXXXXXX,  KC_PSCR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  GAME_LAYER,  
        KC_BT3,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_TOG,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX, 
        KC_2G4,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,
        KC_USB,   GU_TOGG,  XXXXXXX,                     HS_BATQ,                                XXXXXXX,  XXXXXXX,  HS_CT_A,  XXXXXXX,  XXXXXXX,  XXXXXXX),

    [_MBL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,    
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LALT,  KC_LCMD,                      KC_SPC,                                 KC_RCMD,  MO(_MFL), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Base */
        QK_BOOT,  KC_BRID,  KC_BRIU,  KC_MCTL,  HS_SIRI,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD,  _______,
        EE_CLR,   _______,  BT_TEST,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  _______,  _______,   
        _______,  _______,  HS_DIR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   KC_INS,   _______,  KC_PSCR,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_TOG,  _______,  _______,            _______,  _______, 
        _______,            _______,  _______,  KC_CALC,  _______,  _______,  _______,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______, RGB_VAI,  _______,
        _______,  _______,  _______,                      HS_BATQ,                                _______,  _______,  HS_CT_A,  RGB_SAI,  RGB_VAD,  RGB_SAD),
    

};

const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,           ________, ________,
       ________,           ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________,                     ________,                               ________, ________, ________, ________, ________, ________),

    [1] = LAYOUT(
       ________, ________,   ________,   ________,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________,   ________,   ________,   ________,   ________,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________,   ________,   ________,   ________,   ________,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________,   ________,   ________,   ________, ________,   ________, ________, ________, ________, ________, ________,           ________, ________,
       ________,             ________, ________, ________, ________,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________,   ________, ________,                       ________,                               ________, ________, ________, ________, ________, ________),

    [2] = LAYOUT(
       ________,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________,  ________,  ________,  ________,  ________,  ________,  ________,  ________, ________, ________, ________, ________, ________, ________,
       ________, ________,  ________,  ________,  ________,  ________,  ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________,  ________,  ________,  ________,  ________,  ________, ________, ________, ________, ________, ________,           ________, ________,
       ________,           ________, ________,  ________,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________,                     ________,                               ________, ________, ________, ________, ________, ________),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
};
#endif


typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} rgb_color_t;


#define COLOR_ORANGE ((rgb_color_t){255, 80, 0})
#define COLOR_RED    ((rgb_color_t){255, 0, 0})
#define COLOR_BLUE    ((rgb_color_t){0, 0, 255})
#define COLOR_PURPLE  ((rgb_color_t){128, 0, 255})
#define COLOR_TEAL    ((rgb_color_t){0, 255, 180})
#define COLOR_GREEN ((rgb_color_t){0, 255, 80})

void set_leds_color(const uint8_t *leds, uint8_t count, rgb_color_t color) {
    for (uint8_t i = 0; i < count; i++) {
        rgb_matrix_set_color(
            leds[i],
            color.r,
            color.g,
            color.b
        );
    }
}
void set_all_color(rgb_color_t color) {
    rgb_matrix_set_color_all(
        color.r,
        color.g,
        color.b
    );
}

bool key_exists_on_layer(uint8_t layer, uint8_t row, uint8_t col) {
    uint16_t keycode = pgm_read_word(&keymaps[layer][row][col]);

    return keycode != KC_TRNS;
}

void set_layer_keys_color(uint8_t layer, rgb_color_t color) {
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        for (uint8_t col = 0; col < MATRIX_COLS; col++) {

            if (key_exists_on_layer(layer, row, col)) {

                uint8_t led = g_led_config.matrix_co[row][col];

                if (led != NO_LED) {
                    rgb_matrix_set_color(
                        led,
                        color.r,
                        color.g,
                        color.b
                    );
                }
            }
        }
    }
}

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
}

bool rgb_matrix_indicators_user(void) {
    if (layer_state_is(_GAME)) {
        set_all_color(COLOR_PURPLE);

        const uint8_t accentLeds[] = {
            49, 53, 54, 55,  // W A S D
            3, 4, 5, 65      // Left, Down, Right, Up
        };

        set_leds_color(accentLeds, sizeof(accentLeds), COLOR_TEAL);
    }
    else {
        set_all_color(COLOR_ORANGE);
    }

     // FN layer active
    if (layer_state_is(_FL)) {

        const uint8_t connectionLeds[] = {
            24, 51, 52, 77, 78, // Bluetooth
            9, 8, 7, 6 // Layers
        };

        set_leds_color(connectionLeds, sizeof(connectionLeds), COLOR_GREEN);

        const uint8_t applicationsLeds[] = {
            14, 13, 12, 11 // Applications
        };
        set_leds_color(applicationsLeds, sizeof(applicationsLeds), COLOR_RED);


    }

    return false;
}