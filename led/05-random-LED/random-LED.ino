int ledPins[] = {18, 19, 21, 22, 23}; // led pins

void setup() 
{
  for (int i = 0; i <= 5; i++)
  ledcAttach(ledPins[i], 5000, 8);
}

void loop() {
  int led = random(5); // pick random led
  for(int fade = 0; fade <= 255; fade++)
  {
     ledcWrite(ledPins[led], fade) ;
  }
  delay(500);
 for(int fade = 255; fade >= 0; fade--)
  {
     ledcWrite(ledPins[led], fade) ;
  }
delay(500);
}
