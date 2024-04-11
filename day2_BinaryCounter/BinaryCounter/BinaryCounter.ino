int light1 = 5;
int light2 = 4;
int light3 = 3;
int light4 = 2;

int delayTime = 500;

void setup() {
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  pinMode(light4, OUTPUT);

}

void loop() {

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  delay(delayTime);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, LOW);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, HIGH);
  delay(delayTime);
 
  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  delay(delayTime);


  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, LOW);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, HIGH);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, LOW);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, HIGH);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, LOW);
  digitalWrite(light4, HIGH);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, LOW);
  delay(delayTime);

  digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, HIGH);
  delay(delayTime);

}
