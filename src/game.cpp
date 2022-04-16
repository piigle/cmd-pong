#include "game.h"
#include "timer.h"
#include "console_window.h"

#include <Windows.h>
#include <iostream>

Game::Game(Window window, Paddle player1, Paddle player2) {
    this->window = window;
    window.clear();
    
    this->player1 = player1;
    this->player2 = player2;
}

void Game::drawObjects() {
    // Player 1
    for (int i = 0; i < (player1.yBottom - player1.yTop) + 1; i++) {
        window.setPixel(player1.xValue, player1.yTop + i, '#');
    }
    // Player 2
    for (int i = 0; i < (player2.yBottom - player2.yTop) + 1; i++) {
        window.setPixel(player2.xValue, player2.yTop + i, '#');
    }
    window.draw();
    window.clear();
}

void Game::checkInput() {
    if (player1.moveTimer.ended()) {
        bool upState = (bool)(GetAsyncKeyState(player1.upKey) & 0x8000);
        bool downState = (bool)(GetAsyncKeyState(player1.downKey) & 0x8000);        
        if (upState && (player1.yTop > 0)) {
            player1.yTop -= 1;
            player1.yBottom -= 1;
            drawObjects();
        }
        if (downState && (player1.yBottom < 49)) {
            player1.yTop += 1;
            player1.yBottom += 1;
            drawObjects();
        }
        player1.moveTimer.setTimer(player1.moveCooldown);
    }
    if (player2.moveTimer.ended()) {
        bool upState = (bool)(GetAsyncKeyState(player2.upKey) & 0x8000);
        bool downState = (bool)(GetAsyncKeyState(player2.downKey) & 0x8000);        
        if (upState && (player2.yTop > 0)) {
            player2.yTop -= 1;
            player2.yBottom -= 1;
            drawObjects();
        }
        if (downState && (player2.yBottom < 49)) {
            player2.yTop += 1;
            player2.yBottom += 1;
            drawObjects();
        }
        player2.moveTimer.setTimer(player2.moveCooldown);
    }
}

void Game::run() {
    drawObjects();
    while (true) {
        checkInput();
    }
}