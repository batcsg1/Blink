#ifndef Blink_h
#define Blink_h
#include <Arduino.h>
class Blink
{
  public:
    Blink(int p);
    void blink();
    int pin;
};
#endif