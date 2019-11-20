#include "config.h"
void i2cStart(void)
{
    SSPCON2bits.SEN = HIGH;             // initiate start condition
    while(SSPCON2bits.SEN != LOW);      // wait until SSPIF is LOW (start condition is complete)
    PIR1bits.SSP1IF = LOW;              // clear SSPIF flag
}
