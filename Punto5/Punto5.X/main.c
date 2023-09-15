#include <xc.h>
#include "Confi.h"
#include "Secuencias.h"



void main(void){
    TRISB = 0b00001111;//TRISBbits.TRISB0=1;
    PORTB = 0x00;
    TRISC = 0x00;
    PORTC = 0x00;
    ANSELB = 0x00;
    int P=0;
    //Inicio();
    while(1){
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 0)){
            P=0;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 1)){
            P=1;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 1 &&  PORTBbits.RB3 == 0)){
            P=2;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 1 &&  PORTBbits.RB3 == 1)){
            P=3;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 1) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 0)){
            P=4;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 1) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 1)){
            P=5;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 1) &&  (PORTBbits.RB2 == 1 &&  PORTBbits.RB3 == 0)){
            P=6;
        }
        if((PORTBbits.RB0 == 0 &&  PORTBbits.RB1 == 1) &&  (PORTBbits.RB2 == 1 &&  PORTBbits.RB3 == 1)){
            P=7;
        }
        if((PORTBbits.RB0 == 1 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 0)){
            P=8;
        }
        if((PORTBbits.RB0 == 1 &&  PORTBbits.RB1 == 0) &&  (PORTBbits.RB2 == 0 &&  PORTBbits.RB3 == 1)){
            P=9;
        }
        Secuenciass(P);
    }
    return;
}

