/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#undef USE_I2C
#undef SSD1306OLED
#define USE_SERIAL_PD2
// #define SSD1306OLED

// #define TAPPING_FORCE_HOLD
#define TAPPING_TERM 220
// #define RETRO_TAPPING

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLED_NUM 27
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef OLED_ENABLE
#   define SPLIT_LAYER_STATE_ENABLE
#   define SPLIT_LED_STATE_ENABLE
#   define SPLIT_MODS_ENABLE
#   define SPLIT_OLED_ENABLE
#   define OLED_FONT_H "keyboards/crkbd/keymaps/kibk/glcdfont.c"
#   define OLED_TIMEOUT 30000
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
// #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#   define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#   define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
#   define RGB_MATRIX_HUE_STEP 8
#   define RGB_MATRIX_SAT_STEP 8
#   define RGB_MATRIX_VAL_STEP 8
#   define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
#    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#    undef ENABLE_RGB_MATRIX_BREATHING // not interactive, not cool
#    undef ENABLE_RGB_MATRIX_BAND_SAT
#    undef ENABLE_RGB_MATRIX_BAND_VAL
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT // not interactive as well
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
#   define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT // very nice non colourfull, definitely KEEP one of these
#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN // not connected
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL // not connected
#    undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON // non interactive
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON // too colouful
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL // also too colorful
#    undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    undef ENABLE_RGB_MATRIX_RAINDROPS // too static, non interactive
#   define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // also too static KEEP for a change
#   define ENABLE_RGB_MATRIX_TYPING_HEATMAP // for sure this one KEEP
#    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN // boring one colour
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE // reactive also is nice
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE //
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE // just a bigger splash, that is nice, but cancells by anotehr press, that is bad
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE // super nice, no background colour, basically previous, but multi
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS // naah, everything light up
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS  // not as nice, doesn't roll over, random
#   define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // don't know the exact difference, kinda nice, KEEP
#    undef ENABLE_RGB_MATRIX_SPLASH
#   define ENABLE_RGB_MATRIX_MULTISPLASH // very colourfull, definitelyhe keep
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH // nice, but it doesn't keep the previous splash
#   define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH //
#endif
