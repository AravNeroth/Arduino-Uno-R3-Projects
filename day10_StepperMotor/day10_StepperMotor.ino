#include <Stepper.h>

int stepsPerRev = 2048;
int motSpeed = 10;
int dt = 500;
Stepper myStepper (stepsPerRev, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed); 
}

void loop() {
  myStepper.step(stepsPerRev);
  delay(dt);
  myStepper.step(-stepsPerRev);
  delay(dt);
}
