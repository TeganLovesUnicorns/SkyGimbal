# SkyGimbal

## Description

An Arduino based solution for a programmable gimbal that can autonomously run for an extended period of time without an opperator.

## TO-DO:
- **Menu**
  - To get user input for sky cam
    - Start Points of Gimbal
    - Mid Points of Gimbal
    - End Points of Gimbal
    - Duration of Travel
    - Distance of Travel
    - FUTURE - Choices of motion curves to make smooth or fast movements. (PID control)
- **Memory**
  - Store user settings for gimbal in FLASH (PROGMEM keyword) and SRAM memory.
- **Gimbal Control**
  - v0 - get servo motors to home up and take XY and travel time information from serial
  - v1 - get servos to take XY and travel time info from Memory
  - v1.5 - add Z axis.
  - v2 - port all code to stepper motors
- **Cart**
  - v0 - get stepper to rotate 1 rev CW and CCW
  - v0.1 - add feedback sensor (HALL or OPTICAL)
