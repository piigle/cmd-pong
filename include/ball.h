#pragma once
#include <string>

#include "console_window.h"
#include "timer.h"


class Ball {
public:
    int x_pos;
    int y_pos;

    int x_change;
    int y_change;
    Timer ballTimer;

    Ball();
    Ball(int x, int y, int dx, int dy);
    
    void move();
    void reset();
};