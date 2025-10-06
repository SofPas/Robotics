int timer = 500;

void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
}

void loop() {
  digitalWrite (2, HIGH);
  delay (timer);
  digitalWrite (2, LOW);
  delay (timer);

  digitalWrite (3, HIGH);
  delay (timer);
  digitalWrite (3, LOW);
  delay (timer);

  digitalWrite (4, HIGH);
  delay (timer);
  digitalWrite (4, LOW);
  delay (timer);

  digitalWrite (5, HIGH);
  delay (timer);
  digitalWrite (5, LOW);
  delay (timer);

  digitalWrite (6, HIGH);
  delay (timer);
  digitalWrite (6, LOW);
  delay (timer);

  digitalWrite (5, HIGH);
  delay (timer);
  digitalWrite (5, LOW);
  delay (timer);

  digitalWrite (4, HIGH);
  delay (timer);
  digitalWrite (4, LOW);
  delay (timer);

  digitalWrite (3, HIGH);
  delay (timer);
  digitalWrite (3, LOW);
  delay (timer);
}
