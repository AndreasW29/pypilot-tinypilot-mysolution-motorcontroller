/*
 * Author: Timo Birnschein (timo.birnschein@googlemail.com)
 * Date: 2019/11/24
 * 
 * Notes: Credits to original author of motor.ino
 *        I needed to modify the code for my h-bridge so I decided to make rewrite parts of the code to
 *        make it more modular and more configurable.
 *        The original firmware was designed specifically for a bare medal h-bridge. These are rarely used
 *        anymore. Since the code was highly optimized for that task, it needed to change dramatically.
 *        
 *        Pins für PWM geändert von 5,6 auf 9,10
 *        Diese beiden Pins können über Timer1 auf eine andere PWM-Frequenz gesetzt werden, das verhindert Motorgeräusche 
 *        Pin 5,6 werden über Timer0 gesteuert, der steuert aber auch alle zeitlichen Abläufe
 */

 #include "config.h"
#include <Arduino.h>

#ifndef __PINS_H__
#define __PINS_H__

#ifdef BOARD_VNH2SP30

#endif

#ifndef DISABLE_ENDSTOPS
  // Hardware endstops for the rudder position
  #define FWD_FAULT_PIN 2 // use pin 7 for optional fault
  #define REV_FAULT_PIN 3 // use pin 8 for optional fault
#endif


#ifdef BOARD_IBT2_H_BRIDGE
  #define ENABLE_PIN 4    // Combined enable pin for both BTS7960
  #define RPWM_PIN 10      // First PWM input to BTS7960 // Drives CCW //Geändert 5->9 wg. PWM Frequenz
  #define LPWM_PIN 9      // Second PWM input to BTS7960 // Drives CW //Geändert 6->10 wg. PWM Frequenz
  #define R_IS_PIN A0     // Analog input if used
  #define L_IS_PIN A1     // Analog input if used
#endif

#ifndef DISABLE_CURRENT_SENSE
  #define CURRENT_SENSE_PIN_1 A0
  #define CURRENT_SENSE_PIN_2 A1
#endif

#ifndef DISABLE_RUDDER_SENSE
  #define RUDDER_SENSE_PIN A2
#endif

#ifndef DISABLE_TEMP_SENSE
  #define TEMPERATURE_MOTOR_SENSE_PIN A3
  #define TEMPERATURE_CONTROLLER_SENSE_PIN A3
#endif

#ifndef DISABLE_VOLTAGE_SENSE
  #define VOLTAGE_SENSE_PIN A5
#endif

#define ENGAGE_LED_PIN 7 // led is on when engaged.

#ifndef DISABLE_DEBUGGING_DISPLAY
  #define TFT_RST  5 //Pins alle geändert, Betrieb OHNE Debbuging Display
  #define TFT_DC   8
  #define TFT_CS   6
  #define TFT_MOSI 11
  #define TFT_SCLK 13
#endif

#endif
