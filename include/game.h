#pragma once
#include "console_window.h"
#include "timer.h"
#include "paddle.h"
#include "ball.h"

#include <Windows.h>

class Game {
public:
    Window window;

    Paddle player1;
    Paddle player2;
    Ball ball;
    Timer ballTimer;

    Game(Window window, Paddle player1, Paddle player2, Ball ball);

    void drawObjects();
    void checkInput();
    //void moveBall();
    void run();
};