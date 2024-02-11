#ifndef X16_H_
#define X16_H_

#include <stdint.h>

typedef uint8_t u8;
typedef int8_t s8;
typedef uint16_t u16;
typedef int16_t s16;

#define KEY_SUBROUTINE 0xFFE4

// make sure keycode is global!
#define get_key(keycode) \
  asm("jsr %w", KEY_SUBROUTINE); \
  asm("sta %v", keycode);

#endif // X16_H_
