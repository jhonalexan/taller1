#include <xc.h>
#include "confi.h"
#include "DISPLAY_7SEG.h"

char decoCC[]={191,134,219,207,230,237,253,135,255,231};//Areglo numemrico 
char decoAC[]={64,121,36,48,25,18,2,120,0,24};
char contador=0;
int U=0,D=0,A=0,T=3;
//LATDbits.LATD0=1;
void main(void){
    TRISB= 0x00;
    ANSELB =0x00;
    TRISAbits.TRISA0=0;//Salidas
    ANSELAbits.ANSA0=0;
    TRISAbits.TRISA1=0;
    ANSELAbits.ANSA1=0;
    TRISAbits.TRISA2=1;//Entradas
    ANSELAbits.ANSA2=0;
    TRISAbits.TRISA3=1;
    ANSELAbits.ANSA3=0;
    
    //display_init();//Hay que arreglar esto
    
    
    while(1){
        if(PORTAbits.RA2 == 1 && PORTAbits.RA3 == 0){//Ascendente
            A=0;
            LATAbits.LATA1 = 0;
            LATAbits.LATA0 = 1;
            LATB = decoCC[D];
            __delay_ms(T);
            LATAbits.LATA1 = 1;
            LATAbits.LATA0 = 0;
            LATB = decoCC[U];
            __delay_ms(T);
            U++;
            if(U==9){
                D++;
                U=0;
            }
            if(D==10){
                D=0;
                U=0;
            }
        }
        if(PORTAbits.RA2 == 0 && PORTAbits.RA3 == 1){//Descendente
            A=1;
            LATAbits.LATA1 = 0;
            LATAbits.LATA0 = 1;
            LATB = decoCC[D];
            __delay_ms(T);
            LATAbits.LATA1 = 1;
            LATAbits.LATA0 = 0;
            LATB = decoCC[U];
            __delay_ms(T);
            U--;
            if(U==0){
                D--;
                U=9;
            }
            if(D==0){
                D=9;
                U=9;
            }
        }
        if(PORTAbits.RA2 == 1 && PORTAbits.RA3 == 1){//Pausa
            A=2;
                LATAbits.LATA1 = 0;
                LATAbits.LATA0 = 1;
                LATB = decoCC[D];
                __delay_ms(T);
                LATAbits.LATA1 = 1;
                LATAbits.LATA0 = 0;
                LATB = decoCC[U];
                __delay_ms(T);
        } 
        if(PORTAbits.RA2 == 0 && PORTAbits.RA3 == 0){//Ultima accion con paso de dos
            if(A==0){//Ascendente
                LATAbits.LATA1 = 0;
                LATAbits.LATA0 = 1;
                LATB = decoCC[D];
                __delay_ms(T);
                LATAbits.LATA1 = 1;
                LATAbits.LATA0 = 0;
                LATB = decoCC[U];
                __delay_ms(T);
                U=U+2;
                if(U>9){
                    D++;
                    U=0;
                }
                if(D>9){
                    D=0;
                    U=0;
                }
            }
            if(A==1){//Descenten
                LATAbits.LATA1 = 0;
                LATAbits.LATA0 = 1;
                LATB = decoCC[D];
                __delay_ms(T);
                LATAbits.LATA1 = 1;
                LATAbits.LATA0 = 0;
                LATB = decoCC[U];
                __delay_ms(T);
                U=U-2;
                if(U<=0){
                    D--;
                    U=9;
                }
                if(D<0){
                    D=9;
                    U=9;
                }
            }
            if(A==2){//Pausa
                LATAbits.LATA1 = 0;
                LATAbits.LATA0 = 1;
                LATB = decoCC[D];
                __delay_ms(T);
                LATAbits.LATA1 = 1;
                LATAbits.LATA0 = 0;
                LATB = decoCC[U];
                __delay_ms(T);
            }     
        }  
    }
    return;
}

