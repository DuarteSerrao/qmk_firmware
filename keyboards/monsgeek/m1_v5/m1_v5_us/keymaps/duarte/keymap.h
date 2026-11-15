
#pragma once

#include QMK_KEYBOARD_H

#define RGB_HUE_STEP 8
extern uint8_t base_hue_offset;
extern uint8_t game_hue_offset;
extern uint8_t game_accent_hue_offset;

void keymap_rgb_hue_adjust(int8_t direction);

void set_leds_color(const uint8_t *leds, uint8_t count, HSV color, uint8_t offset);

void set_all_color(HSV color, uint8_t offset);
