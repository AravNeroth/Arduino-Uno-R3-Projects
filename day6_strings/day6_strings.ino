String myname;
String msg = "What is your name?" ;
String msg2 = "Hello ";
String msg3 = " , Welcome to Arduino!";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(msg);

  while (Serial.available() == 0){

  }

  myName = Serial.readString();
  Serial.println(msg2);
  Serial.println(myName);
  Serial.println(msg3);


}
