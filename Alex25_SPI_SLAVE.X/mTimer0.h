/* 
 * File:   mTimer0.h
 * Author: hossa
 *
 * Created on December 18, 2021, 10:30 AM
 */

#ifndef MTIMER0_H
#define	MTIMER0_H

// Clock Select Values
#define Timer_OFF    0
#define Timer_NoPS   1
#define Timer_PS8    2
#define Timer_PS64   3
#define Timer_PS256  4
#define Timer_PS1024 5
#define Timer_Ex_F   6
#define Timer_Ex_R   7

// Timer Modes
#define NormalMode  0
#define PWM         1
#define CTC         2
#define FPWM        3

// Interrupts
#define TOV0        0
#define OCF0        1

void init_Timer0(unsigned char mode, unsigned char Clk);
void setCompareValue(unsigned char ocrValue);
void setDutyCycle(unsigned char dutyCycle_percentage);
void Timer0_enableINT(unsigned char INT);
#endif	/* MTIMER0_H */

