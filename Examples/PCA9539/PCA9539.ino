#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PCA9539.h"
#include "Wire.h"

PCA9539 ioport(0x74); // Base address starts at 0x74 for A0 = L and A1 = L

//Base address for PCA9539 devices 
//Address   A1    A0
//0x74      L     L
//0x75      L     H
//0x76      H     L
//0x77      H     H

//For pins used as input, the PCA9539A devices do not include pullups.
//You will need to add external pullups if needed.

/**
 * @name setup()
 * initialize the program
 */
void setup()
{
  //
  // set first 14 pins to output
  //
  for (uint8_t i = 0; i < 14; i++){
    ioport.pinMode(i, OUTPUT);
  }
  //
  // set pin 15  (=digital 15) to Input
  //
  ioport.pinMode(ED14, INPUT);
}

/**
 * @name loop()
 * main loop of program and runs endlessly
 */
void loop()
{
  //
  // check if button is LOW
  //
  if (ioport.digitalRead(ED14) == LOW) {
    //
    // turn all 14 leds on
    //
    for (uint8_t i = 0; i < 14; i++){
      ioport.digitalWrite(i, HIGH);
      delay(50);
    }
    //
    // turn all 14 leds off
    //
    for (uint8_t i = 0; i < 14; i++){
      ioport.digitalWrite(i, LOW);
      delay(50);
    }
  }
}
