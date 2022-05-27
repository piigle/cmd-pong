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

// Move the ball as well as respond to collisions in the game
void Game::ball_move() {
    if (ball.ballTimer.ended()) {
        bool player1_ball_collision = (ball.x_pos < player1.xValue + 1) && ((ball.y_pos < player1.yBottom + 1) && (ball.y_pos > player1.yTop - 1)); // Ball paddle collision with the left paddle
        bool player2_ball_collision = (ball.x_pos > player2.xValue - 2) && ((ball.y_pos < player2.yBottom + 1) && (ball.y_pos > player2.yTop - 1)); // Ball paddle collision with the right paddle
        bool paddle_collision = player1_ball_collision || player2_ball_collision;

        bool arena_top_bottom_collision = ball.y_pos < 1 || ball.y_pos > 48; // Top and Bottom Collision
        bool arena_left_collision = ball.x_pos <= 0; // Left side collision
        bool arena_right_collision = ball.x_pos >= 198; // Right side collision

        if (paddle_collision) {
            ball.x_change *= -1;    
            paddle_collision = false;
        }

        // Arena Top
        if (arena_top_bottom_collision) {
            ball.y_change *= -1;
            arena_top_bottom_collision = false;
        }

        // Arena Sides
        if (arena_left_collision) {
            player2.score += 1;
            ball.reset();
        } else if (arena_right_collision) {
            player1.score += 1;
            ball.reset();
        }

        if (!(arena_top_bottom_collision || arena_left_collision || arena_right_collision || paddle_collision)) {
            ball.x_pos += ball.x_change;
            ball.y_pos += ball.y_change;
        }
        ball.ballTimer.setTimer(50);
    }
    
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
        ball_move();
        drawObjects();
    }
}