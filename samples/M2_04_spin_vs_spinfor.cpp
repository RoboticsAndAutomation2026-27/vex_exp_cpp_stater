/*----------------------------------------------------------------------------
  Sample:    M2-04  spin() and spinFor(): does the program wait?
  Module:    2  Motors
  Hardware:  EXP Brain, 1 motor in Smart Port 1
  What it does: three short parts. Each part starts the motor in a different
                way, then prints a line. Watch WHEN the second line appears.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);

int main() {
    // Part A: spin()
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("A: spin");
    Motor1.spin(forward, 50, percent);
    Brain.Screen.newLine();
    Brain.Screen.print("A: after spin");
    wait(2, seconds);
    Motor1.stop();
    wait(1, seconds);

    // Part B: spinFor() with a time
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("B: spinFor");
    Motor1.spinFor(forward, 2.0, seconds, 50, velocityUnits::pct);
    Brain.Screen.newLine();
    Brain.Screen.print("B: after spinFor");
    wait(1, seconds);

    // Part C: spinFor() with a rotation, and waitForCompletion set to false
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("C: spinFor 1 turn");
    Motor1.spinFor(forward, 1, turns, 50, velocityUnits::pct, false);
    Brain.Screen.newLine();
    Brain.Screen.print("C: after spinFor");
    wait(3, seconds);

    return 0;
}
