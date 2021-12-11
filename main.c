



#include "config.h"


ISR(ADC_vect){
    int x = ADC_read()*.48875855327468230694037145650049;
        
        LCD_clear_4bits();
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        
        ADC_SC();
}


int main(void) {
    /* Replace with your application code */
    initLCD_4bits();
    
    init_ADC(CH0,_AREF, _PS128);
    _delay_ms(50);
    
    sei();
    ADC_SC();
    while (1) {
 
        
        
        



    }
}
