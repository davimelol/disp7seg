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
#include "contatores.h"

void main (void) 
{
    button.init ();
    segment.init ();
    contatores_init();
    int estado = 0;
    int s = 0; 
    while(1)
    {
        switch (estado)
        {        
            case 0:
                    estado = 1;
                    break;

            case 1:
                    if(button.on())
                    {    
                        K1 (1);
                        K2 (1);
                        estado = 2;
                    }    
                    break;      
            
            case 2:

                    delay (1000);
                    estado = 3;
                   
                    break;

            case 3:
                    K1 (1);
                    K2 (0);
                    K3 (1);                  
                    estado = 4;
                    break;
                    
                    case 4:
                    {    
                        segment.print(s);
                        if ( ++s >= 9 )
                        s = 0;                     
                        estado = 5;
                    }
                    break;
                                   
            case 5:
                    if(button.off())
                    {
                        K1 (0);
                        K2 (0);
                        K3 (0);
                        estado = 1;
                    }
                    
                    break;                           
        }
    }    
}