



#include "config.h"
#include "mLCD_8bits.h"
#include "string.h"


#define  MASTER  1
#define  SLAVE   0

#define  SPI_CLK 3

#define  MOSI   5 
#define  MISO   6 
#define  SCK    7
#define  SS     4

void init_SPI(unsigned char mode);
void SPI_write(unsigned char data);
char SPI_read(void);

int main(void) {
    /* Replace with your application code */
    initLCD_4bits();
    init_SPI(SLAVE);
  
    

    while (1) {

        char data = SPI_read();
        LCD_clear_4bits();
        LCD_write_4bits(data);

    }
}


void init_SPI(unsigned char mode){
    
    if(mode){
        // MASTER
        // DATA DIRECTION
        setPinOUT(_PB, MOSI);
        setPinOUT(_PB, SCK);
        setPinOUT(_PB, SS);
        // ENABLE SPI, SELECT CLK, ENABLE MASTER MODE
        SPCR |= (1<<SPE)|(1<<MSTR)|SPI_CLK;
        
    }else{
        // SLAVE
        // DATA DIRECTION
        setPinOUT(_PB, MISO);
        SPCR |= (1<<SPE);
    }
    
    
}

void SPI_write(unsigned char data){
    SPDR = data;
    while(!(SPSR & (1<<SPIF)));  // waiting for 8 clocks.
}

char SPI_read(void){
    while(!(SPSR & (1<<SPIF)));
    return SPDR;
}