/* 
 * File:   config.h
 * Author: hossa
 *
 * Created on December 4, 2021, 12:47 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#define true 1
#define false 0
#define HIGH 1
#define LOW 0



#define F_CPU 16000000UL
#include <avr/io.h>
#include "mDIO.h"
#include "mExternalINT.h"
#include "mKIT.h"
#include "mLCD_4bits.h"
#include "mKeypad.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include "mADC.h"

#endif	/* CONFIG_H */

