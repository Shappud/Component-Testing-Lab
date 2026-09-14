# V919 Vibration Motor Projects

This repository contains a collection of beginner-friendly V919 vibration motor projects created to explore and understand the fundamentals of controlling a vibration motor using an ESP32.

Each project focuses on a different technique for switching the vibration motor on and off, controlling vibration duration and intensity, creating vibration patterns, and using vibration as a form of physical feedback. Together, they provide a structured introduction to vibration-based outputs before moving on to more advanced haptic feedback, robotics, wearable electronics, and embedded systems projects.

These examples demonstrate concepts such as digital output, timing, PWM control, state control, vibration patterns, and event-based feedback. They can also serve as reference implementations that can be reused and expanded in future electronics, robotics, IoT, and embedded systems projects.

## Projects Included

### Vibration Control

Turns the vibration motor on and off using an ESP32 GPIO pin. This introduces digital output control and demonstrates how a microcontroller can control a vibration motor.

### Vibration Blink

Turns the vibration motor on and off at regular intervals to create a repeating vibration pattern. This introduces timing and demonstrates how delays can be used to create repeated output patterns.

### Vibration Toggle

Uses a push button to toggle the vibration motor between on and off states. This introduces button press detection and state tracking.

### Vibration Timer

Activates the vibration motor for a defined amount of time entered through the Serial Monitor. This introduces timing-based control and demonstrates how an output can automatically switch off after a specified duration.

### Vibration Intensity

Uses PWM to control the vibration motor's intensity. This introduces PWM output and demonstrates how changing the output level can affect the strength of the vibration.

### Vibration Patterns

Creates different programmed vibration sequences using different durations and intensities. This introduces timing, sequencing, and pattern generation.

## Learning Objectives

By completing these projects, you will gain experience with:

* Understanding how the V919 vibration motor works
* Controlling a vibration motor using an ESP32
* Using digital outputs
* Using PWM outputs
* Turning the vibration motor on and off
* Controlling vibration intensity
* Controlling vibration duration
* Tracking output states
* Detecting button presses
* Using timing and delays
* Generating timed vibration pulses
* Creating repeating vibration patterns
* Creating programmed vibration sequences
* Using variables to control vibration parameters
* Creating reusable vibration-control functions
* Monitoring output states through the Serial Monitor
* Using vibration as physical feedback
* Applying vibration control to embedded systems
* Integrating haptic feedback into electronics projects

These projects provide a solid foundation for understanding how vibration motors can be controlled and used as physical feedback devices in electronics, robotics, IoT, wearable devices, and embedded systems projects.

The vibration motor should be driven using an appropriate transistor or motor driver rather than directly from an ESP32 GPIO pin when the motor's current requirements exceed what the GPIO can safely provide.
