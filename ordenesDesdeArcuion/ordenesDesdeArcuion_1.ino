int selected = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    selected = Serial.parseInt();
    switch(selected){
      case 1:
        Serial.print("touch testArduino && ls");
      break;
    }
  }
}
