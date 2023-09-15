#include <xc.h>
#include "Confi.h"
char T=10;
void main(void){
    TRISD = 0x00;
    PORTD = 0x00;
    while(1){
        __delay_ms(T);
        PORTD = 0b00000001;
        __delay_ms(T);
        PORTD = 0b00000010;
        __delay_ms(T);
        PORTD = 0b00000100;
        __delay_ms(T);
        PORTD = 0b00001000;
        __delay_ms(T);
        PORTD = 0b00010000;
        __delay_ms(T);
        PORTD = 0b00100000;
        __delay_ms(T);
        PORTD = 0b01000000;
        __delay_ms(T);
        PORTD = 0b10000000;
        __delay_ms(T);
        PORTD = 0b01000000;
        __delay_ms(T);
        PORTD = 0b00100000;
        __delay_ms(T);
        PORTD = 0b00010000;
        __delay_ms(T);
        PORTD = 0b00001000;
        __delay_ms(T);
        PORTD = 0b00000100;
        __delay_ms(T);
        PORTD = 0b00000010;
        __delay_ms(T);
        PORTD = 0b00000001;
    return;
    }
}

