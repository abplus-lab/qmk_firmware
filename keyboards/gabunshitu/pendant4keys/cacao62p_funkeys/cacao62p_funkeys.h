/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"


#define LAYOUT( \
    P101, P102, P103, P104,                                                                \
    K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
    K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, \
    K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       \
    K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412,             \
    K501, K502, K503, K504, K505, K506, K507, K508,                                     \
    K601, K602, K603,                                                                   \
    F01, F02, F03, F04,                                                                 \
    F05, F06, F07, F08, FPGUP,                                                          \
    F09, F10, F11, F12, FUP, FPGDN,                                                     \
    FSHT, FCMD, FLEFT, FDOWN, FRIGHT                                                    \
) { \
    { P101, P102, P103, P104 }, \
    { K101, K102, K103, K104, /**/ K203, K204, K205, K206, /**/ K301, K302, K303, K304, /**/ K105, K106, K201, K202 }, \
    { K305, K306, K401, K402, /**/ K403, K404, K405, K406, /**/ K501, K502, K503, K504, /**/ K505, K506, K508, K507 }, \
    { K107, K108, K109, K110, /**/ K207, K208, K209, K210, /**/ K211, K212, K214, K213, /**/ K111, K112, K113, K114 }, \
    { K307, K308, K309, K310, /**/ K311, K312, K313, K601, /**/ K407, K408, K409, K410, /**/ K411, K412, K602, K603 }, \
    { FRIGHT, FUP, FPGUP, FPGDN, /**/ KC_NO, KC_NO, KC_NO, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO, /**/ KC_NO, KC_NO, KC_NO, KC_NO }, \
    { F01, F02, F03, F04, /**/ F05, F06, F07, F08, /**/ F09, F10, F11, F12, /**/ FSHT, FCMD, FLEFT, FDOWN  }  \
}
