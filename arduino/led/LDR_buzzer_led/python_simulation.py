from machine import Pin, ADC
from time import sleep

sensorPin = ADC(0)
buzzPin = Pin(2, Pin.OUT)
LED_pin = Pin(10, Pin.OUT)

def main():
    sensorValue = sensorPin.read()
    if sensorValue < 40:
        LED_pin.value(1)
        sleep(0.4)
        LED_pin.value(0)
        sleep(0.4)
        buzzPin.value(1)
        sleep(0.1)
        buzzPin.value(0)
        sleep(0.1)

    else:
        LED_pin.value(0)
        buzzPin.value(0)

while True:
    main()

    sleep(0.01)
