#include <Arduino.h>
#include <StatusLED.h>
#include <Chrono.h>

int statusLEDState = LOW;

Chrono statusLEDChrono;

StatusLED::StatusLED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  digitalWrite(_pin, statusLEDState);
}

void StatusLED::good()
{
  if (statusLEDChrono.hasPassed(500)) {// returns true if it has been 500ms since it was started
    statusLEDChrono.restart(); // restarts crono to trigger later.

    // toggle stored state
    if (statusLEDState==LOW) statusLEDState=HIGH;
    else statusLEDState=LOW;

    // writes new value to state and LED
    digitalWrite(_pin, statusLEDState);    
  }
}

void StatusLED::error()
{
  if (statusLEDChrono.hasPassed(250)) {// returns true if it has been 500ms since it was started
    statusLEDChrono.restart(); // restarts crono to trigger later.

    // toggle stored state
    if (statusLEDState==LOW) statusLEDState=HIGH;
    else statusLEDState=LOW;

    // writes new value to state and LED
    digitalWrite(_pin, statusLEDState);    
  }
}
