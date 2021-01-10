#include <Servo.h>
const int L1 = 2;
const int L2 =  3;
const int R1 = 4;
const int R2 = 5;
Servo dir;
const int TL = 8;
const int EL = 9;
const int TC = 10;
const int EC = 11;
const int TR = 12;
const int ER = 13;
long dI = 0;
long tI = 0;
long dM = 0;
long tM = 0;
long dD = 0;
long tD = 0;
long timeDistance;
long distanceDistance;
const int timeExecute = 50;
const int timeDelay = int(timeExecute / 10);
const int distanceCenter = 30;

void test() {
  adelante();
  delay (500);
  pausa();
  delay(100);
  atras();
  delay (500);
  pausa();
  delay(100);
  vueltaDerecha();
  delay (500);
  pausa();
  delay(100);
  vueltaIzquierda();
  delay (500);
  pausa();
  delay(100);
}

long distance(int Trigger, int Echo) {
  digitalWrite(Trigger, 1);
  delayMicroseconds(10);
  digitalWrite(Trigger, 0);
  timeDistance = pulseIn(Echo, 1);
  distanceDistance = timeDistance / 59;
  return distanceDistance;
}

void pausa() {
  digitalWrite(L1, 0);
  digitalWrite(L2, 0);
  digitalWrite(R1, 0);
  digitalWrite(R2, 0);
  dir.write(90);
}

void adelante() {
  digitalWrite(L1, 0);
  digitalWrite(L2, 1);
  digitalWrite(R1, 0);
  digitalWrite(R2, 1);
  dir.write(90);
}

void atras() {
  digitalWrite(L1, 1);
  digitalWrite(L2, 0);
  digitalWrite(R1, 1);
  digitalWrite(R2, 0);
  dir.write(70);
}

void vueltaDerecha() {
  digitalWrite(L1, 0);
  digitalWrite(L2, 1);
  digitalWrite(R1, 0);
  digitalWrite(R2, 1);
  dir.write(70);
}

void vueltaIzquierda() {
  digitalWrite(L1, 0);
  digitalWrite(L2, 1);
  digitalWrite(R1, 0);
  digitalWrite(R2, 1);
  dir.write(110);
}

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(TL, OUTPUT);
  pinMode(EL, INPUT);
  pinMode(TC, OUTPUT);
  pinMode(EC, INPUT);
  pinMode(TR, OUTPUT);
  pinMode(ER, INPUT);
  dir.attach(6);
  test();
}

void loop() {
  if (distance(TC, EC) >= distanceCenter) {
    adelante();
    delay(timeExecute);
    pausa();
    delay(timeDelay);
  } else if (distance(TC, EC < 50)) {
    if (distance(TR, ER) > 50) {
      vueltaDerecha();
      delay(timeExecute);
      pausa();
      delay(timeDelay);
    } else if (distance(TL, EL) > 50) {
      vueltaIzquierda();
      delay(timeExecute);
      pausa();
      delay(timeDelay);
    }
  } else if (distance(TC, EC) >= 150 or distance(TC, EC) < distanceCenter) {
    atras();
  }
}
