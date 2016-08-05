#include "fun.h"

void main()
{
    unsigned char tmp = 0xaa;
    while (1)
    {
        tmp = circlemove(LEFT, tmp);
        P1  = tmp;
        delayms(499);

    }
}
