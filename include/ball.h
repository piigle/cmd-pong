#pragma once
#include <string>

#include "console_window.h"
#include "timer.h"


class Ball {
public:
    int xPos;
    int yPos;

    int xChange;
    int yChange;

    Ball(int x, int y, int dx, int dy);
    Ball();
};