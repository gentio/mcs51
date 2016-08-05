#include "fun.h"

void display(unsigned char shi, unsigned char ge);
void main()
{

    unsigned char shi = 0, ge = 0;

    unsigned char tmp;
    while(1){
        if (ge  == 10){
            ge  = 0;
            shi ++;
        }
        if (shi == 6)
            shi = 0;

        for (tmp = 80; tmp > 0; tmp--)
            display(shi, ge);

        ge++;

    }
}

void display(unsigned char shi, unsigned char ge)
{
    P1 = DIG_PLACE[0];
    P0 = DIG_CODE[ge];
    delayms(2);
    P0 = 0x0;

    P1 = DIG_PLACE[1];
    P0 = DIG_CODE[shi];
    delayms(2);
    P0 = 0x0;
}
