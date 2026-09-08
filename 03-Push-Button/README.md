# Push Button Projects

This repository contains a collection of beginner-friendly push button projects created to explore and understand the fundamentals of reading and processing button inputs using an ESP32.

Each project focuses on a different method of detecting button presses and responding to user input. Together, they provide a structured introduction to digital inputs and physical controls before moving on to more advanced electronics, sensors, and interactive embedded systems projects.

These examples demonstrate concepts such as digital input, GPIO configuration, button state detection, pull-up and pull-down resistors, toggling outputs, using buttons to control LEDs, handling multiple button inputs, timing, and creating interactive hardware systems. They can also serve as reference implementations that can be reused and expanded in future robotics, IoT, and embedded systems projects.

## Projects Included

### Basic Push Button

A basic project that detects whether a push button is pressed or released and turns an LED on or off accordingly. This introduces digital input and demonstrates how a microcontroller reads the state of a physical button.

### Switch Button

Uses a switch-type push button to control an LED, turning it on or off according to the button's state. This project demonstrates how digital inputs can be used to control digital outputs.

### Multiple Button Inputs

Uses two push buttons to control two LEDs. Pressing either button individually lights up LED1, while pressing both buttons simultaneously lights up LED2. This introduces multiple digital inputs and logic conditions, demonstrating how a microcontroller can read several physical switches and control outputs based on their combined states.

### Button Press Counter

Uses a push button to count the number of times it is pressed and displays the current count through an output. This introduces input counting and variables, demonstrating how a microcontroller can track repeated button presses and store changing values.

### Short and Long Press

Detects whether a push button is pressed briefly or held down for a longer period of time, triggering different outputs for each type of press. This introduces timing and input detection, demonstrating how a microcontroller can measure the duration of a button press and respond accordingly.

### Combination Lock

Uses multiple push buttons to enter a specific combination and lights an LED when the correct sequence is entered. This introduces input sequences and conditional logic, demonstrating how a microcontroller can compare user input with a predefined combination and respond accordingly.

### Reaction Time Tester

Uses a button and LED to test how quickly a user can react to a visual signal by pressing the button as soon as the LED lights up. This introduces timing and input detection, demonstrating how a microcontroller can measure the time between an output signal and a user's response.

## Learning Objectives

By completing these projects, you will gain experience with:

* Configuring GPIO pins for button inputs and LED outputs
* Reading digital input states
* Using pull-up and pull-down resistors
* Detecting button presses and releases
* Using conditional statements with hardware inputs
* Tracking button states using variables
* Counting and storing button presses
* Measuring the duration of button presses
* Detecting short and long button presses
* Handling multiple button inputs
* Combining input states using logic conditions
* Creating input sequences and combination-based controls
* Comparing user input with predefined conditions
* Measuring reaction time using timers
* Controlling outputs based on user input
* Applying programming logic to physical controls
* Creating interactive hardware systems
* Understanding how software and hardware work together
* Building more complex projects from basic digital inputs

These projects provide a solid foundation for understanding how microcontrollers interact with physical controls and can be expanded into more advanced projects involving keypads, switches, sensors, control panels, robotics, IoT devices, and interactive embedded systems.
