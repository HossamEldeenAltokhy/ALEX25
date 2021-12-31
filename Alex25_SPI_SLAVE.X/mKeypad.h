/* 
 * File:   mKeypad.h
 * Author: hossa
 *
 * Created on December 4, 2021, 12:44 PM
 */

#ifndef MKEYPAD_H
#define	MKEYPAD_H


#define KeyPad_OUT      PORTA
#define KeyPad_IN       PINA
#define KeyPad_OUT_DIR      _PA
#define KeyPad_IN_DIR      _PA



void initKeyPad();
int getKey();

#endif	/* MKEYPAD_H */

