/* 
 * File:   mLCD_8bits.h
 * Author: hossa
 *
 * Created on November 27, 2021, 12:50 PM
 */

#ifndef MLCD_8BITS_H
#define	MLCD_8BITS_H

#define controlBits       _PB
#define controlBits_DIR   _PB

#define LCD_DATA          _PD
#define LCD_DATA_DIR      _PD

#define EN                0
#define RS                2
#define RW                1

void initLCD(void);
void LCD_write(char data);
void LCD_cmd(char cmd);

void LCD_str(char* str);
void LCD_num(int data);

void LCD_clear();
void LCD_goto_xy(int row, int coln);

void LCD_shiftRight(int);
void LCD_shiftLeft(int);
void LCD_EN();
#endif	/* MLCD_8BITS_H */

