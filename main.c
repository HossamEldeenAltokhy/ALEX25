



#include "config.h"




char str1[] = "DutyCycle= ";
unsigned char varComp = 50;

int main(void) {
    /* Replace with your application code */

    setPinIN(_PA, PA0);
    setPinIN(_PA, PA1);

    initLCD_4bits();
    setDutyCycle(varComp);
    init_Timer0(PWM, Timer_PS1024);

    // Global INT Enable
    sei();
    while (1) {

        if (PINA & (1 << PA0)) {
            varComp += 10;
            varComp = varComp > 100 ? 100: varComp;
            setDutyCycle(varComp);
            LCD_clear_4bits();
            LCD_str_4bits(str1);
            LCD_num_4bits(varComp);
            LCD_write_4bits('%');
            _delay_ms(500);

        }
        if (PINA & (1 << PA1)) {
            varComp -= 10;
            varComp = varComp > 100 ? 0: varComp;
            setDutyCycle(varComp);
            LCD_clear_4bits();
            LCD_str_4bits(str1);
            LCD_num_4bits(varComp);
            LCD_write_4bits('%');
            _delay_ms(500);
        }


    }
}
