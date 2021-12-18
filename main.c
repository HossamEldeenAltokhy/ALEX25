



#include "config.h"


// Clock Select Values
#define Timer_OFF    0
#define Timer_NoPS   1
#define Timer_PS8    2
#define Timer_PS64   3
#define Timer_PS256  4
#define Timer_PS1024 5
#define Timer_Ex_F   6
#define Timer_Ex_R   7

// Timer Modes
#define NormalMode  0
#define PWM         1
#define CTC         2
#define FPWM        3

void init_Timer0(unsigned char mode, unsigned char Clk);
void setCompareValue(unsigned char ocrValue);
void setDutyCycle(unsigned char dutyCycle_percentage);

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

void setDutyCycle(unsigned char dutyCycle_percentage) {

    setCompareValue(255 * dutyCycle_percentage / 100.0);

}

void setCompareValue(unsigned char ocrValue) {

    OCR0 = ocrValue;
}

void init_Timer0(unsigned char mode, unsigned char Clk) {
    setPinOUT(_PB, 3);

    switch (mode) {
        case NormalMode:
            TCCR0 &= ~((1 << WGM01) | (1 << WGM00));
            break;
        case PWM:
            TCCR0 &= ~(1 << WGM01);
            TCCR0 |= (1 << WGM00);
            break;
        case CTC:
            TCCR0 &= ~(1 << WGM00);
            TCCR0 |= (1 << WGM01);
            break;
        case FPWM:
            TCCR0 |= ((1 << WGM01) | (1 << WGM00));
            break;
        default:
            // Nothing
            break;
    }

    TCCR0 |= (1 << COM01); // TOGGLE ON OC0 PIN

    // TCCR0... Timer Counter Control Register.
    // Selecting Clock source and value
    TCCR0 |= Clk;

    //TCCR0 = (TCCR0 & 0xf8) | Clk;



    // Enable OVF Interrupt

    //    TIMSK |= (1 << TOIE0);
    //    TIMSK |= (1 << OCIE0);


}



