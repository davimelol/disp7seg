/*
 * File:   botoes.c
 * Author: 20185086
 *
 * Created on 26 de Fevereiro de 2021, 14:46
 */


#include <xc.h>


void botoes_init (void) 
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
}

char btliga (void)
{
    return(PORTDbits.RD1); 
}

char btdesliga (void)
{
     return(PORTDbits.RD0); 
}
