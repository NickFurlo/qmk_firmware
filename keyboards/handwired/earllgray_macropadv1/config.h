#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    NickFurlo
#define PRODUCT         earllgray_macropadv1

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 5

/* key matrix pins */
/*#define MATRIX_ROW_PINS { E6, B4, B5, B1 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, B3 }
These pins must be in the same order that you used to define the keymap {row 1, row2, ...}*/
#define MATRIX_ROW_PINS { E6, B4, B5, B1 }
#define MATRIX_COL_PINS { C6, D4, B3, D0, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
