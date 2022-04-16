#pragma once
#include <string>
#include <vector>
#include <Windows.h>

class Window {
public:
    std::vector<std::string> contents;
    const char* frameFile;

    Window();
    void draw();
    void setPixel(int x, int y, char pixelType);
    void clear();
    void loadFromFile(const char* filePath);
};
    