/*----------------------------------------------------------------------------
  Sample:    M2-02  One motor: spin, wait, stop
  Module:    2  Motors
  Hardware:  EXP Brain, 1 motor in Smart Port 1
  What it does: spins the motor forward at 50% for 2 seconds, then stops it.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;

// A motor object: Smart Port 1. The second input (false) means "do not reverse".
motor Motor1 = motor(PORT1, false);

int main() {
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Motor on");

    // Start the motor. spin() starts it and the program moves straight on.
    Motor1.spin(forward, 50, percent);

    // Keep the program here for 2 seconds while the motor runs.
    wait(2, seconds);

    Motor1.stop();
    Brain.Screen.newLine();
    Brain.Screen.print("Motor stopped");

    return 0;
}
