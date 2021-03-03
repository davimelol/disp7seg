/*
 * File:   contatores.c
 * Author: 20185086
 *
 * Created on 3 de Março de 2021, 16:10
 */


#include <xc.h>

void contatores_init (void) 
{
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD4 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD4 = 0;           
}

void K1 (int x)
{
    PORTDbits.RD2 = x;
}
void K2 (int x)
{
    PORTDbits.RD3 = x;
}
void K3 (int x)
{
    PORTDbits.RD4 = x;
}
