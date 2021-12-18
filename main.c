



#include "config.h"

#define TOVF1   0
#define OCF1    1

void init_Timer1(unsigned char mode, unsigned char Clk);
void Timer1_enableINT(unsigned char INT);
void setCompareValue_A(unsigned short compValue);

//ISR(TIMER1_COMPA_vect){
//    togglePortData(_PA);
//}

int main(void) {
    /* Replace with your application code */
//    initLCD_4bits();
    setPortOUT(_PA);
    setPinOUT(_PD, PD5);
    setPinOUT(_PD, PD4);
    setCompareValue_A(500);
    init_Timer1(FPWM, Timer_PS1024);
    
//    Timer1_enableINT(OCF1);
   
    // Global INT Enable
    sei();
    while (1) {

       


    }
}


void init_Timer1(unsigned char mode, unsigned char Clk){
    switch(mode){
        case NormalMode:
            TCCR1A &= ~((1<<WGM11)|(1<<WGM10));
            TCCR1B &= ~((1<<WGM13)|(1<<WGM12));
            break;
        case CTC:
            TCCR1A &= ~((1<<WGM11)|(1<<WGM10));
            TCCR1B &= ~(1<<WGM13);
            TCCR1B |= (1<<WGM12);
            break;
        case PWM:
            TCCR1A |= ((1<<WGM10));
//            TCCR1B &= ~(1<<WGM12);
            TCCR1B |= (1<<WGM13);
            // Set compare output pin 
            TCCR1A |= (1<<COM1A1);
            break;
        case FPWM:
            TCCR1A |= ((1<<WGM11)|(1<<WGM10));
            TCCR1B |= ((1<<WGM13)|(1<<WGM12));
            // Set compare output pin 
            TCCR1A |= (1<<COM1A1);
            break;
            
    }
    
    TCCR1B |= Clk;
    
    
    
    
}

void Timer1_enableINT(unsigned char INT){
    switch(INT){
        case TOVF1:
            TIMSK |= (1<<TOIE1);
            break;
        case OCF1:
            TIMSK |= (1<<OCF1A);
            break;
    }
}

void setCompareValue_A(unsigned short compValue){
    
//    OCR1AL = (unsigned char) compValue;
//    OCR1AH = (unsigned char) (compValue >> 8);
    OCR1A = compValue;
}