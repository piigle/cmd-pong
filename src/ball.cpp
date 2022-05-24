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

void Ball::move() {
    if (ballTimer.ended()) {
        x_pos -= x_change;
        y_pos -= y_change;

        // Collisions for the arena
        if (y_pos <= 0 || y_pos >= 49) {
            y_change *= -1;
        }
        if (x_pos <= 0 || x_pos >= 198) {
            x_change *= -1;
        }
        ballTimer.setTimer(50);
    }
}

// Puts ball at a random location
void Ball::reset() {
    std::random_device rd;
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<> dist(0,49);
    x_pos = 50;
    y_change = 1;
    x_change = -1;
    y_pos = dist(gen); 
    Sleep(2000);
}