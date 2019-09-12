#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  Serial.println("yes");
  delay(1000);
}