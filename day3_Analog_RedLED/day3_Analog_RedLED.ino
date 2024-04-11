int redLight = 11;

int bright = 255;
int lessBright = 180;
int medLight = 110;
int lowish = 60;
int dull = 15;

int timeDelay = 750;

void setup() {
  // put your setup code here, to run once:

  pinMode(redLight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(redLight, bright);
  delay(timeDelay);

  analogWrite(redLight, lessBright);
  delay(timeDelay);

  analogWrite(redLight, medLight);
  delay(timeDelay);

  analogWrite(redLight, lowish);
  delay(timeDelay);

  analogWrite(redLight, dull);
  delay(timeDelay);

}
