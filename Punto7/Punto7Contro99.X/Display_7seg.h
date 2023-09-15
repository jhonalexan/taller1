#ifndef DISPLAY_7_SEG.H
#define	DISPLAY_7_SEG.H

#include <xc.h>
#include "Confi.h"

#define DIR_segCCA   TRISBbits.TRISB0 //Catodo Comun
#define DIR_segCCB   TRISBbits.TRISB1
#define DIR_segCCC   TRISBbits.TRISB2
#define DIR_segCCD   TRISBbits.TRISB3
#define DIR_segCCE   TRISBbits.TRISB4
#define DIR_segCCF   TRISBbits.TRISB5
#define DIR_segCCG   TRISBbits.TRISB6
#define DIR_segAc2G   TRISBbits.TRISB7

#define segCCA  LATBbits.LATB0 
#define segCCB  LATBbits.LATB1
#define segCCC  LATBbits.LATB2
#define segCCD  LATBbits.LATB3
#define segCCE  LATBbits.LATB4
#define segCCF  LATBbits.LATB5
#define segCCG  LATBbits.LATB6
#define segAc2G  LATBbits.LATB7

#define DIR_segACA   TRISAbits.TRISA0 //Anodo Comun
#define DIR_segACB   TRISAbits.TRISA1
#define DIR_segACC   TRISAbits.TRISA2
#define DIR_segACD   TRISAbits.TRISA3
#define DIR_segACE   TRISAbits.TRISA4
#define DIR_segACF   TRISAbits.TRISA5
#define DIR_segACG   TRISAbits.TRISA6

#define segACA  LATAbits.LATA0 //Catodo Comun
#define segACB  LATAbits.LATA1
#define segACC  LATAbits.LATA2
#define segACD  LATAbits.LATA3
#define segACE  LATAbits.LATA4
#define segACF  LATAbits.LATA5
#define segACG  LATAbits.LATA6
/*
#define DIR_segACA   TRISDbits.TRISD0 //Anodo Comun
#define DIR_segACB   TRISDbits.TRISD1
#define DIR_segACC   TRISDbits.TRISD2
#define DIR_segACD   TRISDbits.TRISD3
#define DIR_segACE   TRISDbits.TRISD4
#define DIR_segACF   TRISDbits.TRISD5
#define DIR_segACG   TRISDbits.TRISD6

#define segACA  LATDbits.LATD0 //Catodo Comun
#define segACB  LATDbits.LATD1
#define segACC  LATDbits.LATD2
#define segACD  LATDbits.LATD3
#define segACE  LATDbits.LATD4
#define segACF  LATDbits.LATD5
#define segACG  LATDbits.LATD6*/

#define OUT 0
#define IN  1

void display_init(void);
void display_Ac(int dig);
void display_Cc(int dig);

#endif	/* DISPLAY_7_SEG_H */

