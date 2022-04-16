#pragma once
#include <string>
#include <vector>

namespace Window {
    std::vector<std::string> loadBlankWindow();
    void displayWindow(std::vector<std::string> window);
    void setPixel(std::vector<std::string> &window, int x, int y, char pixelType);
    void reset();
}
    