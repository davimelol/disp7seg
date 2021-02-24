/*
 * File:   main.c
 * Author: 20185086
 *
 * Created on 24 de Fevereiro de 2021, 14:05
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "segmentos.h" 

void main (void) 
{
    display7seg_init();
    int cont = 0;
    
    while(1)
    {
       segmentos ( cont );
       delay(1000);
       cont++;
       if (cont >= 16)
           cont = 0;
    }        
}
