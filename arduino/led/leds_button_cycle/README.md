# Multiple LEDs Controlled by One Button

**Date:** October 11, 2025  
Project done in my Robotics class.
We learned how to control several LEDs with a single button, making each press light up a different LED.


## Theory

By storing the state of the button and updating it each time it’s pressed, the Arduino can “remember” which LED to light up next.  
This introduces the concept of a **state variable**, which allows the program to behave differently depending on previous actions — not just the current input.  

Each press of the button increases the state by 1.  
When the number of presses goes beyond 4, it resets to 0, turning all LEDs off.


## Circuit

- **Blue LED:** Pin 11  
- **Green LED:** Pin 10  
- **Yellow LED:** Pin 9  
- **Red LED:** Pin 8  
- **Button:** Pin 2  

Each LED’s **long leg (anode)** connects to its pin through a **220Ω resistor**, and the **short leg (cathode)** connects to **GND**.  
The button is connected so that one side goes to **5V** and the other to **GND** through a **resistor**, with a wire from **Pin 2** connected to the same side as the resistor.  


## Code

You can find the Arduino sketch here: [multi_led_button.ino](./multi_led_button.ino)


## Code Explanation

- Each LED pin is declared and set as an **OUTPUT**, initially turned off.  
- The button pin is set as an **INPUT**.  
- Two variables, `oldSwitchState` and `newSwitchState`, are used to detect when the button is *pressed once* (not held).  
- The variable `state` keeps track of which LED should be on.  

When the button is pressed:  
1. The program checks if the button’s state has changed from LOW to HIGH.  
2. If yes, it increases `state` by 1.  
3. If `state` becomes greater than 4, it resets to 0 (turning all LEDs off).  
4. Depending on the value of `state`, only one LED is turned on:
   - 1 → Blue  
   - 2 → Green  
   - 3 → Yellow  
   - 4 → Red  

This way, each press moves to the next LED, and the fifth press turns all off again.
