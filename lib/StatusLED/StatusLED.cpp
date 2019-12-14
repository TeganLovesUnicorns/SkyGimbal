#include <Arduino.h>
#include <StatusLED.h>

StatusLED::StatusLED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void StatusLED::good()
{
  digitalWrite(_pin, HIGH);
  delay(250);
    digitalWrite(_pin, LOW);
  delay(250);
}

void StatusLED::error()
{
  digitalWrite(_pin, HIGH);
  delay(25);
    digitalWrite(_pin, LOW);
  delay(25);
}
