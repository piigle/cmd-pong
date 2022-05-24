#pragma once
#include <string>

#include "console_window.h"
#include "timer.h"

class Paddle {
public:
    int score = 0;

    // Controls
    char up_key;
    char down_key;

    // Timing
    Timer moveTimer;
    unsigned int moveCooldown;

    // Position
    int xValue;
    int yTop;
    int yBottom;

    Paddle(int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown);
    Paddle();

    void move();
};