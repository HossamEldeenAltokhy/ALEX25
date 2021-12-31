/* 
 * File:   mADC.h
 * Author: hossa
 *
 * Created on December 10, 2021, 1:58 PM
 */

#ifndef MADC_H
#define	MADC_H

#define _AREF   0
#define _AVCC   1
#define _2_56V  3

#define _PS2    0
#define _PS4    2
#define _PS8    3
#define _PS16   4
#define _PS32   5
#define _PS64   6
#define _PS128  7


#define CH0  0
#define CH1  1
#define CH2  2
#define CH3  3
#define CH4  4
#define CH5  5
#define CH6  6
#define CH7  7

#define CH0_CH1   16
void init_ADC(unsigned char ch, 
                unsigned char ref,
                unsigned char freq);

void ADC_SC();

short ADC_read();

#endif	/* MADC_H */

