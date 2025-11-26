#include <Servo.h>

int servoPin = 9;
int servoPos = 0;

Servo myMotor;

void setup() {
  Serial.begin(9600);
  myMotor.attach (servoPin);
}

void loop() {

  Serial.println ("Give the angle of rotation of Servo");
  
  while (Serial.available() ==0) {}
  myMotor.write (servoPos);

  Serial.print ("servo position = ");
  Serial.println (servoPos);

  servoPos = Serial.parseInt();
}
