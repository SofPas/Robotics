from machine import Pin
from time import sleep

LED_PIN = Pin (10, Pin.OUT)
BUTTON_PIN = Pin (2, Pin.IN)

while True:
    if BUTTON_PIN.value() == 1:
        LED_PIN.value(1)
    
    else:
        LED_PIN.value(0)
