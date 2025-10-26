# Light Sensor with Buzzer

**Date:** October 25, 2025  
Arduino project in my Robotics class.  
We learned how to use a light sensor (photoresistor) to activate a buzzer when it gets dark.


## Theory

A **photoresistor (LDR)** changes its resistance depending on the amount of light it receives:  
- In **bright light**, resistance decreases, and the sensor value is **high**.  
- In **darkness**, resistance increases, and the sensor value is **low**.  

By measuring the light level using the Arduino’s analog pin, we can make the buzzer turn on when it gets too dark.


## Circuit

- **LDR signal pin** → `A0`  
- **LDR VCC** → `5V`  
- **LDR GND** → `GND`  
- **Buzzer positive pin** → `Pin 2`  
- **Buzzer negative pin** → `GND`  

When the light level drops and the sensor value becomes **less than 40**, the Arduino turns the buzzer **ON**. Otherwise, it stays **OFF**.  


## Code

You can find the Arduino sketch here: [light_sensor_buzzer.ino](./light_sensor_buzzer.ino)


## Code Explanation

- `sensorPin` (`A0`) reads the analog signal from the photoresistor.  
- `buzzPin` (`2`) controls the buzzer.  
- In `setup()`, the buzzer pin is set as **OUTPUT**, and the **Serial Monitor** starts showing sensor values.  
- In `loop()`:  
  1. The Arduino reads the light intensity.  
  2. Prints the value to the Serial Monitor.  
  3. If the light level is below `40`, it turns on the buzzer. Otherwise, it turns it off.  


## Notes

- The threshold value (`40`) can be adjusted depending on your sensor and lighting conditions.
