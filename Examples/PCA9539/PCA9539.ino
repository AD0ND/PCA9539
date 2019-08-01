#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "PCA9539.h"
#include "Wire.h"

PCA9539 ioport(0x74); // Base address starts at 0x74 for A0 = L and A1 = L

//Base address for PCA9539A devices 
//Address   A1    A0
//0x74      L     L
//0x75      L     H
//0x76      H     L
//0x77      H     H
//Be sure to check I2C address with I2C Scanner by Nick Gammon if you are having communication errors
//Some vendors do not hold to this address range. (Diodes Inc, et al)
//http://www.gammon.com.au/i2c


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
  
    ioport.pinMode(A0, OUTPUT);
    ioport.pinMode(A1, OUTPUT);
    ioport.pinMode(A2, OUTPUT);
    ioport.pinMode(A3, OUTPUT);
    ioport.pinMode(A4, OUTPUT);
    ioport.pinMode(A5, OUTPUT);
    ioport.pinMode(A6, OUTPUT);
    ioport.pinMode(A7, OUTPUT);
    ioport.pinMode(B0, OUTPUT);
    ioport.pinMode(B1, OUTPUT);
    ioport.pinMode(B2, OUTPUT);
    ioport.pinMode(B3, OUTPUT);
    ioport.pinMode(B4, OUTPUT);
    ioport.pinMode(B5, OUTPUT);
    ioport.pinMode(B6, OUTPUT);
    ioport.pinMode(B7, OUTPUT);
  
  ioport.digitalWrite(A0, HIGH);
  ioport.digitalWrite(A1, HIGH);
  ioport.digitalWrite(A2, HIGH);
  ioport.digitalWrite(A3, HIGH);
  ioport.digitalWrite(A4, HIGH);
  ioport.digitalWrite(A5, HIGH);
  ioport.digitalWrite(A6, HIGH);
  ioport.digitalWrite(A7, HIGH);
  ioport.digitalWrite(B0, LOW);
  ioport.digitalWrite(B1, LOW);
  ioport.digitalWrite(B2, LOW);
  ioport.digitalWrite(B3, LOW);
  ioport.digitalWrite(B4, LOW);
  ioport.digitalWrite(B5, LOW);
  ioport.digitalWrite(B6, LOW);
  ioport.digitalWrite(B7, LOW);
  
}

/**
 * @name loop()
 * main loop of program and runs endlessly
 */
void loop()
{
  ioport.digitalWrite(B0, HIGH);
  ioport.digitalWrite(A0, LOW);
  ioport.digitalWrite(A7, HIGH);
  ioport.digitalWrite(B7, LOW);
  delay(100);
  ioport.digitalWrite(B1, HIGH);
  ioport.digitalWrite(A1, LOW);
  ioport.digitalWrite(A0, HIGH);
  ioport.digitalWrite(B0, LOW);
  delay(100);
  ioport.digitalWrite(B2, HIGH);
  ioport.digitalWrite(A2, LOW);
  ioport.digitalWrite(A1, HIGH);
  ioport.digitalWrite(B1, LOW);
  delay(100);
  ioport.digitalWrite(B3, HIGH);
  ioport.digitalWrite(A3, LOW);
  ioport.digitalWrite(A2, HIGH);
  ioport.digitalWrite(B2, LOW);
  delay(100);
  ioport.digitalWrite(B4, HIGH);
  ioport.digitalWrite(A4, LOW);
  ioport.digitalWrite(A3, HIGH);
  ioport.digitalWrite(B3, LOW);
  delay(100);
  ioport.digitalWrite(B5, HIGH);
  ioport.digitalWrite(A5, LOW);
  ioport.digitalWrite(A4, HIGH);
  ioport.digitalWrite(B4, LOW);
  delay(100);
  ioport.digitalWrite(B6, HIGH);
  ioport.digitalWrite(A6, LOW);
  ioport.digitalWrite(A5, HIGH);
  ioport.digitalWrite(B5, LOW);
  delay(100);
  ioport.digitalWrite(B7, HIGH);
  ioport.digitalWrite(A7, LOW);
  ioport.digitalWrite(A6, HIGH);
  ioport.digitalWrite(B6, LOW);
  delay(100);  
  
 
}
