
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "console_window.h"
#include <Windows.h>

Window::Window(const char* frameFile) {
    std::vector<std::string> contents;

    std::string contentLine;
    std::ifstream contentsFile(frameFile);
    
    while (std::getline(contentsFile, contentLine)) {
        contents.push_back(contentLine);
    }
    contentsFile.close();
    this->contents = contents;
    this->frameFile = frameFile;
}

void Window::displayWindow() {
    for (int i = 0; i < contents.size(); i++) {
        std::cout << contents[i] << std::endl;
    }
}

void Window::setPixel(int x, int y, char pixelType) { // (0, 0) is at the top left corner
    contents[y+1][x+2] = pixelType;
}

void Window::reset() {
    std::string contentLine;
    std::ifstream contentsFile(frameFile);

    contents.clear();
    while (std::getline(contentsFile, contentLine)) {
        contents.push_back(contentLine);
    }
    contentsFile.close();
}

void Window::clear() {
    COORD pos = {0, 0};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}