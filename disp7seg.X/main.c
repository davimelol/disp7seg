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
    
    while(1)
    {
        switch(estado)
        {
            case 0:
                if( btliga() == 1 )
                    estado = 1;
                if(btdesliga() == 1)
                    estado = 2;
                break;
            case 1:
                if(cont >=9 )
                ++cont;    
                else 
                    cont = 0;
                    estado = 3;
                break;
            case 2:
                if(cont > 0 )
                --cont;
                else
                    cont = 9;
                estado = 3;
                break;
        }    
        segment.print ( cont );  
    
        if(cont >=10 )
            cont = 0;
    
        if(cont <=0 ) 
            cont = 9;
    }
}
