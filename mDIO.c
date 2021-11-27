#include <avr/io.h>
#include "mDIO.h"

// Direction

void setPortOUT(int PORT_No) {
    switch (PORT_No) {
        case _PA:
            DDRA = 0xFF;
            break;

        case _PB:
            DDRB = 0xFF;
            break;

        case _PC:
            DDRC = 0xFF;
            break;

        case _PD:
            DDRD = 0xFF;
            break;

    }
}

void setPortIN(int PORT_No) {
    switch (PORT_No) {
        case _PA:
            DDRA = 0x00;
            break;

        case _PB:
            DDRB = 0x00;
            break;

        case _PC:
            DDRC = 0x00;
            break;

        case _PD:
            DDRD = 0x00;
            break;

    }
}

void setPinOUT(int PORT_No, int PIN_No) {
    switch (PORT_No) {
        case _PA:
            DDRA |= (1 << PIN_No);
            break;

        case _PB:
            DDRB |= (1 << PIN_No);
            break;

        case _PC:
            DDRC |= (1 << PIN_No);
            break;

        case _PD:
            DDRD |= (1 << PIN_No);
            break;

    }
}

void setPinIN(int PORT_No, int PIN_No) {
    switch (PORT_No) {
        case _PA:
            DDRA &= ~(1 << PIN_No);
            break;

        case _PB:
            DDRB &= ~(1 << PIN_No);
            break;

        case _PC:
            DDRC &= ~(1 << PIN_No);
            break;

        case _PD:
            DDRD &= ~(1 << PIN_No);
            break;

    }
}

void setPin_A(int PIN_No, int state) {
    if (state) {
        PORTA |= (1 << PIN_No);
    } else {
        PORTA &= ~(1 << PIN_No);

    }
}