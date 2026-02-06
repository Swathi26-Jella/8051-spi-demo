#include <reg51.h>
#include "spi.h"

sbit MOSI = P1^0;
sbit SCLK = P1^1;

void SPI_Delay()
{
    int i;
    for(i=0;i<50;i++);
}

void SPI_Send(unsigned char data)
{
    int i;

    for(i=0;i<8;i++)
    {
        MOSI = (data & 0x80);
        SCLK = 1;
        SPI_Delay();
        SCLK = 0;

        data <<= 1;
    }
}
