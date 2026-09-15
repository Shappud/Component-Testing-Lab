# HW-504 Joystick Module Projects

This repository contains a collection of beginner-friendly HW-504 joystick module projects created to explore and understand the fundamentals of reading and using a joystick with an ESP32.

Each project focuses on a different technique for reading the joystick's X-axis, Y-axis, and button inputs, processing analog values, detecting movement, and using joystick input to control outputs. Together, they provide a structured introduction to joystick-based input before moving on to more advanced robotics, game controllers, and embedded systems projects.

These examples demonstrate concepts such as analog input, digital input, ADC readings, joystick centering, dead zones, value mapping, direction detection, button states, and multi-axis control. They can also serve as reference implementations that can be reused and expanded in future electronics, robotics, IoT, and embedded systems projects.

## Projects Included

### Basic Joystick Reading

Reads the X-axis and Y-axis values of the joystick and displays them through the Serial Monitor. This introduces analog input and demonstrates how joystick movement produces changing ADC readings.

### Joystick Button

Reads the joystick's built-in push button and displays its state through the Serial Monitor. This introduces digital input and demonstrates how the joystick can provide both analog and digital inputs.

### Joystick Direction

Determines whether the joystick is being moved up, down, left, right, or is near the center. This introduces thresholds and demonstrates how analog readings can be converted into directional commands.

### Joystick Dead Zone

Creates a dead zone around the joystick's center position where small movements are ignored. This introduces input filtering and helps prevent unintended movement caused by small variations in the joystick's resting position.

### Joystick Calibration

Reads the joystick's resting position and establishes center values for the X and Y axes. This introduces calibration and demonstrates how input devices can be adjusted to account for differences between individual modules.

### Joystick Mapping

Maps the joystick's raw ADC readings into a different numerical range. This introduces value mapping and demonstrates how joystick input can be converted into useful control values.

### Joystick LED Control

Uses joystick movement to control LEDs based on the direction of movement. This introduces sensor-controlled outputs and demonstrates how two-axis input can control multiple outputs.

### Joystick Servo Control

Uses the joystick's X and Y axes to control servo positions. This introduces multi-axis control and demonstrates how joystick movement can be translated into mechanical movement.

### Joystick Speed Control

Uses the joystick's position to control the speed of an output such as a motor through PWM. This introduces proportional control and demonstrates how the amount of joystick movement can affect output intensity.

### Joystick Controller

Combines the joystick axes and button into a simple controller interface. Different joystick movements and button presses are assigned to different actions. This introduces multiple-input processing and demonstrates how a joystick can act as a general-purpose control device.

## Learning Objectives

By completing these projects, you will gain experience with:

* Understanding how the HW-504 joystick module works
* Reading analog joystick inputs
* Reading digital joystick button inputs
* Using ESP32 ADC inputs
* Understanding X-axis and Y-axis readings
* Understanding joystick center positions
* Detecting joystick directions
* Creating joystick dead zones
* Calibrating analog inputs
* Mapping ADC values to different ranges
* Using thresholds for movement detection
* Processing two analog inputs
* Processing analog and digital inputs together
* Detecting button presses
* Tracking input states
* Creating proportional controls
* Controlling LEDs using joystick movement
* Controlling servo positions
* Controlling output speed using joystick position
* Creating reusable joystick functions
* Building simple controller interfaces
* Applying joystick input to robotics
* Integrating analog controls into embedded systems

These projects provide a solid foundation for understanding joystick-based input and demonstrate how the HW-504 can be used as a versatile control interface for electronics, robotics, games, IoT, and embedded systems projects.
