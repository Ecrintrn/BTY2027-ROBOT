int pins[6] = {7, 6, 5, 4, 3, 2};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(pins[i], HIGH);
  }
  for (int i = 3; i < 6; i++) {
    digitalWrite(pins[i], LOW);
  }
  
  delay(1000);

  for (int i = 0; i < 3; i++) {
    digitalWrite(pins[i], LOW);
  }
  for (int i = 3; i < 6; i++) {
    digitalWrite(pins[i], HIGH);
  }
  
  delay(1000);
}