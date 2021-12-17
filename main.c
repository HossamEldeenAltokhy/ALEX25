



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

ISR(TIMER0_OVF_vect) {
    // Every Overflow event
    static int counter = 0;
    
    counter++;
    
    if (counter == 61) {
        // Every One Second
        ADC_SC();
        counter = 0;
    }
}

int main(void) {
    /* Replace with your application code */

    int result;
    initLCD_4bits();
    init_ADC(CH0, _AREF ,_PS128);
    init_Timer0(NormalMode, Timer_PS1024);

    // Global INT Enable
    sei();
    while (1) {

       result =  ADC_read(); // pooling
       LCD_clear_4bits();
       LCD_num_4bits(result);


    }
}

void init_Timer0(unsigned char mode, unsigned char Clk) {

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


    // TCCR0... Timer Counter Control Register.
    // Selecting Clock source and value
    TCCR0 &= Timer_OFF & 0xf8;
    TCCR0 |= Clk;

    //TCCR0 = (TCCR0 & 0xf8) | Clk;



    // Enable OVF Interrupt

    TIMSK |= (1 << TOIE0);


}
