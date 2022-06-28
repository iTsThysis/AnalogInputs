/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/darwinwang/Documents/IoT/AnalogInputs/src/AnalogInputs.ino"
void setup();
void loop();
#line 1 "/Users/darwinwang/Documents/IoT/AnalogInputs/src/AnalogInputs.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
//setting value as an integer
uint16_t value;

void setup() {
  //setting ports
  pinMode(A5, INPUT);
  pinMode(D2, OUTPUT);
  pinMode(D5, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  //defining value
  value = analogRead(A5);
  //printing value
  Serial.println(value);
  
  //making the lightbulb blink
  delay(value);
  digitalWrite(D5, HIGH);
  digitalWrite(D2, LOW);
  delay(value);
  digitalWrite(D5, LOW);
  digitalWrite(D2, HIGH);
}
