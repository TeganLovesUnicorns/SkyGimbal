/**
 * File: Main.cpp
 * Author: Daniel Rehbein
 * File Date: 191224
 * File Version: 0.0.1
 * Description: Main File File for SkyGimbal Project
*/

// INCLUDES
#include <Arduino.h>
#include <StatusLED.h>

StatusLED statusLED(13);

void setup() { // put your setup code here, to run once:

}

void loop() { // Put yout looping code here to run after setup:
  statusLED.good();  
}