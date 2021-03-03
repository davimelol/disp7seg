#ifndef BOTOES_H
#define BOTOES_H

void botoes_init    (void);
char btliga         (void);
char btdesliga      (void);

struct botao_t
{
     void (*init)(void);
     char (*on)  (void);
     char (*off) (void);
    
} button = { botoes_init , btliga , btdesliga };

#endif
