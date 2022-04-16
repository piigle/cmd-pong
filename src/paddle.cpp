#include "paddle.h"
#include "console_window.h"

#include <iostream>
#include <string>
#include <Windows.h>


Paddle::Paddle(const char* name, int xValue, int yTop, int yBottom, char upKey, char downKey, unsigned int moveCooldown) {
    this->name = name;
    this->xValue = xValue;
    this->yTop = yTop;
    this->yBottom = yBottom;
    this->length = this->yBottom - this->yTop;
    this->upKey = upKey;
    this->downKey = downKey;
    this->moveCooldown = moveCooldown;
}


void Paddle::move(Window window) {
    if (moveTimer.endTimer()) {
        bool upState = (bool)(GetAsyncKeyState(upKey) & 0x8000);
        bool downState = (bool)(GetAsyncKeyState(downKey) & 0x8000);

        if (upState && (yTop > 0)) {
            yTop -= 1;
            yBottom -= 1;

            window.setPixel(4, yTop, '#');
            window.setPixel(4, yBottom, '#');
            window.clear();
            window.displayWindow();
        }
        if (downState && (yBottom < 49)) {
            yTop += 1;
            yBottom += 1;
            window.setPixel(4, yTop, '#');
            window.setPixel(4, yBottom, '#');
            window.clear();
            window.displayWindow();

        }
        moveTimer.setTimer(moveCooldown);
    }   
}

