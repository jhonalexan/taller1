#ifndef SECUENCIAS_H
#define	SECUENCIAS_H

#include <xc.h>
#include "Confi.h"

#define Led0  LATCbits.LATC0
#define Led1  LATCbits.LATC1
#define Led2  LATCbits.LATC2
#define Led3  LATCbits.LATC3
#define Led4  LATCbits.LATC4
#define Led5  LATCbits.LATC5
#define Led6  LATCbits.LATC6
#define Led7  LATCbits.LATC7


void Inicio(void);
void Secuenciass(int P1);
void Secuencia0();
void Secuencia1();
void Secuencia2();
void Secuencia3();
void Secuencia4();
void Secuencia5();
void Secuencia6();
void Secuencia7();
void Secuencia8();
void Secuencia9();

#endif	/* SECUENCIAS_H */