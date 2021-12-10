#include "config.h"



void init_ADC(unsigned char ch, 
                unsigned char ref,
                unsigned char freq){
    
    ADMUX |= ch & 0x1F; // 00011111
    ADMUX |= (ref<<REFS0);
    ADCSRA |= freq & 0x07;// 00000111
    // Enable INTERRupt or NOT
    // ?????????
    // ADC ENABLE
    ADCSRA |= (1<<ADEN);
}

void ADC_SC(){
    ADCSRA |= (1<<ADSC);
}

short ADC_read(){
    short x = ADCL;
}