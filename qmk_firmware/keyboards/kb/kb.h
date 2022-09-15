#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,       K002, K003, K004, K005,       K007, K008, K009, K010, K011, K012, K013, K014, K015, K016, \
	                                                                                                      \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, K215, K216, \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, \
	K400,       K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413,       K415, K416, \
	      K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511,       K513,       K515,       \
	K600, K601,       K603,             K606,                   K610, K611,       K613, K614, K615, K616  \
) { \
	{ K000,  KC_NO, K002,  K003,  K004,  K005,  KC_NO, K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  K015,  K016 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214,  K215,  K216 }, \
	{ K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316 }, \
	{ K400,  KC_NO, K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  KC_NO, K415,  K416 }, \
	{ KC_NO, K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  KC_NO, K513,  KC_NO, K515,  KC_NO }, \
	{ K600,  K601,  KC_NO, K603,  KC_NO, KC_NO, K606,  KC_NO, KC_NO, KC_NO, K610,  K611,  KC_NO, K613,  K614,  K615,  K616 }  \
}

#endif