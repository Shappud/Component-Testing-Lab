# 01 - HW-504 Joystick Reading

## Objective

Create a simple ESP32 program that reads the X-axis, Y-axis, and button values of an HW-504 joystick module.

## Components Used

* ESP32
* HW-504 Joystick Module
* Breadboard
* Jumper wires

## Concepts

* Analog Input
* Digital Input
* analogRead()
* digitalRead()
* pinMode()
* Serial Monitor
* Variables

## Wiring

* VCC → 3.3V
* GND → GND
* VRx → GPIO 34
* VRy → GPIO 35
* SW → GPIO 32

## Expected Result

The Serial Monitor displays changing X-axis and Y-axis values when the joystick is moved, along with the button state when the joystick is pressed.

## What I Learned

* How to read analog values from a joystick
* How to read a digital button input
* How to configure input pins
* How to use analogRead() and digitalRead()
* How to display sensor readings using the Serial Monitor
* How joystick movement affects X and Y values

## Resources

* ESP32 Documentation
* Arduino Documentation
* HW-504 Joystick Module Documentation

