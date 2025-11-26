int sensorPin = A0;
int buzzPin = 2;
int LED_pin = 10;
int sensorValue = 0;

void setup() {
  pinMode (buzzPin, OUTPUT);
  Serial.begin (9600);
  pinMode (LED_pin, OUTPUT);
  digitalWrite (LED_pin, LOW);
}

void loop() {
  sensorValue = analogRead (sensorPin);
  Serial.println (sensorValue);
  delay (400);
  if (sensorValue < 50) {
    digitalWriten (LED_pin, HIGH);
    delay (400);
    digitalWrite (LED_pin, LOW);
    delay (400);
    digitalWrite (buzzPin, 1000);
    delay (100)
    digitalWrite (buzzPin, LOW);
    delay (100);
  }
  else {
    digitalWrite (buzzPin, LOW);
  }
}
