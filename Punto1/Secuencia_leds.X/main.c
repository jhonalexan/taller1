#include <xc.h>
#include "Confi.h"

char T=5000;
int i,j;
void main(void){
    TRISD = 0x00;
    LATD = 0x00;
    
    while(1){
        for(i=0; i<8; i++){
            __delay_ms(T);
            LATD |= (1<<i);
            __delay_ms(T);
            LATD &= ~(1<<i);
            if (i==7){
                for(j=6; j>-1; j--){
                    __delay_ms(T);
                    LATD |= (1<<j);
                    __delay_ms(T);
                    LATD &= ~(1<<j);
                }
                i=0;
            }
            j=6;
        }
    return;
    }
}
