# PCA9539
Arduino Library to approach PCA9539 I2C expander with digitalRead, digitalWrite and pinMode functions.

**NOTE**
Pull RESET (pin 3) HIGH for normal operation.

Device addressing varies between vendors, if you cannot find the address on the I2C bus use
the I2C Scanner sketch by Nick Gammon to determine correct address.
http://www.gammon.com.au/i2c

##Installation:
* a) Just download the zip file
* b) move PCA9539_LIB to the Users Arduino library (usually My documents\Arduino\Libraries)
* c) Create a new sketch and copy the example file into your sketch 
* d) Compile, download and done.

## Support functions:

* pinMode() same as standard Arduino
* digitalRead() same as Arduino
* digitalWrite() same as Arduino
 
## Additional
The code supports either pinnumbers 0 - 15 (port 0 = 0-7, port 1 = 8-15) or EA0 - EA7 and EB0 - EB7. This to stay more or less in sync with Arduino.

## Data Sheet
the data sheet for the PCA9539a is available here: <a>http://www.ti.com/lit/ds/symlink/pca9539.pdf</a>