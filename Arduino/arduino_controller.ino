const int controlPin = 5;

void setup() {
  Serial.begin(115200);
  pinMode(controlPin, OUTPUT);
  digitalWrite(controlPin, LOW);
}

void loop() {

  if (Serial.available()) {

    char cmd = Serial.read();   // Leemos un solo carácter

    if (cmd == 'A') {
      digitalWrite(controlPin, HIGH);
      Serial.println("OK A");
    }
    else if (cmd == 'B') {
      digitalWrite(controlPin, LOW);
      Serial.println("OK B");
    }
    else {
      Serial.println("ERR");
    }
  }
}