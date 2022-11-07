#pragma once

// #ifdef KEYBOARD_crkbd_rev1
// #    include "rev1.h"
// #endif


#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// readability
#define ___ KC_NO

#define LAYOUT_split_3x6_3( \
  L00, L01, L02, L03, L04, L05,           R05, R04, R03, R02, R01, R00, \
  L10, L11, L12, L13, L14, L15,           R15, R14, R13, R12, R11, R10, \
       L20, L21, L22, L23, L24,           R24, R23, R22, R21, R20,      \
                 L30, L31, L32,           R32, R31, R30 \
  ) \
  { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { ___, L20, L21, L22, L23, L24 }, \
    { ___, ___, ___, L30, L31, L32 }, \
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { ___, R20, R21, R22, R23, R24 }, \
    { ___, ___, ___, R30, R31, R32 } \
  }

#define LAYOUT LAYOUT_split_3x6_3
