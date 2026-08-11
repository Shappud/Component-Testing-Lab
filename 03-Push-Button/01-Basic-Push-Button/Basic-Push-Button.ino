const int led = 16;                      //LED pin variable
const int button = 23;                   //Button pin variable

void setup() {
  Serial.begin(9600);                    //Begin Serial
  pinMode(led, OUTPUT);                  //LED pin mode
  pinMode(button, INPUT_PULLUP);         //Button pin mode
}

void loop() {
  int buttonpress = digitalRead(button); //Read button state
  if (buttonpress == 0)                  //if buttonpress = 0 (button is pressed) do the following:
  {
    digitalWrite(led, HIGH);             //LED turn ON 
  }
  digitalWrite(led, LOW);                //LED turn OFF

}
