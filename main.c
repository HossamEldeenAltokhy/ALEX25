



#include "config.h"
#include "mLCD_8bits.h"
#include "string.h"


// Address of my device
#define mAddress    0x05
// Address of destination  >>> R/W
#define SLA_R       0x03    // 00001111
#define SLA_W       0x02    // 00001110



void init_TWI();

int TWI_start();
int TWI_call(char SLA);
int TWI_send(unsigned data);
void TWI_stop();
int TWI_M_wait();
char TWI_M_receive();

void TWI_MT(char SLA, unsigned data);
char TWI_MR(char SLA);
int main(void) {
    /* Replace with your application code */
    setPortOUT(_PA);
    init_TWI();
    
    _delay_ms(1000);
    char data = TWI_MR(SLA_R);
    setPortData(_PA, data);
    
    while (1) {

        
        _delay_ms(500);

    }
}


void init_TWI(){
    TWAR = mAddress; // set for my address and enable GCE
    // configure SCL frequency 
    TWBR = 255;
}

int TWI_start(){
    TWCR |= (1<<TWSTA)|(1<<TWEN)|(1<<TWINT);
    // check TWINT flag
    while(!(TWCR & (1<<TWINT)));
    char status = TWSR & 0xF8;
    if(status == 0x08){
        // start condition is transmitted successfully.
        return 1;
    }else{
        return 0;
    }
}

int TWI_call(char SLA){
    TWDR = SLA;
    TWCR |= (1<<TWEN)|(1<<TWINT);
    // check TWINT flag
    while(!(TWCR & (1<<TWINT)));
    char status = TWSR & 0xF8;
    if(status == 0x18){
       return 1;// SLA+W 
    }
    else if(status == 0x40){
       return 2;  // SLA+R
    }
    else{
        return 0; // LOST
    }
}


int TWI_send(unsigned data){
    TWDR = data;
    TWCR |= (1<<TWEN)|(1<<TWINT);
    // check TWINT flag
    while(!(TWCR & (1<<TWINT)));
    char status = TWSR & 0xF8;
    if(status == 0x28){
        // data transmitted successfully
        return 1;
    }else{
        return 0;
    }
}

void TWI_stop(){
    TWCR |= (1<<TWSTO)|(1<<TWEN)|(1<<TWINT);
}


void TWI_MT(char SLA, unsigned data){
    
    if(TWI_start()){
        if(TWI_call(SLA)==1){
            TWI_send(data);
            TWI_stop();
        }
    }
    
   
}

int TWI_M_wait(){
    TWCR |= (1<<TWEA) | (1<<TWINT)|(1<<TWEN);
    while(!(TWCR & (1<<TWINT)));
    char status = TWSR & 0xF8;
    if(status == 50){
        return 1;
    }
    else{
        return 0;
    }
}

char TWI_M_receive(){
    return TWDR;
}

char TWI_MR(char SLA){
    
    int data;
    if(TWI_start()){
        if(TWI_call(SLA_R)==2){
            TWI_M_wait();
            data = TWI_M_receive();
            TWI_stop();
            return data;
        }
    }
    
    return 0;
}

