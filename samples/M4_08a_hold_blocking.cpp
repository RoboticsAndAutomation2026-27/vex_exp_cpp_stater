/*----------------------------------------------------------------------------
  Sample:    M4-08a  Keep the motor on for 2 seconds: blocking version
  Module:    4  Optical and distance sensors
  Hardware:  EXP Brain, 1 motor in Smart Port 1,
             1 optical sensor in Smart Port 2
  What it does: the motor spins while an object is near, and keeps spinning
                for 2 more seconds after the object has gone.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
  Compare with:  M4-08b, which does the same job with a timer.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);
optical Optical1 = optical(PORT2);

int main() {
    while (true) {
        if (Optical1.isNearObject()) {
            Motor1.spin(forward, 50, percent);
        } else {
            // No object: wait 2 seconds, then stop.
            wait(2, seconds);
            Motor1.stop();
        }

        wait(20, msec);
    }

    return 0;
}
