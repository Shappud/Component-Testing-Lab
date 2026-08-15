int led = 16;                 //LED Pin             
int button = 23;              //Button Pin

int buttonState = HIGH;       //Current State of the Button
int lastButtonState = HIGH;   //remembers what the button's state was during the previous loop
int ledState = LOW;           //stores whether the LED should currently be ON or OFF.

void setup() {

  //Define LED and Button Pins
  pinMode(led, OUTPUT);            
  pinMode(button, INPUT_PULLUP);
}

void loop() {

  //Read button input
  buttonState = digitalRead(button);

 //Detect Button press
  if (buttonState == LOW && lastButtonState == HIGH) {

 //Reverse ledState status
    ledState = !ledState;
  }

  digitalWrite(led, ledState);    //Turn LED on/off
  delay(50); // debounce
  lastButtonState = buttonState;  //Prevent LED from behaving differently
}