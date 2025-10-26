from machine import Pin, ADC
from time import sleep

sensorPin = ADC(0)
buzzPin = Pin(2, Pin.OUT)

def main():
    sensorValue = sensorPin.read()
    if sensorValue < 40:
        buzzPin.value(1)
    
    else:
        buzzPin.value(0)

while True:
    main()

    sleep(0.01)
