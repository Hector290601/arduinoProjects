int X;
int Y;
int pulsador = 10;
bool sw, anterior;

void setup(){
  Serial.begin(9600);
  pinMode(pulsador, INPUT);
}

void loop(){
  X = analogRead(A0);
  Y = analogRead(A1);
  sw = digitalRead(pulsador);
  if (X >= 0 && X < 400){
    Serial.print("X1: ");
    Serial.println(X);
  }
  if (X > 600 && X <= 1023){
    Serial.print("X2: ");
    Serial.println(X);
  }
  if (Y >= 0 && Y < 400){
    Serial.print("Y1: ");
    Serial.println(Y);
  }
  if (Y > 600 && Y <= 1023){
    Serial.print("Y2: ");
    Serial.println(Y);
  }
  if(sw != anterior){
    anterior = sw;
    Serial.println("Pulsador");
  }
}
