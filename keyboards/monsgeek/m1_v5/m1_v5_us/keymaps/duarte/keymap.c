// Copyright 2024 yangzheng20003 (@yangzheng20003)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rgb_record/rgb_record.h"
#include "quantum.h"
#include "keymap.h"

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
    GAME_LAYER,
    //Misc
    RGB_RESET_HUE,
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
        _______,  STEAM,  _______,                      _______,                                _______,  _______,  _______,  _______,  _______,  _______),
    
    [_FL] = LAYOUT( /* Base */
        QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_RESET_HUE,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SLEP,  RGB_TOG,
        KC_BT1,   XXXXXXX, EE_CLR,  BT_TEST,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_SPD,  RGB_SPI,  XXXXXXX,  BL_LAYER,   
        KC_BT2,  XXXXXXX,  HS_DIR,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX,   XXXXXXX,  KC_PSCR,  XXXXXXX,  XXXXXXX,  XXXXXXX,  GAME_LAYER,  
        KC_BT3,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,  XXXXXXX, 
        KC_2G4,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,
        KC_USB,   GU_TOGG,  XXXXXXX,                     HS_BATQ,                                _______,  XXXXXXX,  HS_CT_A,  XXXXXXX,  XXXXXXX,  XXXXXXX),

    [_MBL] = LAYOUT( /* Base */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_HOME,  
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_PGUP,    
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,   KC_PGDN,          
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LALT,  KC_LCMD,                      KC_SPC,                                 KC_RCMD,  MO(_MFL), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Base */
        QK_BOOT,  KC_BRID,  KC_BRIU,  KC_MCTL,  HS_SIRI,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  RGB_MOD,  RGB_TOG,
        EE_CLR,   _______,  BT_TEST,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RGB_SPD,  RGB_SPI,  _______,  _______,   
        _______,  _______,  HS_DIR,   KC_BT1,   KC_BT2,   KC_BT3,   KC_2G4,   KC_USB,   KC_INS,   _______,  KC_PSCR,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______, 
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
    [2] = {ENCODER_CCW_CW(RGB_HUD, RGB_HUI)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)},
};
#endif

// ─────────────────────────────────────────────
// RGB configuration
// ─────────────────────────────────────────────


#define COLOR_ORANGE ((HSV){.h = 13,  .s = 255, .v = 255})
#define COLOR_RED    ((HSV){.h = 0,   .s = 255, .v = 255})
#define COLOR_PURPLE ((HSV){.h = 192, .s = 255, .v = 255})
#define COLOR_TEAL   ((HSV){.h = 128, .s = 255, .v = 255})
#define COLOR_GREEN  ((HSV){.h = 85,  .s = 255, .v = 255})

// Temporary, independent hue offsets
uint8_t base_hue_offset = 0;
uint8_t game_hue_offset = 0;
uint8_t game_accent_hue_offset = 0;

// ─────────────────────────────────────────────
// LED groups
// ─────────────────────────────────────────────

static const uint8_t game_accent_leds[] = {
    49, 53, 54, 55,  // W A S D
    3, 4, 5, 65      // Arrow keys
};

static const uint8_t connection_leds[] = {
    24, 51, 52, 77, 78, // Bluetooth
    9, 8, 7, 6          // Layers
};

static const uint8_t application_leds[] = {
    14, 13, 12, 11
};

// ─────────────────────────────────────────────
// RGB helpers
// ─────────────────────────────────────────────

static RGB hue_shifted_color(HSV color, uint8_t offset) {
    color.h += offset;
    return hsv_to_rgb(color);
}

void set_leds_color(const uint8_t *leds, uint8_t count, HSV color, uint8_t offset) {
    RGB rgb = hue_shifted_color(color, offset);

    for (uint8_t i = 0; i < count; i++) {
        rgb_matrix_set_color(leds[i], rgb.r, rgb.g, rgb.b);
    }
}

void set_all_color(HSV color, uint8_t offset) {
    RGB rgb = hue_shifted_color(color, offset);
    rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);
}

// ─────────────────────────────────────────────
// Hue adjustment
// ─────────────────────────────────────────────

void keymap_rgb_hue_adjust(int8_t direction) {
    int8_t adjustment = direction * RGB_HUE_STEP;
    uint8_t mods = get_mods() | get_weak_mods() | get_oneshot_mods();

    if (layer_state_is(_GAME)) {
        if (mods & MOD_MASK_ALT) {
            // Game + Alt: adjust only the teal accents
            game_accent_hue_offset += adjustment;
        } else {
            // Game without Alt: adjust both colors
            game_hue_offset += adjustment;
            game_accent_hue_offset += adjustment;
        }
    } else {
        // Base: adjust only the orange background
        base_hue_offset += adjustment;
    }
}

// ─────────────────────────────────────────────
// Keyboard initialization
// ─────────────────────────────────────────────

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
}

// ─────────────────────────────────────────────
// RGB indicators
// ─────────────────────────────────────────────

bool rgb_matrix_indicators_user(void) {
    // Base / Game background
    if (layer_state_is(_GAME)) {
        set_all_color(COLOR_PURPLE, game_hue_offset);

        set_leds_color(
            game_accent_leds,
            sizeof(game_accent_leds),
            COLOR_TEAL,
            game_accent_hue_offset
        );
    } else {
        set_all_color(COLOR_ORANGE, base_hue_offset);
    }

    // Fixed FN indicators (never hue-shifted)
    if (layer_state_is(_FL)) {
        set_leds_color(
            connection_leds,
            sizeof(connection_leds),
            COLOR_GREEN,
            0
        );

        set_leds_color(
            application_leds,
            sizeof(application_leds),
            COLOR_RED,
            0
        );
    }

    return false;
}
