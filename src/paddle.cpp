#include "paddle.h"
#include "console_window.h"

#include <iostream>
#include <Windows.h>


Paddle::Paddle(int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown) {
    this->xValue = xValue;
    this->yTop = yTop;
    this->yBottom = yBottom;
    this->length = this->yBottom - this->yTop;
    this->upKey = upKey;
    this->downKey = downKey;
    this->moveCooldown = moveCooldown;
}

void Paddle::move() {
    if (moveTimer.endTimer()) {
        bool upState = (bool)(GetAsyncKeyState(upKey) & 0x8000);
        bool downState = (bool)(GetAsyncKeyState(downKey) & 0x8000);

        if (upState && (yTop > 0)) {
            yTop -= 1;
            yBottom -= 1;
            std::cout << yTop << ", " << yBottom << std::endl;
        }
        if (downState && (yBottom < 49)) {
            yTop += 1;
            yBottom += 1;
            std::cout << yTop << ", " << yBottom << std::endl;
        }

        moveTimer.setTimer(moveCooldown);
    }   
}

