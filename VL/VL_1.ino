#include "Adafruit_VL53L0X.h"

Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(9600);
  Serial.println("VL53L0X test");
  if(!lox.begin()){
    Serial.println(F("ERROR AL INICIAR EL SENSOR"));
  }
}

void loop() {
  VL53L0X_RangingMeasurementData_t measure;
  Serial.print("Leyendo sensor... ");
  lox.rangingTest(&measure, false);
  if (measure.RangeStatus != 4){
    Serial.print("Distancia (mm): ");
    Serial.println(measure.RangeMilliMeter);
  }else{
    Serial.println("  Fuera de rango ");
  }
  delay(100);
}
