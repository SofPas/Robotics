# 5 Blinking LEDs

**Date:** October 4, 2025  
Second Arduino project in my Robotics class.  
We learned how to control multiple LEDs in sequence using Arduino.


## Theory

Each LED lights up when current passes through it.  
By connecting several LEDs to different digital pins, we can make them blink one after another.  
A resistor is used to protect each LED from too much current.


## Circuit

- LED 1 → Pin 2  
- LED 2 → Pin 3  
- LED 3 → Pin 4  
- LED 4 → Pin 5  
- LED 5 → Pin 6  

Each LED’s **long leg (anode)** connects to its Arduino pin.  
All **short legs (cathodes)** are connected together on the **GND rail** of the breadboard.  
Then one wire goes from that rail to the **GND** pin on the Arduino.  
Each LED should have a **220Ω resistor** in series.


## Code

You can find the Arduino sketch here: [five_leds.ino](./five_leds.ino)


## Code Explanation

The variable `timer` sets how long each LED stays on or off.  
In the `setup()` function, pins 2–6 are set as outputs so the Arduino can send voltage to the LEDs.  
In the `loop()`, each LED is turned on and off one after another, with a short pause between them.  
After the last LED lights up, the sequence goes backwards, creating a back-and-forth “running light” effect.  


## Notes

- Change the value of `timer` to make the lights faster or slower.  
- Always use resistors to protect the LEDs.  
- All LEDs share a **common ground** connection.
