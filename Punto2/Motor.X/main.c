#include <xc.h>
#include "Confi.h"

void main(void){
    TRISA = 0b00001100;//
    PORTA = 0x00;//Todo en 0
    ANSELA = 0x00;//Desactivo Analogica
    while(1){
        if (PORTAbits.RA2 == 0 & PORTAbits.RA3 == 0){
            LATA = 0b00000000;
            __delay_ms(5);
        }
        if (PORTAbits.RA2 == 1 & PORTAbits.RA3 == 0){
            LATA = 0b00000001;
            __delay_ms(5);
        }
        if (PORTAbits.RA2 == 0 & PORTAbits.RA3 == 1){
            LATA = 0b00000010;
            __delay_ms(5);
        }
        if (PORTAbits.RA2 == 1 & PORTAbits.RA3 == 1){
            LATA = 0b00000011;
            __delay_ms(5);
        }
            
        
            
        
        
    return;
    }
}

