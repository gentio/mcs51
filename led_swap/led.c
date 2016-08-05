#include <8052.h>
void delayms(unsigned int ms)
{
    unsigned char j;
    unsigned int i;
    for (i = ms; i > 0; i--)
        for (j = 110; j > 0; j--);
}
void main()
{
    while(1){
        P2 = 0xff;
        delayms(499);
        P2 = 0x0;
        delayms(499);
    }
}
