#include <reg51.h>
#include "spi.h"

void main()
{
    while(1)
    {
        SPI_Send(0xAA);

        for(int i=0;i<50000;i++);
    }
}
