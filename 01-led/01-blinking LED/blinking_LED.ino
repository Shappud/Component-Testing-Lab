// Variables
int ledPin = 23;
int delayTime = 1000;

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  digitalWrite(ledPin, HIGH); // LED on
  delay(delayTime);          
  digitalWrite(ledPin, LOW);  // LED off
  delay(delayTime);          
}
