/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_X 0
#define STATUS_LOGO_Y 0
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'download (4).png'
 */

#define STATUS_LOGO_WIDTH 32

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00001100,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00111111,B10000000,B00000000,
  B00001110,B10000000,B00100000,B00000000,
  B00011110,B10000000,B00101110,B00000000,
  B00110010,B10010001,B00101000,B00000000,
  B00111000,B10010001,B00101000,B00000000,
  B00111000,B10010001,B00110000,B00000000,
  B00011000,B10000001,B00100000,B00000000,
  B00011000,B10000000,B00100000,B00000000,
  B00001100,B10000000,B00100000,B00000000,
  B00001100,B01111111,B11000000,B00000000,
  B00000110,B01000000,B01000000,B00000000,
  B00000000,B01000000,B01000000,B00000000,
  B00000000,B00111111,B10000000,B00000000,
  B00000000,B01000000,B01000000,B00000000,
  B00000000,B01000000,B01000000,B00000000,
  B00000000,B01000001,B01000000,B00000000,
  B00000000,B01000001,B00000000,B00000000,
  B00000000,B10010001,B00100000,B00000000,
  B00000000,B10010001,B00100000,B00000000,
  B00000000,B10000000,B00100000,B00000000,
  B00000000,B11111111,B11100000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000
};
