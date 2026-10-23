/*----------------------------------------------------------------------------
  Sample:    M4-07  Distance sensor with a threshold
  Module:    4  Optical and distance sensors
  Hardware:  EXP Brain, 1 motor in Smart Port 1,
             1 distance sensor in Smart Port 3
  What it does: shows the distance in millimetres. The motor spins when the
                reading is below the threshold and stops otherwise.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);
distance Distance1 = distance(PORT3);

// The threshold, in millimetres. Change it in ONE place.
const double NEAR_MM = 300;

int main() {
    while (true) {
        // Read the sensor once per pass and keep the value in a variable.
        double distanceMM = Distance1.objectDistance(mm);

        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);
        Brain.Screen.print("Dist: %.0f mm", distanceMM);
        Brain.Screen.newLine();

        if (distanceMM < NEAR_MM) {
            Motor1.spin(forward, 50, percent);
            Brain.Screen.print("NEAR");
        } else {
            Motor1.stop();
            Brain.Screen.print("FAR");
        }

        wait(100, msec);
    }

    return 0;
}
