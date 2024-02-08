/*
 * MCU renderer
 * STM32 keyboard
 *
 * (C) 2023-2024 Gissio
 *
 * License: MIT
 */

#if !defined(KEYBOARD_H)
#define KEYBOARD_H

#include <stdbool.h>
#include <stdint.h>

typedef enum
{
    KEY_LEFT,
    KEY_RIGHT,
    KEY_UP,
    KEY_DOWN,
} key_t;

void initKeyboard(void);

bool getKeyDown(key_t index);

#endif
