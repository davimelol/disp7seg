/*
 * File:   segmentos.c
 * Author: 20185086
 *
 * Created on 24 de Fevereiro de 2021, 14:29
 */


#include <xc.h>

char vetor[16] = { 0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 
0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71, };

void display7seg_init (void)
{     
TRISD = 0;
PORTD = 0;
}

void segmentos (int x) 
{
    if(x >= 0 && <= 15)
    PORTD = vetor [x];
    else
    PORTD = 0x00;
}
