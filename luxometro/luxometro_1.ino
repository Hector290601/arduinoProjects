#include <Wire.h>
#include <BH1750.h>

BH1750 lux;


void setup() {
  Serial.begin(9600);
  Wire.begin();
  lux.begin();
  Serial.println(F("BH1750 TEST"));
}

void loop() {
  float luxRead = lux.readLightLevel();
  Serial.print("LUZ: ");
  Serial.print(luxRead);
  Serial.println(" lx");
  delay(1000);
}
