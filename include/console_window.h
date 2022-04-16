#pragma once
#include <string>
#include <vector>
#include <Windows.h>

class Window {
public:
    std::vector<std::string> contents;
    const char* frameFile;

    Window(const char* frameFile);
    void displayWindow();
    void setPixel(int x, int y, char pixelType);
    void reset();
    void clear();
};
    