#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PCA9539.h"
#include "Wire.h"

PCA9539 ioport(0x20); // Base address starts at 0x74 for A0 = L and A1 = L

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
  // set pins to output
  //
  
    ioport.pinMode(EA0, OUTPUT);
    ioport.pinMode(EA1, OUTPUT);
    ioport.pinMode(EA2, OUTPUT);
    ioport.pinMode(EA3, OUTPUT);
    ioport.pinMode(EA4, OUTPUT);
    ioport.pinMode(EA5, OUTPUT);
    ioport.pinMode(EA6, OUTPUT);
    ioport.pinMode(EA7, OUTPUT);
    ioport.pinMode(EB0, OUTPUT);
    ioport.pinMode(EB1, OUTPUT);
    ioport.pinMode(EB2, OUTPUT);
    ioport.pinMode(EB3, OUTPUT);
    ioport.pinMode(EB4, OUTPUT);
    ioport.pinMode(EB5, OUTPUT);
    ioport.pinMode(EB6, OUTPUT);
    ioport.pinMode(EB7, OUTPUT);
    ioport.digitalWrite(EA0, HIGH);
  ioport.digitalWrite(EA1, HIGH);
  ioport.digitalWrite(EA2, HIGH);
  ioport.digitalWrite(EA3, HIGH);
  ioport.digitalWrite(EA4, HIGH);
  ioport.digitalWrite(EA5, HIGH);
  ioport.digitalWrite(EA6, HIGH);
  ioport.digitalWrite(EA7, HIGH);
  ioport.digitalWrite(EB0, LOW);
  ioport.digitalWrite(EB1, LOW);
  ioport.digitalWrite(EB2, LOW);
  ioport.digitalWrite(EB3, LOW);
  ioport.digitalWrite(EB4, LOW);
  ioport.digitalWrite(EB5, LOW);
  ioport.digitalWrite(EB6, LOW);
  ioport.digitalWrite(EB7, LOW);
  
}

/**
 * @name loop()
 * main loop of program and runs endlessly
 */
void loop()
{
  ioport.digitalWrite(EB0, HIGH);
  ioport.digitalWrite(EA0, LOW);
  ioport.digitalWrite(EA7, HIGH);
  ioport.digitalWrite(EB7, LOW);
  delay(100);
  ioport.digitalWrite(EB1, HIGH);
  ioport.digitalWrite(EA1, LOW);
  ioport.digitalWrite(EA0, HIGH);
  ioport.digitalWrite(EB0, LOW);
  delay(100);
  ioport.digitalWrite(EB2, HIGH);
  ioport.digitalWrite(EA2, LOW);
  ioport.digitalWrite(EA1, HIGH);
  ioport.digitalWrite(EB1, LOW);
  delay(100);
  ioport.digitalWrite(EB3, HIGH);
  ioport.digitalWrite(EA3, LOW);
  ioport.digitalWrite(EA2, HIGH);
  ioport.digitalWrite(EB2, LOW);
  delay(100);
  ioport.digitalWrite(EB4, HIGH);
  ioport.digitalWrite(EA4, LOW);
  ioport.digitalWrite(EA3, HIGH);
  ioport.digitalWrite(EB3, LOW);
  delay(100);
  ioport.digitalWrite(EB5, HIGH);
  ioport.digitalWrite(EA5, LOW);
  ioport.digitalWrite(EA4, HIGH);
  ioport.digitalWrite(EB4, LOW);
  delay(100);
  ioport.digitalWrite(EB6, HIGH);
  ioport.digitalWrite(EA6, LOW);
  ioport.digitalWrite(EA5, HIGH);
  ioport.digitalWrite(EB5, LOW);
  delay(100);
  ioport.digitalWrite(EB7, HIGH);
  ioport.digitalWrite(EA7, LOW);
  ioport.digitalWrite(EA6, HIGH);
  ioport.digitalWrite(EB6, LOW);
  delay(100);  
  
 
}
