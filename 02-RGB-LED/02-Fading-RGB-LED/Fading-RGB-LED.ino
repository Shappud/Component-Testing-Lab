int ledPins[] = {5, 19, 21}; // R, G, B
int delayTime = 10;

void setup() {
  for (int i = 0; i < 3; i++) {
    ledcAttach(ledPins[i], 5000, 8);
  }
}

void loop() {

  // RED → YELLOW
  for (int i = 0; i <= 255; i++) {
    ledcWrite(ledPins[0], 255);
    ledcWrite(ledPins[1], i);
    ledcWrite(ledPins[2], 0);
    delay(delayTime);
  }

  // YELLOW → GREEN
  for (int i = 255; i >= 0; i--) {
    ledcWrite(ledPins[0], i);
    ledcWrite(ledPins[1], 255);
    ledcWrite(ledPins[2], 0);
    delay(delayTime);
  }

  // GREEN → CYAN
  for (int i = 0; i <= 255; i++) {
    ledcWrite(ledPins[0], 0);
    ledcWrite(ledPins[1], 255);
    ledcWrite(ledPins[2], i);
    delay(delayTime);
  }

  // CYAN → BLUE
  for (int i = 255; i >= 0; i--) {
    ledcWrite(ledPins[0], 0);
    ledcWrite(ledPins[1], i);
    ledcWrite(ledPins[2], 255);
    delay(delayTime);
  }

  // BLUE → MAGENTA
  for (int i = 0; i <= 255; i++) {
    ledcWrite(ledPins[0], i);
    ledcWrite(ledPins[1], 0);
    ledcWrite(ledPins[2], 255);
    delay(delayTime);
  }

  // MAGENTA → RED
  for (int i = 255; i >= 0; i--) {
    ledcWrite(ledPins[0], 255);
    ledcWrite(ledPins[1], 0);
    ledcWrite(ledPins[2], i);
    delay(delayTime);
  }
}