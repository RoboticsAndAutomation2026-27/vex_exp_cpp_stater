/*----------------------------------------------------------------------------
  Sample:    M2-03a  Repeat a motor cycle with a for loop
  Module:    2  Motors
  Hardware:  EXP Brain, 1 motor in Smart Port 1
  What it does: runs the motor for 1 second, stops it for 1 second,
                and repeats that 5 times. The screen shows the cycle number.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
  See also:  M2-03b does the same job with a while loop.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);

// A named value that does not change while the program runs.
const int CYCLES = 5;

int main() {
    // for (start; keep going while true; after each pass)
    for (int cycle = 1; cycle <= CYCLES; cycle++) {
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);
        Brain.Screen.print("Cycle %d of %d", cycle, CYCLES);

        Motor1.spin(forward, 50, percent);
        wait(1, seconds);

        Motor1.stop();
        wait(1, seconds);
    }

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Finished");

    return 0;
}
