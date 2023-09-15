#include <xc.h>
#include <pic16f1939.h>
#include "confi.h"

char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};
//LATDbits.LATD0=1  PORTDbits.RD0 == 0 
int P1=1,P2=2,P3=3,P4=4,P5=5,P6=6,T=20,T2=500,Ayu=0,PosiAlar=0;
int Ayuda[5];
void Inicio(){
        LATCbits.LATC0 = 1;//0
        LATCbits.LATC1 = 0;
        LATCbits.LATC2 = 0;
        LATCbits.LATC3 = 0;
        LATCbits.LATC4 = 0;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P1];
        __delay_ms(T);
        LATCbits.LATC0 = 0;//1
        LATCbits.LATC1 = 1;
        LATCbits.LATC2 = 0;
        LATCbits.LATC3 = 0;
        LATCbits.LATC4 = 0;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P2];
        __delay_ms(T);
        LATCbits.LATC0 = 0;//2
        LATCbits.LATC1 = 0;
        LATCbits.LATC2 = 1;
        LATCbits.LATC3 = 0;
        LATCbits.LATC4 = 0;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P3];
        __delay_ms(T);
        LATCbits.LATC0 = 0;
        LATCbits.LATC1 = 0;
        LATCbits.LATC2 = 0;
        LATCbits.LATC3 = 1;
        LATCbits.LATC4 = 0;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P4];
        __delay_ms(T);
        LATCbits.LATC0 = 0;
        LATCbits.LATC1 = 0;
        LATCbits.LATC2 = 0;
        LATCbits.LATC3 = 0;
        LATCbits.LATC4 = 1;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P5];
        __delay_ms(T);
        LATCbits.LATC0 = 0;
        LATCbits.LATC1 = 0;
        LATCbits.LATC2 = 0;
        LATCbits.LATC3 = 0;
        LATCbits.LATC4 = 1;
        LATCbits.LATC5 = 0;
        LATD = decoCC[P6];
        __delay_ms(T);
}
void Alarma(){
    Ayuda[0]=P1; Ayuda[1]=P2; Ayuda[2]=P3; Ayuda[3]=P4; Ayuda[4]=P5; Ayuda[5]=P6; 
    if(PORTBbits.RB2==1){
        while(PORTBbits.RB2==1);
        PosiAlar++;
        __delay_ms(500);
    }
    if(PosiAlar>5){
        __delay_ms(20);
        PosiAlar=0;
    }
    if(PORTBbits.RB0==1){
        while(PORTBbits.RB0==1);
        PosiAlar--;
        __delay_ms(500);
    }
    if(PosiAlar<0){
        __delay_ms(20);
        PosiAlar=6;
    }
    switch(PosiAlar){
        case 0:
            LATCbits.LATC0 = 1;
            LATCbits.LATC1 = 0;
            LATCbits.LATC2 = 0;
            LATCbits.LATC3 = 0;
            LATCbits.LATC4 = 0;
            LATCbits.LATC5 = 0;
            LATD = decoCC[P1];
            if(PORTBbits.RB1==1){
                P1++;
                __delay_ms(500);
            }
        break;
        case 1:
            LATCbits.LATC0 = 0;
            LATCbits.LATC1 = 1;
            LATCbits.LATC2 = 0;
            LATCbits.LATC3 = 0;
            LATCbits.LATC4 = 0;
            LATCbits.LATC5 = 0;
            LATD = decoCC[P2];
            if(PORTBbits.RB1==1){
                P2++;
                __delay_ms(500);
            }
        break;
        case 2:
            LATCbits.LATC0 = 0;
            LATCbits.LATC1 = 0;
            LATCbits.LATC2 = 1;
            LATCbits.LATC3 = 0;
            LATCbits.LATC4 = 0;
            LATCbits.LATC5 = 0;
            LATD = decoCC[P3];
            if(PORTBbits.RB1==1){
                P3++;
                __delay_ms(500);
            }
        break;
        case 3:
            LATCbits.LATC0 = 0;
            LATCbits.LATC1 = 0;
            LATCbits.LATC2 = 0;
            LATCbits.LATC3 = 1;
            LATCbits.LATC4 = 0;
            LATCbits.LATC5 = 0;
            LATD = decoCC[P4];
            if(PORTBbits.RB1==1){
                P4++;
                __delay_ms(500);
            }
        break;
        case 4:
            LATCbits.LATC0 = 0;
            LATCbits.LATC1 = 0;
            LATCbits.LATC2 = 0;
            LATCbits.LATC3 = 0;
            LATCbits.LATC4 = 1;
            LATCbits.LATC5 = 0;
            LATD = decoCC[P5];
            if(PORTBbits.RB1==1){
                P5++;
                __delay_ms(500);
            }
        break;
        case 5:
            LATCbits.LATC0 = 0;
            LATCbits.LATC1 = 0;
            LATCbits.LATC2 = 0;
            LATCbits.LATC3 = 0;
            LATCbits.LATC4 = 0;
            LATCbits.LATC5 = 1;
            LATD = decoCC[P6];
            if(PORTBbits.RB1==1){
                P6++;
                __delay_ms(500);
            }
        break;
    }   
}
void main(void){
    TRISD=0x00;
    TRISC=0b11000000;
    TRISB=0x0F;
    PORTD=0x00;
    PORTC=0x00;
    PORTB=0x00;
    while(1){
        Inicio();
        if(PORTCbits.RC6==1){
            Alarma();
        }
        if(Ayuda[0]==P1 && Ayuda[1]==P2 && Ayuda[2]==P3 && Ayuda[3]==P4 && Ayuda[4]==P5 && Ayuda[5]==P6){
            LATBbits.LATB7=1;
        }
    }
    return;
}