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


#define QUANTUM_PAINTER_SUPPORTS_256_PALETTE TRUE
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN TEENSY_PIN13
#define SPI_MOSI_PIN TEENSY_PIN11
#define SPI_MISO_PIN TEENSY_PIN12


#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define MATRIX_COL_PINS { LINE_PIN5 } // 20/A6
#define MATRIX_ROW_PINS { LINE_PIN4 } // 19/A5

#define GPIO_INPUT_PIN_DELAY 0
#define IGNORE_MOD_TAP_INTERRUPT
#define USB_MAX_POWER_CONSUMPTION 100
