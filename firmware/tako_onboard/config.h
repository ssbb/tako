/* Copyright 2023 ssbb
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

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/* Custom matrix pins and port select array */
#define MATRIX_ROW_PINS { A14, A15, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT { B15, B14, B13, B12 }

#define MATRIX_COL_CHANNELS_LEFT { 6, 4, 2, 1, 0 }
#define MATRIX_COL_CHANNELS_RIGHT { 3, 0, 1, 4, 6 }

#define MUX_SEL_PINS_LEFT { A4, A5, A6 }
#define MUX_SEL_PINS_RIGHT { A6, A5, A4 }

/* Hardware peripherals pins */
#define APLEX_EN_PIN A7
#define DISCHARGE_PIN A3
#define ANALOG_PORT A2

#define DEFAULT_ACTUATION_LEVEL 700
#define DEFAULT_RELEASE_LEVEL 650

#define DISCHARGE_TIME 10

#define SERIAL_USART_DRIVER SD1
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

#define EE_HANDS

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 4

#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9
#define I2C_DRIVER I2CD1
#define OLED_BRIGHTNESS 128
#define SPLIT_OLED_ENABLE

#define DEBOUNCE 5
#define DIODE_DIRECTION COL2ROW
