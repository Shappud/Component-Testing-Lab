# KY-037 Sound Sensor Projects

This repository contains a collection of beginner-friendly sound sensor projects created to explore and understand the fundamentals of detecting sound and measuring sound intensity using a KY-037 sound sensor with an ESP32.

Each project focuses on a different technique for reading microphone signals, detecting sound events, setting sensitivity thresholds, processing analog readings, and using sound as an input for interactive systems. Together, they provide a structured introduction to sound sensing before moving on to more advanced audio, automation, IoT, and robotics projects.

These examples demonstrate concepts such as analog input, digital sound detection, sensitivity adjustment, threshold detection, signal sampling, averaging, peak detection, and sensor-controlled outputs. They can also serve as reference implementations that can be reused and expanded in future electronics and embedded systems projects.

## Projects Included

### Basic Sound Reading

Reads the analog output of the KY-037 and displays the sensor readings through the Serial Monitor. This introduces analog input and demonstrates how sound vibrations detected by the microphone can produce changing electrical signals.

### Digital Sound Detection

Uses the digital output of the KY-037 to detect when a sound exceeds the module's adjustable sensitivity threshold. This introduces digital sensor input and demonstrates simple sound event detection.

### Sound-Activated LED

Turns an LED on when a sound is detected. This introduces sensor-controlled outputs and demonstrates how sound can be used as a trigger for an electronic device.

### Sound Level Indicator

Uses the analog sound readings to control multiple LEDs according to the detected sound intensity. This introduces multiple thresholds and demonstrates how changing sensor values can be represented visually.

### Sound Counter

Counts detected sound events over time and displays the number of detected events. This introduces event counting, state tracking, and timing-based logic.

## Learning Objectives

By completing these projects, you will gain experience with:

* Understanding how the KY-037 sound sensor works
* Understanding microphone-based sound detection
* Reading analog sensor signals
* Reading digital sensor signals
* Using ESP32 ADC inputs
* Detecting sound events
* Setting sound detection thresholds
* Adjusting sensor sensitivity
* Processing changing analog values
* Comparing sensor readings with thresholds
* Detecting signal peaks
* Detecting sudden changes in sound intensity
* Counting sensor events
* Tracking sensor states
* Using timing with sensor measurements
* Controlling LEDs using sound
* Creating sound level indicators
* Creating simple sound meters
* Processing continuous sensor data
* Creating reusable sound sensor functions
* Applying sound sensing to interactive electronics
* Integrating sound sensors into embedded systems
* Using sensor data as a real-time control input

These projects provide a solid foundation for understanding microphone-based sound sensing and demonstrate how the KY-037 can be used as an input for interactive electronics, automation, IoT, and robotics projects.
