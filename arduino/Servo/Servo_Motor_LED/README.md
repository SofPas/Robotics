# Servo Sweep with Indicator LEDs

**Date:** October 29, 2025
Arduino project in my Robotics class.
We learned how to sweep a servo motor back and forth while using LEDs to signal when the servo reaches the endpoints.

## Theory

A servo motor rotates between 0° and 180°.
By gradually increasing the angle in small steps, we can make the servo sweep smoothly across its full range.

Two LEDs are used as indicators:

One LED turns ON when the servo reaches 180°.

The other LED turns ON when the servo reaches 0°.

## Circuit

-Servo signal pin → Pin 9

-Servo VCC → 5V

-Servo GND → GND

-LED 1 (max position indicator) → Pin 2

-LED 2 (min position indicator) → Pin 3

-Both LEDs have their short legs → GND through a resistor.

## Code

You can find the Arduino sketch here: [servo_motor_led.ino](./servo_motor_led.ino)

## Notes

-The dt value controls movement speed — lower values make the servo move faster.
