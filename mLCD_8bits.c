#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "mLCD_8bits.h"
#include "mDIO.h"
#include <stdlib.h>

void initLCD(void){
    
    // init DIO
    setPortOUT(LCD_DATA_DIR);
    setPinOUT(controlBits_DIR, EN);
    setPinOUT(controlBits_DIR, RS);
    setPinOUT(controlBits_DIR, RW);
   
    // init LCD Controller
    resetPin(controlBits, RW); // Write Only
    
    LCD_clear();
    LCD_cmd(0x38); // Two Line 
    LCD_cmd(0x02); // Return Home
    LCD_cmd(0x80); // Force cursor to beginning of first line
    LCD_cmd(0x0C); // Display ON , Cursor OFF
    
    
    _delay_ms(50); //??????
    
}

void LCD_cmd(char cmd){
    resetPin(controlBits, RS);
    setPortData(LCD_DATA, cmd);
    LCD_EN();
}

void LCD_write(char data){
    setPin(controlBits, RS);
    setPortData(LCD_DATA, data);
    LCD_EN();
}

void LCD_EN(){
    setPin(controlBits, EN);
    _delay_ms(10);
    resetPin(controlBits, EN);
}

void LCD_clear(){
    LCD_cmd(0x01);
}

void LCD_str(char* str){
    for(int i=0 ; str[i]!= '\0' ; i++){
        LCD_write(str[i]);
    }
}

void LCD_num(int data){
    
    char buffer[11];
    itoa(data , buffer , 10);
    LCD_str(buffer);
           
    
}