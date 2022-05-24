#include "console_window.h"
#include "timer.h"
#include "paddle.h"
#include "game.h"


#include <iostream>
#include <Windows.h>

int main() {
    Paddle player1(6, 10, 19, 'W', 'S', 100);
    Paddle player2(199 - 6, 10, 19, 'R', 'F', 100);
    Ball ball(100, 24, -2, -1);
    Window window;
    Game game(window, player1, player2, ball);

    game.setup();
    game.run();
    return 0;
}
