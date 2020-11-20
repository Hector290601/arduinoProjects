#include <Servo.h>

int value = 0;
Servo firstESC;

void setup() {
  firstESC.attach(9);
  Serial.begin(9600);
}

void loop() {
  int i = 0;
  for(i = 70; i<= 2000; i += 100){
    firstESC.writeMicroseconds(value);
    delay(150);
  }
}
