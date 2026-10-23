/*----------------------------------------------------------------------------
  Sample:    M2-03b  Repeat a motor cycle with a while loop
  Module:    2  Motors
  Hardware:  EXP Brain, 1 motor in Smart Port 1
  What it does: the same behaviour as M2-03a, written with a while loop.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
  See also:  M2-03a does the same job with a for loop.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);

const int CYCLES = 5;

int main() {
    // The counter is made and given its starting value BEFORE the loop.
    int cycle = 1;

    // while (keep going while this is true)
    while (cycle <= CYCLES) {
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);
        Brain.Screen.print("Cycle %d of %d", cycle, CYCLES);

        Motor1.spin(forward, 50, percent);
        wait(1, seconds);

        Motor1.stop();
        wait(1, seconds);

        // The counter is changed INSIDE the loop.
        cycle = cycle + 1;
    }

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Finished");

    return 0;
}
