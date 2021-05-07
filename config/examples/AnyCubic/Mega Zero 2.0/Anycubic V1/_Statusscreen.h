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
#define STATUS_LOGO_WIDTH 23
#define STATUS_LOGO_X 8
#define STATUS_LOGO_Y 4
// #define STATUS_HEATERS_X 80
// #define STATUS_SCREEN_HOTEND_TEXT_X(E) (46 + (E) * 20)//(38 + (E) * 20)
// #define STATUS_SCREEN_BED_TEXT_X 73
// #define STATUS_SCREEN_FAN_TEXT_X 50

const unsigned char status_logo_bmp[] PROGMEM = {
  B01111111,B11111111,B11111100,
  B01000000,B00000000,B00000100,
  B01000000,B00000000,B00000100,
  B01000000,B00000000,B00000100,
  B01001111,B10000011,B11100100,
  B01001111,B10000011,B11100100,
  B01001111,B10000011,B11100100,
  B01001111,B10000011,B11100100,
  B01001111,B10000011,B11100100,
  B01000000,B01111100,B00000100,
  B01000000,B01111100,B00000100,
  B01000001,B11111111,B00000100,
  B01000001,B11111111,B00000100,
  B01000001,B11111111,B00000100,
  B01000001,B11111111,B00000100,
  B01000001,B11111111,B00000100,
  B01000001,B10000011,B00000100,
  B01000001,B10000011,B00000100,
  B01000000,B00000000,B00000100,
  B01111111,B11111111,B11111100
};

