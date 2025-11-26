# Serial-Controlled Servo Motor

**Date:** November 1, 2025
Arduino project in my Robotics class.
We learned how to control a servo motor using the Serial Monitor by typing an angle.

## Theory

A servo motor can rotate between 0° and 180°, depending on the signal it receives.
By sending a value from the Serial Monitor, the Arduino reads that value and moves the servo to the chosen angle using the Servo library.

## Circuit

-Servo signal pin → Pin 9

-Servo VCC → 5V

-Servo GND → GND

## Code

You can find the Arduino sketch here: [serial_servo_control.ino](./serial_servo_control.ino)

## Notes

Valid input: any angle from 0 to 180.
The servo moves after pressing Enter in the Serial Monitor.
