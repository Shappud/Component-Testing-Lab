int LED = 23;
int delayTime = 10;

void setup() {
ledcAttach(23,5000, 8); //Define pwm
}


void loop() {\
// LED fade in 
for (int fade = 0;fade <= 255; fade++ )
{
  ledcWrite(LED, fade);
  delay(delayTime);
}

// LED fade out
for (int fade = 255; fade >= 0; fade--)
{
ledcWrite(LED, fade);
  delay(delayTime);
}
}
