# LED with Button

**Date:** October 11, 2025  
Third Arduino project in my Robotics class.  
We learned how to turn an LED on and off using a button.


## Theory

A **button** acts as a simple switch that connects or disconnects parts of a circuit.  
When pressed, it sends a **HIGH** signal to the Arduino, which turns the LED on.  
When released, the signal becomes **LOW**, and the LED turns off.  

Our teacher explained that the button can also be connected **in the opposite way** —  
with the left side connected to **5V** and the right side to **GND**.  
In that case, the circuit still works, but it behaves **in reverse**:  
the LED would be **on when the button is not pressed**, and **off when it is pressed**.


## Circuit

- The **5V pin** connects to the **positive rail** of the breadboard.  
- The **GND pin** connects to the **negative rail**.  
- The **LED** is connected:  
  - Short leg (cathode) → **5V line** through a **resistor**  
  - Long leg (anode) → **Pin 10**
- The **button** is connected:  
  - Bottom left pin → **GND line**  
  - Bottom right pin → **5V line** through a **resistor**  
  - Top right pin → **Pin 2**

When the button is pressed, 5V reaches Pin 2, and the Arduino turns the LED on.  
When it’s released, Pin 2 reads LOW, and the LED turns off.


## Code

You can find the Arduino sketch here: [button_led.ino](./button_led.ino)


## Code Explanation

- `LED_PIN` (10) controls the LED.  
- `BUTTON_PIN` (2) reads the state of the button.  
- In `setup()`, the LED pin is set as **OUTPUT**, and the button pin as **INPUT**.  
- In `loop()`, the Arduino checks the button’s state using `digitalRead()`:  
  - If the button is pressed (**HIGH**), the LED turns on.  
  - If the button is released (**LOW**), the LED turns off.

This makes the LED light up only while the button is pressed.


## Notes

- The LED is wired with its **short leg to 5V** instead of GND, which is reversed from the usual setup — but it works correctly in this configuration.  
