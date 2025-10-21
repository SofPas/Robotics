int pin_LEDblue = 11;
int pin_LEDgreen = 10;
int pin_LEDyellow = 9;
int pin_LEDred = 8;
int pin_switch = 2;

bool oldSwitchState = LOW;
bool newSwitchState = LOW;
byte state = 0;

void setup () {
  Serial.begin (9600);

  pinMode (pin_LEDblue, OUTPUT);
  digitalWrite (pin_LEDblue, LOW);

  pinMode (pin_LEDgreen, OUTPUT);
  digitalWrite (pin_LEDgreen, LOW);

  pinMode (pin_LEDyellow, OUTPUT);
  digitalWrite (pin_LEDyellow, LOW);

  pinMode (pin_LEDred, OUTPUT);
  digitalWrite (pin_LEDred, LOW);

  pinMode (pin_switch, INPUT);
}

void loop () {
  newSwitchState = digitalRead (pin_switch);
  if (newSwitchState != oldSwitchState)
  {
    if (newSwitchState == HIGH)
    {
      state++;
      if (state > 4) {
        state = 0;
      }
      digitalWrite (pin_LEDblue, LOW);
      digitalWrite (pin_LEDgreen, LOW);
      digitalWrite (pin_LEDyellow, LOW);
      digitalWrite (pin_LEDred, LOW);

      if (state == 1) {
        digitalWrite (pin_LEDblue, HIGH);
      }
      if (state == 2) {
        digitalWrite (pin_LEDgreen, HIGH);
      }      
      if (state == 3) {
        digitalWrite (pin_LEDyellow, HIGH);
      }
      if (state == 4) {
        digitalWrite (pin_LEDred, HIGH);
      }
    }
    oldSwitchState = newSwitchState;
  }
