#define rpi 2
#define led 13

int state = 0;

void setup() {
  pinMode(rpi, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  state = digitalRead(rpi);
  if(state){
    digitalWrite(led, 1);
  }else{
    digitalWrite(led, 0);
  }
}
