#pragma once
#include "console_window.h"
#include "timer.h"
#include "paddle.h"

#include <Windows.h>

class Game {
public:
    Window window;

    Paddle player1;
    Paddle player2;

    Game(Window window, Paddle player1, Paddle player2);

    void drawObjects();
    void checkInput();
    void run();
};