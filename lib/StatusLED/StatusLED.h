#ifndef StatusLED_h
  #define StatusLED_h

  #include "Arduino.h"

  class StatusLED
{
private:
  int _pin;
public:
  StatusLED(int pin);
  void good();
  void error();
};


#endif