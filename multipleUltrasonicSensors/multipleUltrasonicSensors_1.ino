#define echoOne 2
#define trigger 3
#define echoTwo 4

int distanceOne;
int distanceTwo;
float timeOne;
float timeTwo;

void setup(){
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echoOne, INPUT);
  pinMode(echoTwo, INPUT);
}

void loop(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  timeOne = pulseIn(echoOne, HIGH);
  timeTwo = pulseIn(echoOne, HIGH);
  distanceOne = 0.01715*timeOne;
  distanceTwo = 0.01715*timeTwo;
  Serial.print("DistanceOne: ");
  Serial.print(distanceOne);
  Serial.println(" cm");
  Serial.print("DistanceTwo: ");
  Serial.print(distanceTwo);
  Serial.println(" cm");
  delay(3000);
}
