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

// TODO: including this causes "error: expected identifier before '(' token" errors
//#include "config_common.h"


#define ILI9341_BLACK 0x0000       /*   0,   0,   0 */
#define ILI9341_BLUE 0x001F        /*   0,   0, 255 */
#define ILI9341_GREEN 0x07E0       /*   0, 255,   0 */
#define ILI9341_RED 0xF800         /* 255,   0,   0 */
#define ILI9341_YELLOW 0xFFE0      /* 255, 255,   0 */
#define ILI9341_WHITE 0xFFFF       /* 255, 255, 255 */





#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define MATRIX_COL_PINS { LINE_PIN5 } // 20/A6
#define MATRIX_ROW_PINS { LINE_PIN4 } // 19/A5

#define GPIO_INPUT_PIN_DELAY 0
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_MAX_POWER_CONSUMPTION 100
