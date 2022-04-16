#include "console_window.h"
#include "timer.h"
#include "paddle.h"


#include <iostream>
#include <Windows.h>

int main() {
    Paddle player1(3, 5, 15, 'W', 'S', 100);

    while (true) {
        player1.move();
    }

    std::cin.get();
    return 0;
}