/*----------------------------------------------------------------------------
  Sample:    M1-02  Reading a sensor into variables
  Module:    1  First program
  Hardware:  EXP Brain only. It uses the Brain's built-in inertial sensor,
             so there is nothing to plug in.
  What it does: after a short calibration, shows the Brain's heading and
                rotation in degrees. Turn the Brain by hand and watch the
                numbers change.
  How to use:  copy this file into your project's src/main.cpp.
               Do not edit the original.
               Set the Brain down flat and keep it still for the first 3 seconds.
----------------------------------------------------------------------------*/

#include "vex.h"

using namespace vex;

brain Brain;

// No port is given, so this is the Brain's own built-in inertial sensor.
inertial Inertial1 = inertial();

int main() {
    // The sensor must be still while it calibrates.
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.print("Keep still...");
    Inertial1.calibrate();
    wait(3, seconds);

    while (true) {
        // Ask the sensor, and keep each answer in a variable.
        double headingDeg = Inertial1.heading(degrees);
        double rotationDeg = Inertial1.rotation(degrees);

        // Draw the screen again from the top, using the two variables.
        Brain.Screen.clearScreen();
        Brain.Screen.setCursor(1, 1);
        Brain.Screen.print("Heading: %.1f", headingDeg);
        Brain.Screen.newLine();
        Brain.Screen.print("Rotation: %.1f", rotationDeg);

        wait(100, msec);
    }

    return 0;
}
