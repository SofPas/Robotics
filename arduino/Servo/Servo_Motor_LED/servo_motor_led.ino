#include <Servo.h>

int servoPin = 9;
int dt = 30;

Servo myMotor;

void setup() {
  
  Serial.begin(9600);
  myMotor.attach (servoPin);

  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
}

void loop() {

  for (int i=0; i<=180; i++) {
   
    myMotor.write (i);
    delay(dt);

    if (i==180) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      delay (500);
    }

    else {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }

    Serial.print ("Servo Position = ");
    Serial.println (i);
  }

  for (int i=180; i>0; i--) {
    
    myMotor.write (i);
    delay(dt);

    if (i==1) {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay (500);
    }

    else {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }

    Serial.print ("Servo Position = ");
    Serial.println (i);
  }
}
