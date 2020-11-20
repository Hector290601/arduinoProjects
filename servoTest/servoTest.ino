#include <Servo.h>

Servo direccion;
int i = 0;

void setup(){
  direccion.attach(2);
}
 
void loop(){
  for(i = 50; i <= 130; i += 1){
    direccion.write(i);
    delay(15);
  }
  for(i = 130; i >= 50; i -= 1){
    direccion.write(i);
    delay(15);
  }/*
  direccion.write(130);
  delay(500);
  direccion.write(90);
  delay(500);
  direccion.write(50);
  delay(500);
  direccion.write(90);
  delay(500);*/
}
