#include <Arduino.h>
#include <LibRobus.h>

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  Serial.println("Fred");
  delay(1000);
}