# Basic LED Blink
First Arduino project in my Robotics class: learning to blink an LED.


## Theory
An LED lights up when current passes through it.  
We use a resistor to limit the current and protect the LED.


## Circuit
- Long leg (anode) → digital pin 13  
- Short leg (cathode) → GND through a 220Ω resistor


## Code
You can find the Arduino sketch here:


## Code Explanation

### `setup()`
This function runs **once** when the Arduino starts.  
- `pinMode(13, OUTPUT);` sets pin 13 as an output so it can send voltage to the LED.

### `loop()`
This function runs **forever**, repeating the instructions inside.  
- `digitalWrite(13, HIGH);` turns the LED on.  
- `delay(500);` waits 0.5 second (500 ms).
- `digitalWrite(13, LOW);` turns the LED off.  
- `delay(500);` waits 0.5 second again.  

Together, this makes the LED blink on and off every 0.5 second.
