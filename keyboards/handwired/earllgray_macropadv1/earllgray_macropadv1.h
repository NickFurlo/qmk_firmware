#pragma once

#include "quantum.h"

/* LAYOUT_horizontal
 * │K00│|K01│K02│K03│K04│
 * ├───┼|───┼───┼───┼───┘
 * │K05│|K06│K07│K08│K09│
 * ├───┼|───┴───────┴───┘
 * │K10│|K11│K12│K13│K14│
 * ├───┼|───┴───────┴───┘
 * │K15│|K16│n/a|K18│K19│
 * └───┴┴───┴───────┴───┘
 * 				│  K17  │
 *				└───┴───┘
 */
#define LAYOUT_horizontal( \
	K00, K01, K02, k03, K04,\
	K05, K06, K07, K08, K09,\
	k10, K11, K12, K13, K14,\
	k15, K16, K17, K18, K19\
) { \
	{ K00, K01, K02, k03, K04 }, \
	{ K05, K06, K07, K08, K09 }, \
	{ k10, K11, K12, K13, K14 }, \
	{ k15, K16, K17, K18, K19 } \
}

#define LAYOUT LAYOUT_horizontal
