int redLED = 22;
int greenLED = 23;
int blinkDelay = 1000;
int delayON = 3000;

void setup() {
pinMode(23, OUTPUT);
pinMode(22, OUTPUT);

}

void loop() {
  
digitalWrite(greenLED, HIGH);
delay(delayON);
digitalWrite(greenLED, LOW);


 for(int green = 1; green <=4; green++)
 {
  digitalWrite(greenLED, green);
  delay(blinkDelay);
  digitalWrite(greenLED, LOW);
  delay(blinkDelay);
 }

digitalWrite(redLED, HIGH);
delay(delayON);
digitalWrite(redLED, LOW);

for(int red =1; red <=4; red++)
{
  digitalWrite(redLED, red);
  delay(blinkDelay);
  digitalWrite(redLED, LOW);
  delay(blinkDelay);
}  
digitalWrite(redLED, LOW);
}
