#include "console_window.h"
#include "timer.h"
#include "paddle.h"


#include <iostream>
#include <Windows.h>

int main() {
    Paddle player1("Player1", 3, 5, 15, 'W', 'S', 100);
    Paddle player2("Player2", 3, 5, 15, 'R', 'F', 100);

    while (true) {
        player1.move();
        player2.move();
    }

    std::cin.get();
    return 0;
}