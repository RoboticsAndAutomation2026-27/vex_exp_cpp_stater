/*----------------------------------------------------------------------------
  Sample:    M3-05  Bumper switch controls a motor
  Module:    3  Bumper switch
  Hardware:  EXP Brain, 1 motor in Smart Port 1,
             1 bumper switch in 3-Wire Port A
  What it does: the motor spins while the bumper is pressed and stops when
                it is not. The screen shows Motor ON or Motor OFF.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);
bumper Bumper1 = bumper(Brain.ThreeWirePort.A);

int main() {
    // Repeat forever: check the bumper, then act on what it says.
    while (true) {
        if (Bumper1.pressing()) {
            Motor1.spin(forward, 50, percent);
            Brain.Screen.clearScreen();
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Motor ON");
        } else {
            Motor1.stop();
            Brain.Screen.clearScreen();
            Brain.Screen.setCursor(1, 1);
            Brain.Screen.print("Motor OFF");
        }

        // A short pause so the loop does not run flat out.
        wait(20, msec);
    }

    return 0;
}
