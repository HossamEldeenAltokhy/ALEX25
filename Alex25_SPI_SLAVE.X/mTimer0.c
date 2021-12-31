#include "config.h"

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

    //TCCR0 |= (1 << COM01); // TOGGLE ON OC0 PIN

    // TCCR0... Timer Counter Control Register.
    // Selecting Clock source and value
    TCCR0 |= Clk;

    //TCCR0 = (TCCR0 & 0xf8) | Clk;



    // Enable OVF Interrupt

    //    TIMSK |= (1 << TOIE0);
    //    TIMSK |= (1 << OCIE0);


}

void Timer0_enableINT(unsigned char INT){
    switch(INT){
        case TOV0:
            TIMSK |= (1 << TOIE0);
            break;
        case OCF0:
            TIMSK |= (1 << OCIE0);
            break;
            
    }
}




