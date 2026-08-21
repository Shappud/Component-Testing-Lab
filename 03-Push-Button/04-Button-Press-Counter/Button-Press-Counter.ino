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
    pressCounter++;                               //Increment pressCounter by 1
    Serial.println(pressCounter);                 //Display pressCounter to Serial Monitor
    buttonreleased = HIGH;                        //Prevent repeated increments when the button is held down
    digitalWrite(LED, HIGH);                      //Light up LED
    delay(100);                                   //For 100ms
    digitalWrite(LED, LOW);                       //Turn off LED
  }
 if (buttonpress == 1)
 {
  buttonreleased = LOW;                           //Prepare for next button press
  delay(50);                                      //Debounce
 }
}
