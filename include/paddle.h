#pragma once
#include "console_window.h"
#include "timer.h"

class Paddle {
public:
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

    Paddle(int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown);
    void move();
    void draw();
};