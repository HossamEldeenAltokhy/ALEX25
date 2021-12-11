



#include "config.h"





int main(void) {
    /* Replace with your application code */
    initLCD_4bits();
    
    init_ADC(CH0_CH1,_AREF, _PS128);
    _delay_ms(50);
    
    
    
    while (1) {
 
        ADC_SC();
        int x = ADC_read()*.48875855327468230694037145650049;
        
        LCD_clear_4bits();
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        LCD_write_4bits(' ');
        LCD_num_4bits(x);
        
//        _delay_ms(1000);


    }
}
