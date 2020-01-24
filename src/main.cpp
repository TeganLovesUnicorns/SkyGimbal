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
#include "inc/SkyGimbalConfig.h"

#include <Wire.h>
#include <AccelStepper.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_MS_PWMServoDriver.h "

#include "../Configuration.h"

StatusLED statusLED(13);

Adafruit_MotorShield AFMS = Adafruit_MotorShield();

Adafruit_StepperMotor *myMotor = AFMS.getStepper(200,1);

void forwardstep1() {
  myMotor->onestep(FORWARD, MICROSTEP);
}

void backwardstep1() {
  myMotor->onestep(BACKWARD, MICROSTEP);
}

// int mySpeed = 2;

AccelStepper Astepper1(forwardstep1, backwardstep1);

void setup() { // put your setup code here, to run once:
  
  Serial.begin(9600); // Setup serial connection at 9600bps
  Serial.println("stepper test <3"); // prints to serial command line

  AFMS.begin(); // Initialize MotorShield at default freq of 1.6khz

  Astepper1.setMaxSpeed(1000);
  Astepper1.setSpeed(D_RPM);

}

void loop() { // Put your looping code here to run after setup:
  statusLED.error(); // flashes LED on pin 13
  Astepper1.runSpeed();
}