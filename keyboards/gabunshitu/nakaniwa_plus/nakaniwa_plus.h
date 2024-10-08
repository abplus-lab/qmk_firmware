/* Copyright 2021 kazhida
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

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define xxxx KC_NO

#define LAYOUT( \
    K101, K102, K103, K104, K105, K106, K107,         K111, K112, K113, K114, K115, K116, K117, K118,       K119, K120, K121,   \
    K201, K202, K203, K204, K205, K206, K207,         K211, K212, K213, K214, K215, K216, K217, K218, K219,       K220, K221,   \
    K301, K302, K303, K304, K305, K306,               K311, K312, K313, K314, K315, K316, K317, K318,             K319, K320,   \
    K401, K402, K403, K404, K405, K406,               K411, K412, K413, K414, K415, K416, K417,                   K418, K419,   \
    K501, K502, K503, K504, K505, K506,         K511, K512, K513, K514, K515, K516, K517, K518,                   K519, K520,   \
    K601, K602, K603, K604, K605, K606,               K611, K612,                                           K613, K614, K615    \
) { \
    { K101, K102, K103, K104, /**/ K105, K106, K107, xxxx, /**/ K201, K202, K203, K204, /**/ K205, K206, K207, xxxx }, \
    { K301, K302, K303, K304, /**/ K305, K306, xxxx, xxxx, /**/ K401, K402, K403, K404, /**/ K405, K406, xxxx, xxxx }, \
    { K501, K502, K503, K504, /**/ K505, K506, xxxx, xxxx, /**/ K601, K602, K603, K604, /**/ K605, K606, xxxx, xxxx }, \
    { K111, K112, K113, K114, /**/ K115, K116, K117, K118, /**/ K119, K120, K121, xxxx, /**/ K211, K212, K213, K214 }, \
    { K215, K216, K217, K218, /**/ K219, K220, K221, xxxx, /**/ K311, K312, K313, K314, /**/ K315, K316, K318, K317 }, \
    { K319, K320, K411, K412, /**/ K413, K414, K415, K416, /**/ K417, K418, K419, xxxx, /**/ K511, K512, K513, K514 }, \
    { K515, K516, K518, K517, /**/ K519, K520, xxxx, xxxx, /**/ K611, K612, xxxx, xxxx, /**/ K613, K614, K615, xxxx } \
}
