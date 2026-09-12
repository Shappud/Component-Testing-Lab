# TTP223 Touch Sensor Projects

This repository contains a collection of beginner-friendly TTP223 touch sensor projects created to explore and understand the fundamentals of capacitive touch detection using an ESP32.

Each project focuses on a different technique for detecting touch, tracking touch states, responding to touch events, and processing touch input. Together, they provide a structured introduction to touch-based input before moving on to more advanced user interfaces, automation, IoT, and embedded systems projects.

These examples demonstrate concepts such as digital input, touch detection, state tracking, toggle behavior, timing, touch duration, and event detection. They can also serve as reference implementations that can be reused and expanded in future electronics, robotics, and embedded systems projects.

## Projects Included

### Basic Touch Detection

Uses a TTP223 touch sensor to detect when the sensor is touched and displays the current touch state through the Serial Monitor. This introduces digital input and demonstrates how a microcontroller can respond to a capacitive touch signal.

### Touch-Activated LED

Turns an LED on while the TTP223 sensor is being touched. This introduces sensor-controlled outputs and demonstrates how touch can directly control an electronic component.

### Touch Toggle

Uses a touch input to toggle an LED on or off each time the sensor is touched. This introduces state tracking and demonstrates how a momentary touch input can control a persistent output state.

### Touch Counter

Counts the number of times the sensor is touched and displays the count through the Serial Monitor. This introduces event detection, counting, and state transitions.

### Touch Duration

Measures how long the TTP223 sensor remains touched. This introduces timing and demonstrates how the duration of an input can be used as additional information.

### Short Touch vs Long Touch

Uses the duration of a touch to perform different actions. A short touch can trigger one action while a longer touch triggers another. This introduces input classification and demonstrates how timing can create multiple controls from a single sensor.

### Touch Timer

Starts a timer when the sensor is touched and performs an action when the timer reaches a defined duration. This introduces timing-based control and demonstrates how touch can be used to start timed processes.

### Touch Sequence

Uses touch events to detect a specific sequence of interactions. The system responds only when the required sequence is completed correctly. This introduces state machines, event sequences, and input validation.

## Learning Objectives

By completing these projects, you will gain experience with:

* Understanding how the TTP223 touch sensor works
* Understanding capacitive touch detection
* Reading digital sensor outputs
* Detecting touch events
* Detecting touch and release states
* Tracking input states
* Detecting state changes
* Counting touch events
* Measuring touch duration
* Distinguishing short and long touches
* Using timing with digital inputs
* Creating toggle behavior
* Controlling LEDs using touch
* Processing touch events
* Creating touch sequences
* Using state machines for input handling
* Validating input sequences
* Creating reusable touch sensor functions
* Applying touch sensing to interactive electronics
* Integrating touch sensors into embedded systems
* Understanding event-based input processing

These projects provide a solid foundation for understanding capacitive touch input and demonstrate how the TTP223 can be used as a simple and responsive input device for electronics, robotics, IoT, and embedded systems.
