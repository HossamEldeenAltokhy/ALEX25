



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


ISR(TIMER0_COMP_vect) {
    // Every Overflow event
    static int counter = 1;
    
    counter++;
    
    togglePortData(_PA);

    setCompareValue(counter);
 
    if(counter == 255){
        counter = 0;
    }
}

int main(void) {
    /* Replace with your application code */

    setPortOUT(_PA);
    
    setCompareValue(100);
    _delay_ms(10);
    init_Timer0(CTC, Timer_PS1024);

    // Global INT Enable
    sei();
    while (1) {



    }
}

void setCompareValue(unsigned char ocrValue){
    
    OCR0 = ocrValue;
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

//    TIMSK |= (1 << TOIE0);
    TIMSK |= (1 << OCIE0);


}
