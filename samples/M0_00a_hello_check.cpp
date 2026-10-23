/*----------------------------------------------------------------------------
  Sample:    M0-00a  Hello check
  Module:    0  Setup check
  Hardware:  EXP Brain only (no motors or sensors)
  What it does: prints one line on the Brain screen.
                If you can see it, your computer, VS Code, the VEX extension
                and the Brain are all working together.
  How to use:  copy this whole file into your project's src/main.cpp,
               replacing what is there. Build, download and run.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;

int main() {
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Hello EXP");

    // Keeps the program running so the message stays on the screen.
    while (true) {
        wait(100, msec);
    }

    return 0;
}
