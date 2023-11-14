# SR04ParkingSensorImplementation

## Arduino-Based Parking Sensor with Ultrasonic Ranging and Audible Distance Indication

This project utilizes an Arduino microcontroller, an HC-SR04 ultrasonic sensor, and a passive buzzer to create a parking sensor-like device that measures distance and provides audible feedback based on the measured distance.

## Components
---
- Arduino Uno Microcontroller Board
- HC-SR04 Ultrasonic Sensor
- Passive buzzer
- Mini breadboard

## Wiring Diagram
---
- WIP

## Implementation
---
- Arduino will read distance via Ultrasonic Sensor at 10 times per second. Based on the reading there are 4 states in which the device may be in.
- State 1: No object detected / Distance is above 50 cm away. No signal will be sent to the passive buzzer.
- State 2: Distance detected is below 50 cm but above 25 cm. The Arduino will signal the buzzer to beep a low note slowly.
- State 3: Distance detected is below 25 cm but above 10 cm. The Arduino will signal the buzzer to beep a medium note at a moderate pace.
- State 4: Distance detected is below 10 cm. The Arduino will signal the buzzer to beep a high note quickly.

## Extra
---
- WIP
