#ifndef BOTOES_H
#define BOTOES_H

void botoes_init (void);
int B1 (void);
int B2 (void);

#define btliga  PORTDbits.RD1;  
#define btdesliga  PORTDbits.RD0;

#endif