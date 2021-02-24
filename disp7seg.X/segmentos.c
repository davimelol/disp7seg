/*
 * File:   segmentos.c
 * Author: 20185086
 *
 * Created on 24 de Fevereiro de 2021, 14:29
 */


#include <xc.h>

void display7seg_init (void)
{     
TRISD = 0;
PORTD = 0;
}

void segmentos (int x) 
{
    PORTD = x;
}
