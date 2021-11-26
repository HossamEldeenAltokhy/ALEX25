


#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "mKIT.h"



int main(void) {
    /* Replace with your application code */


    initLEDS();
    init_Buzzer();
    init_Relay();
    init_BTNs();
    while (1) {
        
        if(isPressed(BTN0)){
            LED0_ON();
        }else{
            LED0_OFF();
        }
        
        if(isPressed(BTN1)){
            LED1_ON();
        }else{
            LED1_OFF();
        }
     
    }
}
