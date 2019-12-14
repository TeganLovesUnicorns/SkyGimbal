#include <Arduino.h>
#include "StatusLED.h"

StatusLED statusLED(13);

void setup() { // put your setup code here, to run once:

}

void loop() { // Put yout looping code here to run after setup:
  statusLED.good();  
}