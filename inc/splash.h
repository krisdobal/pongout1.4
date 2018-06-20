#ifndef _SPLASH_H
#define _SPLASH_H

//splash.h
//contains all splash screens of the program

//------------------------------------------------------------------------------
// Files generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------

#include "stm32f30x_conf.h"

//If player 0 wins
const uint8_t win0[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xA8, 0xA0, 0xA8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x11, 0x08, 0x86, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x80,
        0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x80, 0x70, 0x80, 0x80, 0x04, 0x00, 0x08, 0x14, 0x08, 0x00,
        0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xF7, 0xFF, 0xC7, 0xFF,
        0x87, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F,
        0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xB7, 0xBF, 0xB7, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x20, 0xD8, 0x20, 0x00, 0x00, 0x00, 0x02,
        0x01, 0x01, 0x02, 0x04, 0x04, 0x02, 0x00, 0x00, 0x13, 0x24, 0x24, 0x1F, 0x00, 0x03, 0x04, 0x04,
        0x03, 0x00, 0x03, 0x04, 0x04, 0x07, 0x00, 0x00, 0x02, 0x01, 0x01, 0x02, 0x04, 0x04, 0x02, 0x00,
        0x00, 0x00, 0x00, 0x10, 0x6C, 0x10, 0x00, 0x07, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFB, 0xFD, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFB, 0x80, 0xFB,
        0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xDB, 0xDB, 0xE0, 0xFF, 0xFC, 0xFB,
        0xFB, 0xFC, 0xFF, 0xFC, 0xFB, 0xFB, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x7F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x1D, 0x02, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3F, 0x7F, 0xC0, 0xE0, 0x7F, 0x7F, 0xC0, 0xE0, 0x7F, 0x3F, 0x00, 0x00, 0xC3, 0xC3, 0xFF, 0xFF,
        0xC3, 0xC3, 0x00, 0x00, 0xFF, 0xFF, 0x1E, 0x38, 0x70, 0xFF, 0xFF, 0x00, 0x00, 0xDF, 0xDF, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xBF, 0xBF, 0xBF, 0xFF, 0xFF, 0xC1, 0xBE, 0xBE, 0xC1, 0xFF,
        0xFF, 0xB9, 0xB6, 0xB6, 0xCE, 0xFF, 0xFF, 0x80, 0xB6, 0xB6, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB,
        0xFD, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x1C, 0x20, 0x1C, 0x20, 0x1C, 0x00, 0x18, 0x24, 0x18, 0x00, 0x1C, 0x20, 0x1C, 0x20,
        0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x40, 0x40, 0x28, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFB, 0xFB, 0xFB, 0xFB, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD,
        0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFD, 0xFD, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF
};

