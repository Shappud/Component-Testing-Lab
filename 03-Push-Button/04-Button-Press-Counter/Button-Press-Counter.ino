const int LED = 21;
const int button = 18;
int  pressCounter = 0;
int buttonreleased = LOW;

void setup() {
pinMode(button, INPUT_PULLUP);
pinMode(LED, OUTPUT);
Serial.begin(9600);
Serial.println(pressCounter);
}

void loop() {
  int buttonpress = digitalRead(button);

  if (buttonpress == 0 && buttonreleased == LOW)  //Detect button press
  {
    pressCounter++;
    Serial.println(pressCounter);
    buttonreleased = HIGH;
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
  }
 if (buttonpress == 1)
 {
  buttonreleased = LOW;
  delay(50);
 }
}
