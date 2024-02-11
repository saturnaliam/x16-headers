#ifndef X16_H_
#define X16_H_

#include <stdint.h>
#include <cbm.h>

typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;

#define KEY_SUBROUTINE 0xFFE4

#define X16_COLOR_RED 0x1C
#define X16_COLOR_GREEN 0x1E
#define X16_COLOR_BLUE 0x1F
#define X16_COLOR_ORANGE 0x81
#define X16_COLOR_BLACK 0x90
#define X16_COLOR_BROWN 0x95
#define X16_COLOR_PINK 0x96
#define X16_COLOR_DARK_GRAY 0x97
#define X16_COLOR_GRAY 0x98
#define X16_COLOR_LIGHT_GREEN 0x99
#define X16_COLOR_LIGHT_BLUE 0x9A
#define X16_COLOR_LIGHT_GRAY 0x9B
#define X16_COLOR_PURPLE 0x9C
#define X16_COLOR_YELLOW 0x9E
#define X16_COLOR_CYAN 0x9F

// make sure keycode is global!
#define get_key(keycode) \
  asm("jsr %w", KEY_SUBROUTINE); \
  asm("sta %v", keycode);

#endif // X16_H_
