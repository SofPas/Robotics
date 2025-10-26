from machine import Pin
from time import sleep

timer = 1

E = Pin(7, Pin.OUT)
D = Pin(5, Pin.OUT)
C = Pin(4, Pin.OUT)
DP = Pin(6, Pin.OUT)
B = Pin(3, Pin.OUT)
A = Pin(2, Pin.OUT)
F = Pin(8, Pin.OUT)
G = Pin(9, Pin.OUT)

def one():
    E.value(0)
    D.value(0)
    C.value(1)
    DP.value(0)
    B.value(1)
    A.value(0)
    F.value(0)
    G.value(0)

def two():
    E.value(1)
    D.value(1)
    C.value(0)
    DP.value(0)
    B.value(1)
    A.value(1)
    F.value(0)
    G.value(1)

def three():
    E.value(0)
    D.value(1)
    C.value(1)
    DP.value(0)
    B.value(1)
    A.value(1)
    F.value(0)
    G.value(1)

def four():
    E.value(0)
    D.value(0)
    C.value(1)
    DP.value(0)
    B.value(1)
    A.value(0)
    F.value(1)
    G.value(1)

def five():
    E.value(0)
    D.value(1)
    C.value(1)
    DP.value(0)
    B.value(0)
    A.value(1)
    F.value(1)
    G.value(1)

def six():
    E.value(1)
    D.value(1)
    C.value(1)
    DP.value(1)
    B.value(0)
    A.value(1)
    F.value(1)
    G.value(1)

def seven():
    E.value(0)
    D.value(0)
    C.value(1)
    DP.value(0)
    B.value(1)
    A.value(1)
    F.value(0)
    G.value(0)

def eight():
    E.value(1)
    D.value(1)
    C.value(1)
    DP.value(0)
    B.value(1)
    A.value(1)
    F.value(1)
    G.value(1)

def nine():
    E.value(0)
    D.value(0)
    C.value(1)
    DP.value(1)
    B.value(1)
    A.value(1)
    F.value(1)
    G.value(1)

def main():
    one()
    sleep(timer)

    two()
    sleep(timer)

    three()
    sleep(timer)

    four()
    sleep(timer)

    five()
    sleep(timer)

    six()
    sleep(timer)

    seven()
    sleep(timer)

    eight()
    sleep(timer)

    nine()
    sleep(timer)

while True:
    main()

    sleep(0.01)
