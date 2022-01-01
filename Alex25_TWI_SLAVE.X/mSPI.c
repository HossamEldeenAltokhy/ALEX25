#include "config.h"


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

char SPI_write(unsigned char data){
    SPDR = data;
    while(!(SPSR & (1<<SPIF)));  // waiting for 8 clocks.
    return SPDR;
}

char SPI_read(void){
    while(!(SPSR & (1<<SPIF)));
    return SPDR;
}
