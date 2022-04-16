#include "timer.h"
#include <Windows.h>

void Timer::setTimer(unsigned int time) {
    setTime = GetTickCount();
    waitTime = time;
}

bool Timer::endTimer() {
    if (GetTickCount() > setTime + waitTime) {
        return true;
    } else {
        return false;
    }
}
