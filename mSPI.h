/* 
 * File:   mSPI.h
 * Author: hossa
 *
 * Created on January 1, 2022, 11:36 AM
 */

#ifndef MSPI_H
#define	MSPI_H

#define  MASTER  1
#define  SLAVE   0

#define  SPI_CLK 3

#define  MOSI   5 
#define  MISO   6 
#define  SCK    7
#define  SS     4

void init_SPI(unsigned char mode);
char SPI_write(unsigned char data);
char SPI_read(void);

#endif	/* MSPI_H */

