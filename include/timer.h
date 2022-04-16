#pragma once
#include <Windows.h>

class Timer {
private:
    DWORD setTime;
    unsigned int waitTime = 0;
public:
    void setTimer(unsigned int time);
    bool ended();
};