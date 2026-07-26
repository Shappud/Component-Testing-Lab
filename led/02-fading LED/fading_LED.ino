void setup() {
ledcAttach(23,5000, 8); 
}

// fade in 
void loop() {
for (int fade = 0;fade <= 255; fade++ )
{
  ledcWrite(23, fade);
  delay(10);
}

//fade out
for (int fade = 255; fade >= 0; fade--)
{
ledcWrite(23, fade);
  delay(10);
}
}
