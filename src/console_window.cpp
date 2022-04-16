
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "console_window.h"
#include <Windows.h>



void Window::loadFromFile(const char* filePath) {
    std::string contentLine;
    std::ifstream contentsFile(filePath);

    contents.clear();
    while (std::getline(contentsFile, contentLine)) {
        contents.push_back(contentLine);
    }
    contentsFile.close();
}

Window::Window() {
    loadFromFile("frames/default.txt");
}

void Window::draw() {
    for (int i = 0; i < contents.size(); i++) {
        std::cout << contents[i] << std::endl;
    }
}

void Window::setPixel(int x, int y, char pixelType) { // (0, 0) is at the top left corner
    contents[y+1][x+2] = pixelType;
}

void Window::clear() {
    COORD pos = {0, 0};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);

    loadFromFile("frames/default.txt");
}