int E = 7;
int D = 5;
int C = 4;
int DP = 6;
int B = 3;
int A = 2;
int F = 8;
int G = 9;
int timer = 1000;

void setup() {
  pinMode (E, OUTPUT);
  pinMode (D, OUTPUT);
  pinMode (C, OUTPUT);
  pinMode (DP, OUTPUT);
  pinMode (B, OUTPUT);
  pinMode (A, OUTPUT);
  pinMode (F, OUTPUT);
  pinMode (G, OUTPUT);
}

void one() {
  digitalWrite (E, LOW);
  digitalWrite (D, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, LOW);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
}

void two() {
  digitalWrite (E, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (C, LOW);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
}

void three() {
  digitalWrite (E, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, HIGH);
}

void four() {
  digitalWrite (E, LOW);
  digitalWrite (D, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, LOW);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
}

void five() {
  digitalWrite (E, LOW);
  digitalWrite (D, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, LOW);
  digitalWrite (A, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
}

void six() {
  digitalWrite (E, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (DP, HIGH);
  digitalWrite (B, LOW);
  digitalWrite (A, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
}

void seven() {
  digitalWrite (E, LOW);
  digitalWrite (D, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, HIGH);
  digitalWrite (F, LOW);
  digitalWrite (G, LOW);
}

void eight() {
  digitalWrite (E, HIGH);
  digitalWrite (D, HIGH);
  digitalWrite (C, HIGH);
  digitalWrite (DP, LOW);
  digitalWrite (B, HIGH);
  digitalWrite (A, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
}

void nine() {
  digitalWrite (E, LOW);
  digitalWrite (D, LOW);
  digitalWrite (C, HIGH);
  digitalWrite (DP, HIGH);
  digitalWrite (B, HIGH);
  digitalWrite (A, HIGH);
  digitalWrite (F, HIGH);
  digitalWrite (G, HIGH);
}

void loop() {
  one();
  delay(timer);

  two();
  delay(timer);

  three();
  delay(timer);

  four();
  delay(timer);

  five();
  delay(timer);

  six();
  delay(timer);

  seven();
  delay(timer);

  eight();
  delay(timer);

  nine();
  delay(timer);
}
