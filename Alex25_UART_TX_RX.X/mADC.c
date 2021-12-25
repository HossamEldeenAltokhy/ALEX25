#include "config.h"



void init_ADC(unsigned char ch, 
                unsigned char ref,
                unsigned char freq){
    
    ADMUX |= ch & 0x1F; // 00011111
    ADMUX |= (ref<<REFS0);
    ADCSRA |= freq & 0x07;// 00000111
    // Enable INTERRUPT
//    ADCSRA |= (1<<ADIE);
    // ADC ENABLE
    ADCSRA |= (1<<ADEN);
}

void ADC_SC(){
    ADCSRA |= (1<<ADSC);
}

short ADC_read(){
    
    while(!(ADCSRA & (1<<ADIF)));
    
    short x = ADCL;
    x |= (ADCH << 8);
    //
//    x = ADCW;
    return x;
}