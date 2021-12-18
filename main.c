



#include "config.h"


char str[] = " Seconds";
char date[] = "18/12/2021";

ISR(TIMER0_OVF_vect){
    // 61 time per second
    static unsigned char counter = 0;
    static int seconds = 55;
    static int minutes = 59;
    static int hours = 0;
    counter++;
    
    if(counter == 61){
        //Every 1 Sec
        seconds++;
        if(seconds == 60){
            seconds = 0;
            minutes++;
            if(minutes == 60){
                minutes = 0;
                hours++;
            }
        }
        LCD_clear_4bits();
        LCD_num_4bits(hours);
        LCD_write_4bits(':');
        LCD_num_4bits(minutes);
        LCD_write_4bits(':');
        LCD_num_4bits(seconds);
        LCD_goto_xy_4bits(1,0);
        LCD_str_4bits(date);
        counter = 0;
        
        
        
    }
}


int main(void) {
    /* Replace with your application code */
    initLCD_4bits();
    
    
    init_Timer0(NormalMode, Timer_PS1024);
    Timer0_enableINT(TOV0);
    // Global INT Enable
    sei();
    while (1) {

       


    }
}
