


#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "mKIT.h"
#include "mLCD_8bits.h"

#define true 1
#define false 0

int flag = false;
char str[] = "Hello World";
int main(void) {
    /* Replace with your application code */


  
    initLCD();
    
    
    
//    LCD_str(str);
    LCD_num(2021);
    
    
    
    while (1) {
        
        
        
        
     
    }
}
