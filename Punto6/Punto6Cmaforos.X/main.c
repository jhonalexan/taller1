#include <xc.h>
#include "confi.h"

void main(void){
    TRISD =0x00;
    PORTD =0x00;
    //int t=30;
    while(1){
        
        
        //Verdes
        LATDbits.LATD0=1;
        LATDbits.LATD2=0;
        LATDbits.LATD4=0;
        //Rojo
        LATDbits.LATD1=0;
        LATDbits.LATD3=1;
        LATDbits.LATD5=1;
        __delay_ms(30);
        //Verdes
        LATDbits.LATD0=0;
        LATDbits.LATD2=1;
        LATDbits.LATD4=0;
        //Rojo
        LATDbits.LATD1=1;
        LATDbits.LATD3=0;
        LATDbits.LATD5=1;
        __delay_ms(30);
        //Verdes
        LATDbits.LATD0=0;
        LATDbits.LATD2=0;
        LATDbits.LATD4=1;
        //Rojo
        LATDbits.LATD1=1;
        LATDbits.LATD3=1;
        LATDbits.LATD5=0;
        __delay_ms(30);
    }
    return;
}

