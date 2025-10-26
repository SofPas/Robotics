from machine import Pin
from time import sleep

pin_LEDblue = Pin(11, Pin.OUT)
pin_LEDgreen = Pin(10, Pin.OUT)
pin_LEDyellow = Pin(9, Pin.OUT)
pin_LEDred = Pin(8, Pin.OUT)
pin_switch = Pin(2, Pin.IN)

oldSwitchState = 0
newSwitchState = 0
state = 0

pin_LEDblue.value(0)
pin_LEDgreen.value(0)
pin_LEDyellow.value(0)
pin_LEDred.value(0)

while True:
    newSwitchState = pin_switch.value()
    if newSwitchState != oldSwitchState:
        if newSwitchState == 1:
            state += 1
            if state > 4:
                state = 0
            pin_LEDblue.value(0)
            pin_LEDgreen.value(0)
            pin_LEDyellow.value(0)
            pin_LEDred.value(0)

            if state == 1:
                pin_LEDblue.value(1)

            if state == 2:
                pin_LEDgreen.value(1)
            if state == 3:
                pin_LEDyellow.value(1)
            if state == 4:
                pin_LEDred.value(1)
        
    oldSwitchState = newSwitchState

    sleep(0.01)
