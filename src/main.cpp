#include "console_window.h"
#include "timer.h"
#include "paddle.h"
#include "game.h"


#include <iostream>
#include <Windows.h>

int main() {
    Paddle player1("Player1", 3, 10, 19, 'W', 'S', 100);
    Paddle player2("Player2", 199 - 4, 10, 19, 'R', 'F', 100);
    Window window;
    Game game(window, player1, player2);


    game.run();
    return 0;
}