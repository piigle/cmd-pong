#include "console_window.h"
#include "timer.h"
#include "paddle.h"


#include <iostream>
#include <Windows.h>

int main() {
    Window pongWindow("frames/default.txt");
    pongWindow.clear();

    Paddle player1("Player1", 3, 5, 15, 'W', 'S', 100);

    while (true) {
        
        player1.move(pongWindow);
    }

    std::cin.get();
    return 0;
}