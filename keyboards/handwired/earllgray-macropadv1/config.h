#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xEEEE
#define PRODUCT_ID      0x2019
#define DEVICE_VER		0x0001
#define MANUFACTURER    Nick Furlo
#define PRODUCT         earllgray-macropadv1

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7, B3 }
#define MATRIX_COL_PINS { E6, B4, B5, B1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
