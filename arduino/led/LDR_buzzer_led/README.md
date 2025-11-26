# Light Sensor with LED Blink and Buzzer Alarm

**Date:** October 25, 2025
Arduino project in my Robotics class.
We learned how to react to the environment using a light sensor (LDR), an LED, and a buzzer.

## Theory

A photoresistor (LDR) changes its resistance based on light:

More light → lower resistance → higher analog value

Less light → higher resistance → lower analog value

By reading the sensor with analogRead(), the Arduino can detect when it's too dark and trigger signals.

In this project:

The LED blinks when it becomes dark.

The buzzer beeps as an alarm.

## Circuit

-LDR signal pin → A0

-One side of LDR → 5V

-Other side of LDR → GND through a resistor (voltage divider)

-LED positive leg → Pin 10

-LED negative leg → GND (through a resistor)

-Buzzer positive pin → Pin 2

-Buzzer negative pin → GND

## Code

You can find the Arduino sketch here:[light_sensor_alarm.ino](./light_sensor_alarm.ino)

## Notes

-The threshold value (50) depends on the resistor and lighting conditions — you may need to adjust it.
