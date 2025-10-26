from machine import Pin
from time import sleep

timer = 0.5

led1 = Pin (2, Pin.OUT)
led2 = Pin (3, Pin.OUT)
led3 = Pin (4, Pin.OUT)
led4 = Pin (5, Pin.OUT)
led5 = Pin (6, Pin.OUT)

while True:
    led1.value (1)
    sleep (timer)
    led1.value (0)
    sleep (timer)

    led2.value (1)
    sleep (timer)
    led2.value (0)
    sleep (timer)

    led3.value (1)
    sleep (timer)
    led3.value (0)
    sleep (timer)

    led4.value (1)
    sleep (timer)
    led4.value (0)
    sleep (timer)

    led5.value (1)
    sleep (timer)
    led5.value (0)
    sleep (timer)

    led4.value (1)
    sleep (timer)
    led4.value (0)
    sleep (timer)

    led3.value (1)
    sleep (timer)
    led3.value (0)
    sleep (timer)

    led2.value (1)
    sleep (timer)
    led2.value (0)
    sleep (timer)
