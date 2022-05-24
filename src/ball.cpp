#include "ball.h"
#include "console_window.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <random>

Ball::Ball() {}
Ball::Ball(int x, int y, int dx, int dy) {
    x_pos = x;
    y_pos = y;
    x_change = dx;
    y_change = dy;
    ballTimer.setTimer(200);
}

int Ball::move() {
    if (ballTimer.ended()) {
        x_pos += x_change;
        y_pos += y_change;

        // Arena Top
        if (y_pos < 0 || y_pos > 49) {
            y_change *= -1;
        }
        // Arena Sides
        if (x_pos <= 0) {
            reset();
            return 2;
        }
        if (x_pos >= 199) {
            reset();
            return 1;
        }
        ballTimer.setTimer(50);
    }
    return 0;
}

// Puts ball at a random location
void Ball::reset() {
    std::random_device rd;
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<> dist(0,49);
    x_pos = 100;
    y_change = -1;
    x_change = -2;
    y_pos = dist(gen); 
    Sleep(1250);
}