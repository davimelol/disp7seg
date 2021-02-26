#ifndef SEGMENTOS_H
#define SEGMENTOS_H

void segmentos (char c);
void display7seg_init (void);

struct display7seg_t
{
    void (*init) (void);
    void (*print) (char c);
} segment = { display7seg_init , segmentos };

#endif