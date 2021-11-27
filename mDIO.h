/* 
 * File:   mDIO.h
 * Author: hossa
 *
 * Created on November 27, 2021, 11:32 AM
 */

#ifndef MDIO_H
#define	MDIO_H

#define _PA    0
#define _PB    1
#define _PC    2
#define _PD    3

#define HIGH 1
#define LOW  0
// Direction
void setPortOUT(int PORT_No);
void setPortIN(int PORT_No);

void setPinOUT(int PORT_No, int PIN_No);
void setPinIN(int PORT_No, int PIN_No);
// PORT DATA OUT
void setPortData(int PORT_No, unsigned char data);
void setPin_A(int PIN_No, int state);
void setPin_B(int PIN_No, int state);
void setPin_C(int PIN_No, int state);
void setPin_D(int PIN_No, int state);
// READ DATA IN
// CHECK

#endif	/* MDIO_H */

