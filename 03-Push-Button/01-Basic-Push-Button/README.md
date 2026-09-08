# 01 - Basic Push Button

## Objective

Create a simple ESP32 program that detects button presses and controls an LED.

## Components Used

- ESP32
- LED
- 220 Ω resistor
- Push button
- Breadboard
- Jumper wires

## Concepts

- GPIO Output
- HIGH and LOW states
- pinMode()
- INPUT_PULLUP
- digitalWrite()
- if/else statements
- variables

## Wiring

- LED Anode → GPIO 16 
- LED Cathode → GND (through a 220 Ω resistor)
- Push button pin 1 → GPIO23
- Push button pin 2 → GND

## Expected Result

The LED turns on when the push button is pressed and turns off when the button is released.

## What I Learned

- What Input pullups are and how to use them
- How to properly if/else statements

## Resources

- ESP32 Documentation
- Arduino Documentation
