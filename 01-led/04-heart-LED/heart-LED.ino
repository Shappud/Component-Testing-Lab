const int led1 = 2;

const int led2L = 4;
const int led2R = 5;

const int led3L = 18;
const int led3R = 19;

const int led4L = 21;
const int led4R = 22;

const int led5 = 23;

const int stepDelay = 150;
const int holdDelay = 350;
const int flashDelay = 200;

void setup() {

  pinMode(led1, OUTPUT);

  pinMode(led2L, OUTPUT);
  pinMode(led2R, OUTPUT);

  pinMode(led3L, OUTPUT);
  pinMode(led3R, OUTPUT);

  pinMode(led4L, OUTPUT);
  pinMode(led4R, OUTPUT);

  pinMode(led5, OUTPUT);

  allOff();

  
}

void loop() {

  for (int i = 0; i < 3; i++) {
    pattern1();
  }

  allOff();
  delay(50);

  for (int i = 0; i < 3; i++) {
    pattern2();
  }

  allOff();
  delay(50);

  
}

void pattern1() {

  allOff();

  digitalWrite(led1, HIGH);
  delay(stepDelay);

  digitalWrite(led2L, HIGH);
  digitalWrite(led2R, HIGH);
  delay(stepDelay);

  digitalWrite(led3L, HIGH);
  digitalWrite(led3R, HIGH);
  delay(stepDelay);

  digitalWrite(led4L, HIGH);
  digitalWrite(led4R, HIGH);
  delay(stepDelay);

  digitalWrite(led5, HIGH);
  delay(holdDelay);

  digitalWrite(led5, LOW);
  delay(stepDelay);

  digitalWrite(led4L, LOW);
  digitalWrite(led4R, LOW);
  delay(stepDelay);

  digitalWrite(led3L, LOW);
  digitalWrite(led3R, LOW);
  delay(stepDelay);

  digitalWrite(led2L, LOW);
  digitalWrite(led2R, LOW);
  delay(stepDelay);

  digitalWrite(led1, LOW);
  delay(stepDelay);
}

void pattern2() {

  allOff();

  digitalWrite(led2L, HIGH);
  delay(120);

  digitalWrite(led3L, HIGH);
  delay(120);

  digitalWrite(led4L, HIGH);
  delay(120);

  digitalWrite(led5, HIGH);
  delay(120);

  digitalWrite(led4R, HIGH);
  delay(120);

  digitalWrite(led3R, HIGH);
  delay(120);

  digitalWrite(led2R, HIGH);
  delay(120);

  digitalWrite(led1, HIGH);
  delay(350);

  digitalWrite(led2L, LOW);
  delay(120);

  digitalWrite(led3L, LOW);
  delay(120);

  digitalWrite(led4L, LOW);
  delay(120);

  digitalWrite(led5, LOW);
  delay(120);

  digitalWrite(led4R, LOW);
  delay(120);

  digitalWrite(led3R, LOW);
  delay(120);

  digitalWrite(led2R, LOW);
  delay(120);

  digitalWrite(led1, LOW);
  delay(300);
}



void allOff() {

  digitalWrite(led1, LOW);

  digitalWrite(led2L, LOW);
  digitalWrite(led2R, LOW);

  digitalWrite(led3L, LOW);
  digitalWrite(led3R, LOW);

  digitalWrite(led4L, LOW);
  digitalWrite(led4R, LOW);

  digitalWrite(led5, LOW);
}