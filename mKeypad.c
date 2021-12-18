

#include "config.h"
void initKeyPad() {
    // Define ports directions
    setPinOUT(KeyPad_OUT_DIR, 0);
    setPinOUT(KeyPad_OUT_DIR, 1);
    setPinOUT(KeyPad_OUT_DIR, 2);
    //////////////////
    setPinIN(KeyPad_IN_DIR, 4); // 1,2 or 3
    setPinIN(KeyPad_IN_DIR, 5); // 4,5 or 6
    setPinIN(KeyPad_IN_DIR, 6);
    setPinIN(KeyPad_IN_DIR, 7);
    //////////////////

    KeyPad_OUT |= 0x07;
}

int getKey() {

    KeyPad_OUT |= 0x07;
    while (1) {
        if (KeyPad_IN & 0xF0) {
            if (KeyPad_IN & (1 << 4)) {
                // 1,2,3

                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 0);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 4)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(1);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 1;
                }

                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 1);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 4)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(2);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 2;
                }

                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 2);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 4)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(3);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 3;
                }

            } else if (KeyPad_IN & (1 << 5)) {
                // 4,5,6
                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 0);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 5)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(4);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 4;
                }

                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 1);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 5)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(5);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 5;
                }

                KeyPad_OUT &= 0xF8;
                _delay_ms(20);
                KeyPad_OUT |= (1 << 2);
                _delay_ms(20);
                if (KeyPad_IN & (1 << 5)) {
                    LCD_clear_4bits();
                    LCD_num_4bits(6);
                    KeyPad_OUT |= 0x07;
                    _delay_ms(20);
                    return 6;
                }
            } else if (KeyPad_IN & (1 << 6)) {
                // 7,8,9
                LCD_clear_4bits();
                LCD_num_4bits(3);
            } else if (KeyPad_IN & (1 << 7)) {
                // *,0,#
                LCD_clear_4bits();
                LCD_num_4bits(4);
            }
        }
    }

}
