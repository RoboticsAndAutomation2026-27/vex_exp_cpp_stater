/*----------------------------------------------------------------------------
  Sample:    M0-00b  Motor check
  Module:    0  Setup check
  Hardware:  EXP Brain, 1 motor in Smart Port 1
  What it does: spins the motor forward for 1 second, then in reverse for
                1 second, and shows which step it is on.
                Keep fingers and loose items clear of the motor.
  How to use:  copy this whole file into your project's src/main.cpp,
               replacing what is there. Build, download and run.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);

int main() {
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Motor: forward");
    Motor1.spin(forward, 50, percent);
    wait(1, seconds);
    Motor1.stop();
    wait(1, seconds);

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Motor: reverse");
    Motor1.spin(reverse, 50, percent);
    wait(1, seconds);
    Motor1.stop();

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Motor check done");

    // Keeps the program running so the message stays on the screen.
    while (true) {
        wait(100, msec);
    }

    return 0;
}
