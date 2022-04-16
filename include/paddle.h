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

    // Sizing and Position
    int xValue;
    int yTop;
    int yBottom;
    int length;

    Paddle(const char* name, int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown);
    void move(Window window);
    void draw(Window window);
};