/*
 * File:   main 2.c
 * Author: 20185086
 *
 * Created on 3 de Março de 2021, 16:27
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
    int estado = 0;
    int cont = 0;
    while(1)
    {
        switch (estado)
        {        
            case 0:
                estado = 1;
                break;
            
            case 1:
                K1 (1);
                K2 (1);
                estado = 2;
                break;      
            
            case 2:
                cont = 3000;
                estado = 3;
                break;

            case 3:
                K1 (1);
                K2 (0);
                K3 (1);
                estado = 4;
                    break;
            
            case 4:
                if(button.off())
                    K1 (0);
                    K2 (0);
                    K3 (0);                                         
        }
    }    
}
    