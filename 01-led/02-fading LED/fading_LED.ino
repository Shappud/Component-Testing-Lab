int LED = 23;
int delayTime = 10;

void setup() {
  ledcAttach(23, 5000, 8); // Set GPIO 23 to PWM
}

void loop() {
  // Fade the LED from off to full brightness
  for (int fade = 0; fade <= 255; fade++) {
    ledcWrite(LED, fade); // Increase brightness
    delay(delayTime); // Wait before next step
  }

  // Fade the LED from full brightness to off
  for (int fade = 255; fade >= 0; fade--) {
    ledcWrite(LED, fade); // Decrease brightness
    delay(delayTime); // Wait before next step
  }
}
