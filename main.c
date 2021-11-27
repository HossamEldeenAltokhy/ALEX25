


#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "mKIT.h"

#define true 1
#define false 0

int flag = false;
int main(void) {
    /* Replace with your application code */


    initLEDS();
    init_Buzzer();
    init_Relay();
    init_BTNs();
    while (1) {
        
        if(isPressed(BTN1)){
            if(checkLED(LED1)){
                LED1_OFF();
            }else{
                LED1_ON();
            }
            _delay_ms(500);
        }else{
            
        }
        
        
//        if(isPressed(BTN1)){
//            if(flag){
//                LED1_OFF();
//                flag = 0;
//            }else{
//                LED1_ON();
//                flag = 1;
//            }
//            _delay_ms(500);
//        }else{
//            
//        }
        
        
        
     
    }
}
