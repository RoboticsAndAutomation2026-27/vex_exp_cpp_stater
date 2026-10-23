/*----------------------------------------------------------------------------
  Sample:    M0-00c  Bumper check
  Module:    0  Setup check
  Hardware:  EXP Brain, 1 bumper switch in 3-Wire Port A
  What it does: shows on the screen whether the bumper is pressed.
                Press and release the bumper and watch the message change.
  How to use:  copy this whole file into your project's src/main.cpp,
               replacing what is there. Build, download and run.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
bumper Bumper1 = bumper(Brain.ThreeWirePort.A);

int main() {
    while (true) {
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);

        if (Bumper1.pressing()) {
            Brain.Screen.print("Bumper: PRESSED");
        } else {
            Brain.Screen.print("Bumper: not pressed");
        }

        wait(100, msec);
    }

    return 0;
}
