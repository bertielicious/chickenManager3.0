#include "config.h"
void configI2c(void)
{
    TRISBbits.TRISB4 = HIGH;    // SDA (RB4 pin 13) set as an input pin (tri-state))
    TRISBbits.TRISB6 = HIGH;    // SCL (RB6 pin 11) set as an input pin (tri-state))
    
    SSPCON1bits.SSPEN = HIGH;   //Serial Port ENable bit, configures serial port
                                // and configures SDA and SCL pins
    
    SSPCON1bits.SSP1M3 = HIGH;  //I2C Master mode, clock = FOSC / (4 * (SSPADD+1))(4)
    SSPCON1bits.SSP1M2 = LOW;
    SSPCON1bits.SSP1M1 = LOW;
    SSPCON1bits.SSP1M0 = LOW;
    
    SSPADD = 0x09;          // Fosc = 4MHz, SCL = 100kHz    
}
