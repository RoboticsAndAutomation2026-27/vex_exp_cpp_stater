/*----------------------------------------------------------------------------
  Sample:    M4-08b  Keep the motor on for 2 seconds: timer version
  Module:    4  Optical and distance sensors
  Hardware:  EXP Brain, 1 motor in Smart Port 1,
             1 optical sensor in Smart Port 2
  What it does: the same behaviour as M4-08a, but the program keeps
                checking the sensor all the time.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
  Compare with:  M4-08a, which uses wait().
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);
optical Optical1 = optical(PORT2);

// How long to keep the motor on after the object leaves, in milliseconds.
const double HOLD_MS = 2000;

int main() {
    // A timer counts up from the moment it is made, or from its last clear().
    timer holdTimer = timer();

    // true from the first time an object is seen until the hold time runs out
    bool holding = false;

    while (true) {
        if (Optical1.isNearObject()) {
            holdTimer.clear();   // restart the count every pass an object is near
            holding = true;
        }

        if (holding && holdTimer.time(msec) < HOLD_MS) {
            Motor1.spin(forward, 50, percent);
        } else {
            holding = false;
            Motor1.stop();
        }

        wait(20, msec);
    }

    return 0;
}
