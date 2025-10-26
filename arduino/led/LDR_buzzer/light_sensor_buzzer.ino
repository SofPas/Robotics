int sensorPin = A0;
int buzzPin = 2;
int sensorValue = 0;

void setup() {
  pinMode (buzzPin, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  sensorValue = analogRead (sensorPin);
  Serial.println (sensorValue);
  delay (500);
  if (sensorValue < 40) {
    digitalWrite (buzzPin, HIGH);
  }
  else {
    digitalWrite (buzzPin, LOW);
  }
}
