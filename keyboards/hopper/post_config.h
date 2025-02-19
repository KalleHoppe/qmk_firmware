
#pragma once

// #ifndef BOOTMAGIC_LITE_ROW
// #    define BOOTMAGIC_LITE_ROW 0
// #endif
// #ifndef BOOTMAGIC_LITE_COLUMN
// #    define BOOTMAGIC_LITE_COLUMN 1
// #endif

// #ifndef BOOTMAGIC_LITE_ROW_RIGHT
// #    define BOOTMAGIC_LITE_ROW_RIGHT 4
// #endif
// #ifndef BOOTMAGIC_LITE_COLUMN_RIGHT
// #    define BOOTMAGIC_LITE_COLUMN_RIGHT 1
// #endif

#ifdef RGBLIGHT_ENABLE
#    ifndef RGBLIGHT_LIMIT_VAL
#        define RGBLIGHT_LIMIT_VAL 120
#    endif
#endif

#ifdef RGB_MATRIX_ENABLE
#    ifndef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#        define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#    endif
#endif

#ifdef OLED_ENABLE
    #ifndef OLED_FONT_H
        #define OLED_FONT_H "keyboards/hopper/lib/glcdfont.c"
    #endif
#endif
