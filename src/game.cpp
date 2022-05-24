#include "game.h"
#include "timer.h"
#include "console_window.h"
#include "ball.h"
#include "paddle.h"

#include <Windows.h>
#include <iostream>

Game::Game(Window window, Paddle player1, Paddle player2, Ball ball) {
    this->window = window;
    window.clear();
    this->ball = ball;
    this->player1 = player1;
    this->player2 = player2;
}

// Draw all objects to the window
void Game::drawObjects() {
    // Player 1
    for (int i = 0; i < (player1.yBottom - player1.yTop) + 1; i++) {
        window.setPixel(player1.xValue, player1.yTop + i, '#');
    }
    // Player 2
    for (int i = 0; i < (player2.yBottom - player2.yTop) + 1; i++) {
        window.setPixel(player2.xValue, player2.yTop + i, '#');
    }
    // Ball
    window.setPixel(ball.x_pos, ball.y_pos, 'O');
    
    // Score
    window.setPixel(98, -1, '0' + player1.score);
    window.setPixel(113, -1, '0' + player2.score);

    // Draw then reset the window
    window.draw();
    window.clear();
}

int Game::ball_paddle_collision() {
    // Corner Collisions and Middle Collisions
    // Paddle 1
    for (int i = 0; i < (player1.yBottom - player1.yTop) + 1; i++) {
        if (ball.x_pos <= player1.xValue && ball.y_pos <= player1.yTop + i) {
            return 1;
        }
    }
    for (int i = 0; i < (player2.yBottom - player2.yTop) + 1; i++) {
        if (ball.x_pos >= player2.xValue && ball.y_pos <= player2.yTop + i) {
            return 1;
        }
    }
    return 0;
}

// Reset the game with the ball in the middle and players back to their default location.
void Game::setup() {    
    drawObjects();
}

// Game loop
void Game::run() {
    while (true) {
        player1.move();
        player2.move();
        int ball_paddle = ball_paddle_collision();
        if (ball_paddle) {
            ball.x_change *= -1;
            ball.y_change *= -1;
        }
        int ball_collision = ball.move();
        if(ball_collision == 1) {
            player1.score += 1;
        } else if (ball_collision == 2) {
            player2.score += 1;
        }
        drawObjects();
    }
}
