
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "console_window.h"
#include <Windows.h>

std::vector<std::string> Window::loadBlankWindow() {
    std::vector<std::string> window;
    std::string windowLine;
    std::ifstream windowFile("frames/window.txt");
    
    while (std::getline(windowFile, windowLine)) {
        window.push_back(windowLine);
    }
    windowFile.close();
    return window;
}

void Window::displayWindow(std::vector<std::string> window) {
    for (int i = 0; i < window.size(); i++) {
        std::cout << window[i] << std::endl;
    }
}

void Window::setPixel(std::vector<std::string> &window, int x, int y, char pixelType) { // (0, 0) is at the top left corner
    window[y+1][x+2] = pixelType;
}

void Window::reset() {
    COORD pos = {0, 0};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}