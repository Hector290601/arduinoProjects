#define LED 1
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println("hola mundo");
  DigiKeyboard.delay(5000);
}
