/*----------------------------------------------------------------------------
  Sample:    M4-06  Optical sensor controls a motor
  Module:    4  Optical and distance sensors
  Hardware:  EXP Brain, 1 motor in Smart Port 1,
             1 optical sensor in Smart Port 2
  What it does: the motor spins while the optical sensor says an object is
                near. The screen shows NEAR or FAR and the brightness reading.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
  Compare with:  M3-05. Only the sensor lines are different.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;
motor Motor1 = motor(PORT1, false);

// A Smart Port sensor is made with a port, not a 3-Wire Port.
optical Optical1 = optical(PORT2);

int main() {
    while (true) {
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);

        if (Optical1.isNearObject()) {
            Motor1.spin(forward, 50, percent);
            Brain.Screen.print("NEAR");
        } else {
            Motor1.stop();
            Brain.Screen.print("FAR");
        }

        // brightness() gives a decimal number, so the format is %.0f
        Brain.Screen.newLine();
        Brain.Screen.print("Bright: %.0f", Optical1.brightness());

        wait(100, msec);
    }

    return 0;
}
