



#include "config.h"
#include "mLCD_8bits.h"
#include "string.h"




int main(void) {
    /* Replace with your application code */

    init_SPI(MASTER);
    
    
    
    _delay_ms(2000);
    while (1) {

        SPI_write('A');

        _delay_ms(200);

    }
}

