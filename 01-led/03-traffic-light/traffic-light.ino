// variables
int redLED = 22;
int greenLED = 23;
int blinkDelay = 1000;
int delayON = 3000;

void setup() {
// define led pins
pinMode(greenLED, OUTPUT); 
pinMode(redLED, OUTPUT);

}

void loop() {
  
// Green LED stays on for 3 seconds
digitalWrite(greenLED, HIGH);
delay(delayON);
digitalWrite(greenLED, LOW);


 for(int green = 1; green <=4; green++) // Green LED flashes 3 times
 {
  digitalWrite(greenLED, green);
  delay(blinkDelay);
  digitalWrite(greenLED, LOW);  // Green LED stays off
  delay(blinkDelay);
 }

// Red LED stays on for 3 seconds
digitalWrite(redLED, HIGH);
delay(delayON);
digitalWrite(redLED, LOW);

for(int red =1; red <=4; red++) // Red LED flashes for 3 times
{
  digitalWrite(redLED, red);
  delay(blinkDelay);
  digitalWrite(redLED, LOW); // Red LED stays off
  delay(blinkDelay);
}  

}
