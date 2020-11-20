#include <Servo.h>

Servo directionCar;
int directionDegree;

void setup () {
  directionCar.attach(2);
  Serial.begin(19200);
  directionCar.write(90);
}
 
void loop(){
 if (Serial.available() > 0) {
  directionDegree = Serial.parseInt();
  directionCar.write(directionDegree);
 }
}
