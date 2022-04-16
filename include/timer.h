#pragma once
#include <Windows.h>

class Timer {
public:
    DWORD setTime;
    unsigned int waitTime = 0;

    void setTimer(unsigned int time);
    bool ended();
};