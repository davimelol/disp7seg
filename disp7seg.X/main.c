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
#include "botoes.h"

void main (void) 
{
    segment.init ();
    int cont = 0;
    char estado = 0;
    botoes_init();
    
    switch(estado)
    {
        case 0:
            if( btliga() == 1 )
                estado = 1;
            break;
            
        case 1: 
            if ( btliga () == 0)
                estado = 2;
            break;
            
        case 2:
            ++cont;
            estado = 0;
            break;
    }    
    segment.print ( cont );  
    
    if(cont >=10 )
        cont = 0;
    
    if(cont <=0 ) )
        cont = 9;
    
}
