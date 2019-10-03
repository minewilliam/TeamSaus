#include <Arduino.h>
#include <LibRobus.h>
float valeur;
float valeur1;

void setup() {
 
  BoardInit();
  delay(1000);
  ENCODER_ReadReset(RIGHT);

}

void loop() {
MOTOR_SetSpeed(RIGHT, 0.9);
MOTOR_SetSpeed(LEFT, 0.9);
valeur= ENCODER_Read(RIGHT);
valeur1=ENCODER_Read(LEFT);
if (millis()==10000){
  Serial.println(valeur/3200);
  Serial.println(valeur1/3200);
delay(5000);
}

}