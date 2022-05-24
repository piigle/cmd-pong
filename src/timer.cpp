#include "timer.h"
#include <Windows.h>

// Restart the clock on the timer or cooldown
void Timer::setTimer(unsigned int time) {
    setTime = GetTickCount();
    waitTime = time;
}

// Returns true when timer is finished (cooldown is over)
bool Timer::ended() {
    if (GetTickCount() > setTime + waitTime) {
        return true;
    } else {
        return false;
    }
}
