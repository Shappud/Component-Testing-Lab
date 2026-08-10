int R = 5;
int G = 19;
int B = 21;
int delayTime = 1000;

void setup() {
  ledcAttach(R, 5000, 8);
  ledcAttach(G, 5000, 8);
  ledcAttach(B, 5000, 8);

}

void loop() {
  ledcWrite(R, 0);
  ledcWrite(G, 0);
  ledcWrite(B, 255);

  delay(delayTime);

  ledcWrite(R, 0);
  ledcWrite(G, 255);
  ledcWrite(B, 0);

  delay(delayTime);

  ledcWrite(R, 255);
  ledcWrite(G, 0);
  ledcWrite(B, 0);

  delay(delayTime);

  ledcWrite(R, 255);
  ledcWrite(G, 255);
  ledcWrite(B, 0);

  delay(delayTime);

  ledcWrite(R, 0);
  ledcWrite(G, 255);
  ledcWrite(B, 255);

  delay(delayTime);
  

}
