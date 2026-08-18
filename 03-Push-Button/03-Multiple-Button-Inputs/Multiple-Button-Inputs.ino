const int led1 = 18;
const int led2 = 23;
const int button1 = 5;
const int button2 = 22;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {

  int button1Press = digitalRead(button1);
  int button2Press = digitalRead(button2);

  // Both buttons pressed
  if (button1Press == LOW && button2Press == LOW) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

  // Only button 1 pressed
  else if (button1Press == LOW) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }

  // Only button 2 pressed
  else if (button2Press == LOW) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }

  // Neither button pressed
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
