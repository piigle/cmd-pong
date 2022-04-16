#pragma once
#include <string>

#include "console_window.h"
#include "timer.h"

class Paddle {
public:
    const char* name;

    // Controls
    char upKey;
    char downKey;
    Timer moveTimer;
    unsigned int moveCooldown;

    // Position
    int xValue;
    int yTop;
    int yBottom;

    Paddle(const char* name, int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown);
    Paddle();
};