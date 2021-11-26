#include <avr/io.h>
#include "mKIT.h"

void initLEDS() {
    // Direction DDR

    DDRC |= (1 << LED0) | (1 << LED1);
    DDRD |= (1 << LED2);
}

void LED0_ON() {
    PORTC |= (1 << LED0);
}

void LED0_OFF() {
    PORTC &= ~(1 << LED0);
}

void LED1_ON() {
    PORTC |= (1 << LED1);
}

void LED1_OFF() {
    PORTC &= ~(1 << LED1);
}

void LED2_ON() {
    PORTD |= (1 << LED2);
}

void LED2_OFF() {
    PORTD &= ~(1 << LED2);
}

void init_Relay() {
    DDRA |= (1 << RELAY);
}

void Relay_ON() {
    PORTA |= (1 << RELAY);
}

void Relay_OFF() {
    PORTA &= ~(1 << RELAY);
}

void init_Buzzer() {
    DDRA |= (1 << BUZZER);
}

void Buzzer_ON() {
    PORTA |= (1 << BUZZER);
}

void Buzzer_OFF() {
    PORTA &= ~(1 << BUZZER);
}

void init_BTNs() {
    DDRB &= ~(1 << BTN0);

}

int isPressed(int ButtonNumber) {
    switch (ButtonNumber) {
        case BTN0:
            return (PINB & (1 << BTN0)) ? 1 : 0;
            
        case BTN1:
            return (PIND & (1 << BTN1)) ? 1 : 0;

        case BTN2:
            return (PIND & (1 << BTN2)) ? 1 : 0;
        default:
            return 0;
            }
  
    }

  