#include <Arduino.h>
#include <Morse.h>

Morse morse(13);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  morse.dot(); morse.dot(); morse.dot();
  morse.hold();
  morse.dash();
  morse.hold();
  morse.dot(); morse.dash(); morse.dot();
  morse.hold();
  morse.dot(); morse.dash();
  morse.hold();
  morse.dash(); morse.dot();
  morse.hold();
  morse.dash(); morse.dash(); morse.dot();
  morse.hold();
  morse.dot();
  morse.hold();
  morse.dot(); morse.dash(); morse.dot();
  delay(1000);
  morse.dash();
  morse.hold();
  morse.dot(); morse.dot(); morse.dot(); morse.dot();
  morse.hold();
  morse.dot(); morse.dot();
  morse.hold();
  morse.dash(); morse.dot();
  morse.hold();
  morse.dash(); morse.dash(); morse.dot();
  morse.hold();
  morse.dot(); morse.dot(); morse.dot();
  delay(2000);
}