#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  Serial.println("joaquin");
  delay(100);
}