//If player 1 wins
const uint8_t win1 [] = {
        0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xF7, 0xFF, 0xC7, 0xFF,
        0x87, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F,
        0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xB7, 0xBF, 0xB7, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xA8, 0xA0, 0xA8, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x11, 0x08, 0x86, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x80,
        0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x80, 0x70, 0x80, 0x80, 0x04, 0x00, 0x08, 0x14, 0x08, 0x00,
        0xFF, 0xFF, 0xFB, 0xFD, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFB, 0x80, 0xFB,
        0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEC, 0xDB, 0xDB, 0xE0, 0xFF, 0xFC, 0xFB,
        0xFB, 0xFC, 0xFF, 0xFC, 0xFB, 0xFB, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x7F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x20, 0xD8, 0x20, 0x00, 0x00, 0x00, 0x02,
        0x01, 0x01, 0x02, 0x04, 0x04, 0x02, 0x00, 0x00, 0x13, 0x24, 0x24, 0x1F, 0x00, 0x03, 0x04, 0x04,
        0x03, 0x00, 0x03, 0x04, 0x04, 0x07, 0x00, 0x00, 0x02, 0x01, 0x01, 0x02, 0x04, 0x04, 0x02, 0x00,
        0x00, 0x00, 0x00, 0x10, 0x6C, 0x10, 0x00, 0x07, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xBF, 0xBF, 0xBF, 0xFF, 0xFF, 0xC1, 0xBE, 0xBE, 0xC1, 0xFF,
        0xFF, 0xB9, 0xB6, 0xB6, 0xCE, 0xFF, 0xFF, 0x80, 0xB6, 0xB6, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB,
        0xFD, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x1D, 0x02, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x3F, 0x7F, 0xC0, 0xE0, 0x7F, 0x7F, 0xC0, 0xE0, 0x7F, 0x3F, 0x00, 0x00, 0xC3, 0xC3, 0xFF, 0xFF,
        0xC3, 0xC3, 0x00, 0x00, 0xFF, 0xFF, 0x1E, 0x38, 0x70, 0xFF, 0xFF, 0x00, 0x00, 0xDF, 0xDF, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFB, 0xFB, 0xFB, 0xFB, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD,
        0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFB, 0xFD, 0xFD, 0xFB, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFD, 0xFD, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x1C, 0x20, 0x1C, 0x20, 0x1C, 0x00, 0x18, 0x24, 0x18, 0x00, 0x1C, 0x20, 0x1C, 0x20,
        0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x40, 0x40, 0x28, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t BossScreen [] = {
        0x20, 0x2E, 0x2A, 0xA0, 0x2A, 0xA4, 0x2A, 0xA0, 0xA4, 0x2A, 0x20, 0xAE, 0xAA, 0x20, 0x2E, 0x28,
        0x20, 0xFF, 0x20, 0x20, 0x24, 0xAC, 0x24, 0x20, 0x20, 0xFF, 0x20, 0xA0, 0xA4, 0xAE, 0x24, 0x2E,
        0x24, 0x24, 0x24, 0x24, 0x24, 0x20, 0xA0, 0xA0, 0xA4, 0xA8, 0x24, 0x20, 0x20, 0xFF, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x28, 0x24, 0x20, 0xFF, 0x20, 0x20, 0xA0, 0x20,
        0x20, 0xA0, 0x20, 0x20, 0x20, 0xFF, 0x20, 0x20, 0x2C, 0x24, 0x22, 0x20, 0x2C, 0x24, 0x20, 0x20,
        0x20, 0x20, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0,
        0xF0, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xD0, 0x88, 0x04, 0x04, 0x04,
        0x04, 0x04, 0x04, 0x04, 0x34, 0x24, 0x04, 0x10, 0x00, 0x30, 0x00, 0x10, 0x30, 0x00, 0x00, 0x00,
        0x84, 0x84, 0x84, 0x85, 0x84, 0x85, 0x84, 0x85, 0xB5, 0x84, 0x84, 0x84, 0x95, 0xA5, 0xB4, 0x84,
        0x84, 0xFF, 0x84, 0x84, 0xB5, 0xB4, 0x85, 0x84, 0x84, 0xFF, 0x84, 0xA4, 0xA4, 0xA4, 0xB4, 0x94,
        0x94, 0xA4, 0xA5, 0x95, 0x95, 0x85, 0x84, 0xA4, 0xA4, 0xB5, 0x94, 0x94, 0x84, 0xFF, 0x84, 0x84,
        0x84, 0xB4, 0xA4, 0xA4, 0x84, 0x84, 0x94, 0xB4, 0x84, 0x84, 0x84, 0xFF, 0x84, 0xA4, 0x85, 0x95,
        0xB4, 0x84, 0x94, 0x84, 0x84, 0xFF, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84,
        0x84, 0x84, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0x7F, 0xBF, 0xDF, 0xDF, 0xEF, 0xEF, 0xF7, 0xFB, 0xFB, 0xFC, 0xF8,
        0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x10, 0x10, 0x14, 0x16, 0x10, 0x12, 0x16, 0x10, 0x54, 0x54, 0x10, 0x16, 0x94, 0x92, 0x10, 0x10,
        0x10, 0xFF, 0x10, 0x10, 0x94, 0xD2, 0x10, 0x10, 0x10, 0xFF, 0x10, 0x94, 0x94, 0x94, 0x52, 0x52,
        0x94, 0x94, 0x94, 0x94, 0x94, 0x10, 0x10, 0x92, 0x92, 0x54, 0x92, 0x10, 0x10, 0xFF, 0x10, 0x10,
        0x54, 0x92, 0x10, 0x54, 0x92, 0x10, 0x54, 0x92, 0x10, 0x50, 0x10, 0xFF, 0x1F, 0x1D, 0x59, 0x9F,
        0x5F, 0xD9, 0x1D, 0x1F, 0x1F, 0xFF, 0x1F, 0x1D, 0x1D, 0x1B, 0x19, 0x1F, 0x1D, 0x1F, 0x19, 0x1F,
        0x1F, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F,
        0x07, 0x08, 0x10, 0x10, 0x90, 0xD0, 0x10, 0x90, 0x10, 0xD0, 0x50, 0x90, 0x10, 0x10, 0x00, 0x00,
        0x42, 0x42, 0x42, 0x42, 0x5A, 0x4A, 0x42, 0x52, 0x4A, 0x42, 0x52, 0x5A, 0x4A, 0x42, 0x42, 0x42,
        0x42, 0xFF, 0x42, 0x42, 0x4A, 0x4A, 0x52, 0x42, 0x42, 0xFF, 0x42, 0x42, 0x52, 0x52, 0x5A, 0x42,
        0x42, 0x5A, 0x52, 0x52, 0x42, 0x5A, 0x42, 0x5A, 0x42, 0x42, 0x42, 0x42, 0x42, 0xFF, 0x42, 0x42,
        0x5A, 0x42, 0x42, 0x5A, 0x42, 0x5A, 0x42, 0x5A, 0x42, 0x5A, 0x42, 0xFF, 0x42, 0x52, 0x42, 0x4A,
        0x42, 0x42, 0x5A, 0x42, 0x42, 0xFF, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42,
        0x42, 0x42, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x1F, 0x1F,
        0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//------------------------------------------------------------------------------
// File generated by LCD Assistant
// http://en.radzio.dxp.pl/bitmap_converter/
//------------------------------------------------------------------------------

const uint8_t PongOut_title [] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x18, 0x18, 0x38, 0xF8, 0xF8,
        0xF8, 0x38, 0x38, 0x38, 0x38, 0x78, 0xB8, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xF0, 0xF8,
        0x78, 0x38, 0x38, 0x38, 0x78, 0xF8, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x80, 0xF8, 0xF8, 0xF8, 0x38,
        0x38, 0x38, 0x38, 0x78, 0xF8, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x78, 0x38,
        0x38, 0x38, 0x38, 0x78, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0xF8, 0x78, 0x38, 0x38,
        0x38, 0x38, 0x78, 0xF8, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0,
        0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0xF8, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
        0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF,
        0xC1, 0xC0, 0xC0, 0xC0, 0xE0, 0xF8, 0xFF, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC1,
        0xC0, 0xC0, 0xC0, 0xE0, 0xF8, 0xFF, 0x7F, 0x1F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x3F, 0x03, 0x00,
        0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x7C, 0xFF, 0xFF, 0xE7, 0xC0, 0xC0, 0xC0,
        0xC0, 0xC0, 0xE0, 0xFE, 0xFF, 0x7F, 0x03, 0x00, 0xF0, 0xFF, 0xFF, 0x1F, 0x01, 0x00, 0x00, 0x00,
        0x00, 0xC0, 0xFE, 0xFF, 0xFF, 0x07, 0x00, 0xC0, 0xC1, 0xC1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0xC1, 0xC1, 0xC1, 0x01, 0x01, 0x01, 0xF1, 0xFF, 0xFF, 0x1F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x0F, 0x01,
        0x01, 0x01, 0x81, 0x81, 0xC1, 0xE1, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81,
        0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80,
        0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81,
        0xC1, 0xF9, 0xFF, 0xFF, 0x0F, 0x00, 0xE0, 0xFE, 0xFF, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xF0, 0xFF, 0xFF, 0x1F, 0x00, 0xC0, 0xFC, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
        0xFF, 0xFF, 0x0F, 0x00, 0xC0, 0xFC, 0xFF, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x0F, 0x01, 0x00, 0x00,
        0x00, 0x01, 0x03, 0x07, 0x0F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1E, 0x1F,
        0x0F, 0x07, 0x01, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1F, 0x1F,
        0x1F, 0x03, 0x00, 0x00, 0x07, 0x0F, 0x1F, 0x1E, 0x1C, 0x1C, 0x1C, 0x0E, 0x07, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif //_SPLASH_H