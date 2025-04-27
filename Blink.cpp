#include "Blink.h"

//Constructor
Blink::Blink(int p){
  pin = p;
  pinMode(pin, OUTPUT);
}

//Method
void Blink::blink(){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}