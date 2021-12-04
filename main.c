



#include "config.h"


ISR(INT0_vect) {
    
    LED0_Toggle();
}

int main(void) {
    /* Replace with your application code */
    
    initLEDS();
    int res = init_INT(INT0, RisingMode);
    if(res == 1)
    sei();

    while (1) {
        togglePortData(_PB);


    }
}
