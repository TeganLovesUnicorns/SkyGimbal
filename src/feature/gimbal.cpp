/**
 * File: Gimbal.cpp
 * Author: Daniel Rehbein
 * File Date: 191203
 * File Version: 0.0.1
 * Description: Gimbal Control File for SkyGimbal Project
*/

// INCLUDES
#include <Arduino.h>
#include <Servo.h>

// Declare Servo instances
Servo X_servo; // Pan Servo
Servo Y_servo; // Tilt Servo

int pos = 0; // Variable to store servo position

void gimbal_setup(){
  X_servo.attach(9); // declares X_servo is on Pin 9
  Y_servo.attach(11); // declares Y_servo is on Pin 11
}

void gimbal(){
  for (pos = 0; pos <= 180; pos += 1){ // goes from 0 to 180 in steps of 1 degree
    X_servo.write(pos); // tells X_servo to go to position in variable 'pos'
    Y_servo.write(pos); // tells Y_servo to go to position in variable 'pos'
    delay(15); // wait 15ms for servo to reach position.
  }
  for (pos = 180; pos >= 0; pos -= 1){ // goes from 180 to 0 in steps of 1 degree
    X_servo.write(pos); // tells X_servo to go to position in variable 'pos'
    Y_servo.write(pos); // tells Y_servo to go to position in variable 'pos'
    delay(15); // wait 15ms for servo to reach position.
  }
}