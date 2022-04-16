#include "ball.h"
#include "console_window.h"

#include <iostream>
#include <string>
#include <Windows.h>

Ball::Ball(int x, int y, int dx, int dy) {
    xPos = x;
    yPos = y;
    xChange = dx;
    yChange = dy;
}
Ball::Ball() {}