#include "paddle.h"
#include "console_window.h"

#include <iostream>
#include <string>
#include <Windows.h>

Paddle::Paddle() {};
Paddle::Paddle(int xValue, int yTop, int yBottom, char up_key, char down_key, unsigned int moveCooldown) {
    this->xValue = xValue;
    this->yTop = yTop;
    this->yBottom = yBottom;
    this->up_key = up_key;
    this->down_key = down_key;
    this->moveCooldown = moveCooldown;

    moveTimer.setTimer(this->moveCooldown);
}

// Move the paddle in a certain direction given that the corresponding key is pressed
void Paddle::move() {
    if ((bool)(GetAsyncKeyState(up_key) & 0x8000) && yTop > 0 && moveTimer.ended()) {
        yTop -= 1;
        yBottom -= 1;
        moveTimer.setTimer(moveCooldown);
    }
    if ((bool)(GetAsyncKeyState(down_key) & 0x8000) && yBottom < 49 && moveTimer.ended()) {
        yTop += 1;
        yBottom += 1;
        moveTimer.setTimer(moveCooldown);
    }
}


