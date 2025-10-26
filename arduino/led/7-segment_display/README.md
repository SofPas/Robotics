# 7-Segment Display Numbers

**Date:** October 25, 2025  
Arduino project in my Robotics class.  
We learned how to control a 7-segment display to show numbers from 1 to 9.


## Theory

A **7-segment display** has 7 LEDs (segments) arranged in the shape of an “8”.  
By turning on and off specific segments, we can display numbers from 0 to 9.  
- Each segment is controlled by a separate Arduino pin.  
- The decimal point (DP) is optional and can also be controlled by a pin.  


## Circuit

- **Segments connected to Arduino pins:**  
  - A → Pin 2  
  - B → Pin 3  
  - C → Pin 4  
  - D → Pin 5  
  - E → Pin 7  
  - F → Pin 8  
  - G → Pin 9  
  - DP → Pin 6 (optional)  

- **Single 220Ω resistor** connects the **5V rail** to the display’s positive side.  
- The negative side of the display connects to **GND**.  
- Each segment lights up according to the pin’s HIGH/LOW state.  


## Code

You can find the Arduino sketch here: [seven_segment.ino](./seven_segment.ino)


## Code Explanation

- Each number from 1 to 9 has its own function (`one()`, `two()`, … `nine()`).  
- Inside each function, the program sets each segment **HIGH** or **LOW** to form the desired number.  
- In `setup()`, all segment pins are set as **OUTPUT**.  
- In `loop()`, each number function is called in order, with a **1-second delay** between numbers.  

This makes the 7-segment display count from 1 to 9 repeatedly.


## Notes

- You can change the `delay()` value to make the counting faster or slower.  
- If your display is common anode, you may need to invert **HIGH** and **LOW** for each segment.  
