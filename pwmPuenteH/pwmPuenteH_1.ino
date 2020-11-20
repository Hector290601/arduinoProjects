#include "BTS7960.h"

const uint8_t EN = 8;
const uint8_t L_PWM = 9;
const uint8_t R_PWM = 10;

BTS7960 motorController(EN, L_PWM, R_PWM);

void setup(){
  Serial.begin(9600);
}

void loop(){
  motorController.Enable();
  /*
  for(int speed = 0 ; speed < 255; speed+=10){
    motorController.TurnLeft(speed);
    delay(100);
  }
  motorController.Stop();
  for(int speed = 255 ; speed > 0; speed-=10){
  motorController.TurnLeft(speed);
  delay(100);
  }  
  motorController.Stop();
  motorController.Disable();
  delay(5000);*/
  int vel = 0;
  if(Serial.available() > 0){
    vel = Serial.parseInt();
    motorController.TurnLeft(vel);
  }
}
