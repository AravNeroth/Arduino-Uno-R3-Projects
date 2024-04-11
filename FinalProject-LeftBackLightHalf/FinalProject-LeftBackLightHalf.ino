// LCD template
#include <LiquidCrystal.h>
int rs = 6;
int en = 7;
int d4 = 8;
int d5 = 9;
int d6 = 10;
int d7 = 11;
LiquidCrystal lcd(rs, en, d4, d5,d6, d7);

// Ultrasonic 1 (left)
int trigPin1 = 2;
int echoPin1 = 3;
int travelTime1;
float pingDistance1;
float targetDistance1;

// Ultrasonic 2 (back)
int trigPin2 = 4;
int echoPin2 = 5;
int travelTime2;
float pingDistance2;
float targetDistance2;

// warning lights
int redLight = 12;
int greenLight = 13;

int dt = 25;
int redFlashTime = 175;
void setup() {
  // put your setup code here, to run once:]
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
pinMode(trigPin2, OUTPUT);
pinMode(echoPin2, INPUT);

pinMode(redLight, OUTPUT);
pinMode(greenLight, OUTPUT);


lcd.begin(2, 16);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(1,0);

  digitalWrite(trigPin1, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  travelTime1 = pulseIn(echoPin1, HIGH);


  digitalWrite(trigPin2, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  travelTime2 = pulseIn(echoPin2, HIGH);

  delay(dt);

  pingDistance1 = (travelTime1 * 765. * 5280. * 12) / (3600. * 1000000);
  targetDistance1 = pingDistance1 / 2;

  pingDistance2 = (travelTime2 * 765. * 5280. * 12) / (3600. * 1000000);
  targetDistance2 = pingDistance2 / 2;
  
  lcd.print("USonic1: ");
  lcd.print(targetDistance1);

  lcd.setCursor(1, 1);

  lcd.print("USonic2: ");
  lcd.print(targetDistance2);

  if ((targetDistance1 >= 3) || (targetDistance2 >= 3)){
    digitalWrite(redLight, LOW);

    digitalWrite(greenLight, HIGH);
  }
  
  if ((targetDistance1 < 3) || (targetDistance2 < 3)){
    digitalWrite(greenLight, LOW);

    digitalWrite(redLight, HIGH);
    delay(redFlashTime);
    digitalWrite(redLight, LOW);
    delay(redFlashTime);

  }
  

}
