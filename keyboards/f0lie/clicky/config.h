// Copyright 2022 f0lie (@f0lie)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quiet/config.h"

#undef PRODUCT
#define PRODUCT clicky

// TODO: Fix these values
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { F7, F6, F5, F4, F1}
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { B2, D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B6, B7, D6 }