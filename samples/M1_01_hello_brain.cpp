/*----------------------------------------------------------------------------
  Sample:    M1-01  Hello Brain
  Module:    1  Setup and first program
  Hardware:  EXP Brain only (no motors or sensors)
  What it does: prints three lines to the Brain screen, one second apart.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

// Creates the Brain object. Its Screen part is what we print to.
brain Brain;

int main() {
    // Put the cursor at row 1, column 1, then print.
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Step 1: hello");
    wait(1, seconds);

    // newLine() moves the cursor to the start of the next row.
    Brain.Screen.newLine();
    Brain.Screen.print("Step 2: EXP");
    wait(1, seconds);

    Brain.Screen.newLine();
    Brain.Screen.print("Step 3: done");

    // An endless loop that does nothing except wait.
    while (true) {
        wait(100, msec);
    }

    return 0;
}
