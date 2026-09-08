# Buzzer Projects

This repository contains a collection of beginner-friendly buzzer projects created to explore and understand the fundamentals of programming a buzzer using an ESP32.

Each project focuses on a different technique for generating sounds, controlling pitch, handling timing, and using buttons as inputs. Together, they provide a structured introduction to sound generation and interactive output before moving on to more advanced electronics, audio, and embedded systems projects.

These examples demonstrate concepts such as GPIO configuration, digital input, button state detection, timing, frequency control, tone generation, sound patterns, melodies, and interactive audio feedback. They can also serve as reference implementations that can be reused and expanded in future robotics, IoT, and embedded systems projects.

## Projects Included

### Basic Beep

Uses a push button to turn the buzzer on when pressed and off when released. This introduces digital input and output control and demonstrates how a microcontroller can activate a buzzer based on the state of a physical button.

### Buzzer Toggle

Uses a push button to toggle the buzzer on or off each time the button is pressed. This introduces state tracking and button press detection, demonstrating how a microcontroller can maintain an output state between button presses.

### Multiple Button Piano

Uses multiple buttons, with each button producing a different musical note when pressed. This introduces handling multiple digital inputs and demonstrates how button states can be mapped to different frequencies to create a simple musical instrument.

### Buzzer Frequency Control

Uses buttons to increase or decrease the buzzer's frequency, changing the pitch of the sound. This introduces frequency control and variable-based adjustments, demonstrating how changing the frequency of a signal affects the pitch produced by a buzzer.

### Buzzer Melody

Uses a button to start a programmed sequence of notes that plays a simple melody through the buzzer. This introduces arrays, timing, and sequencing and demonstrates how multiple tones can be combined to create a melody.

## Learning Objectives

By completing these projects, you will gain experience with:

* Controlling buzzers using ESP32 GPIO pins
* Generating different sound frequencies
* Understanding the relationship between frequency and pitch
* Using `tone()`-style buzzer control
* Turning a buzzer on and off
* Using buttons as input controls
* Detecting button presses and releases
* Tracking button states
* Using timing and delays
* Creating sound patterns and rhythms
* Playing sequences of notes
* Using arrays to store musical notes
* Creating reusable buzzer functions
* Handling multiple buttons
* Mapping buttons to different frequencies
* Creating audio feedback for user interactions
* Measuring time intervals
* Applying programming logic to real-time sound generation

These projects provide a solid foundation for understanding how microcontrollers can generate and control sound while responding to user input.
