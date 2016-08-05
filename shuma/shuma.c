#include "fun.h"

void main()
{

    while(1){
        unsigned char i;
        for (i = 0; i < 8; i++){
            P0 = DIG_CODE[i];
            P1 = DIG_PLACE[i];
            delayms(2);
            P1 = 0x0;

                }

    }
}
