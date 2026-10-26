# VEX EXP C++ Programming Modules

> **DRAFT for pilot.** These programs have been syntax-checked but not yet run on a real EXP Brain. If something does not work, tell your teacher.

These are the sample programs for the VEX EXP C++ modules in Robotics & Automation. Each one is a complete, working program. **You do not type them in. You copy them from the `samples` folder into your own VEX EXP VS Code project (replace the contents of main.cpp with the code from here) and run them.**

> **Use only the `samples` folder.** This repository also contains a generated VEX project (`src`, `include`, `makefile`). **Do not build or work in it.** You make your own project in Step 2.

## What you need

- VS Code with the **VEX Robotics extension** installed
- A VEX EXP Brain, connected by USB
- The test board wired like this:

| Device | Port |
| --- | --- |
| Motor | Smart Port 1 |
| Optical sensor | Smart Port 2 |
| Distance sensor | Smart Port 3 |
| Bumper switch | 3-Wire Port A |

If your board is wired differently, tell your teacher before you run anything. The programs use exactly these ports.

## Step 1: Get the sample files

Do one of these:

- **Download everything:** on this page, click the green **Code** button, then **Download ZIP**, and unzip it. The programs are in the `samples` folder.
- **Copy one file:** click the file name in the `samples` folder, then use the **Copy raw file** button (the two overlapping squares). This copies the whole file.

## Step 2: Create your project (once)

1. Open VS Code.
2. Use the VEX Robotics extension to start a **New Project**. Choose **EXP**, then **C++**, then the **EXP Empty Template Project**.
3. Name it with **no spaces**, for example `RoboticsEXP`. Remember where it is saved. Keep it **outside** the downloaded repository folder.

You only do this once. You will reuse the same project for every sample.

## Step 3: Put a sample into your project

For each sample, do this:

1. Open the sample `.cpp` file from the `samples` folder and **select all** (Ctrl+A on Windows, Cmd+A on Mac). **Copy** it.
2. In your own project, open `src/main.cpp`.
3. **Select all** and **paste**. This **replaces** everything that was in `main.cpp`. When you finish, the file should contain only the sample.
4. **Save** (Ctrl+S or Cmd+S).
5. With the Brain connected, choose a slot, then **Build** and **Download** using the VEX extension.
6. **Run** the program.

Then, to try the next sample, go back to step 1 and paste over `main.cpp` again.

## Rules for the samples

- **Replace, do not add.** Paste over everything in `src/main.cpp`. Do not paste a second program below the first one. A file can only have one `main()`.
- **Keep the sample files out of your `src` folder.** Leave them in the downloaded `samples` folder, and copy from there. Only `main.cpp` should hold a program.
- **Copy the whole file**, from the first line to the last, including the comment at the top.
- **Do not change a sample** until your workbook tells you to. Save your changes in `main.cpp`, not in the original file.
- If the build shows errors, read the **first** error, not the last.

## Which sample goes with which module

| File | Module | What it needs |
| --- | --- | --- |
| `M0_00a_hello_check.cpp` | 0 Setup check | Brain only |
| `M0_00b_motor_check.cpp` | 0 Setup check | Motor |
| `M0_00c_bumper_check.cpp` | 0 Setup check | Bumper |
| `M1_01_hello_brain.cpp` | 1 First program | Brain only |
| `M1_02_inertial_variables.cpp` | 1 First program | Brain only (uses its built-in inertial sensor; set it down flat and still at the start) |
| `M2_02_one_motor.cpp` | 2 Motors | Motor |
| `M2_03a_repeat_for.cpp` | 2 Motors | Motor |
| `M2_03b_repeat_while.cpp` | 2 Motors | Motor |
| `M2_04_spin_vs_spinfor.cpp` | 2 Motors | Motor |
| `M3_05_bumper_motor.cpp` | 3 Bumper | Motor, bumper |
| `M4_06_optical_motor.cpp` | 4 Optical and distance | Motor, optical sensor |
| `M4_07_distance_threshold.cpp` | 4 Optical and distance | Motor, distance sensor |
| `M4_08a_hold_blocking.cpp` | 4 Optical and distance | Motor, optical sensor |
| `M4_08b_hold_timer.cpp` | 4 Optical and distance | Motor, optical sensor |

Your workbook tells you which sample to use and when. Check the comment at the top of each file for what it needs.

## If something goes wrong

| What you see | Things to try |
| --- | --- |
| The build says the project name cannot contain whitespace | Your project folder has a space in its name. Rename it without spaces and open it again. |
| The extension does not show the Brain | Is it turned on? Try another USB cable or port. Some cables only charge. |
| The build fails | Read the **first** error. Did you copy the whole file and replace everything in `main.cpp`? Was the project created with the VEX extension? Does its folder name have a space? |
| The build works but nothing happens | Did you download to the slot you are running? Did you press **Run**? |
| The motor does not move | Is the cable fully pushed into **Smart Port 1**? Is the Brain powered on? |
| A sensor does not respond | Check the cable and the port against the table above. |

When you ask for help, be ready to say what you did, what you expected, and what happened.