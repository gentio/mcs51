#include <8052.h>
#define LEFT 1
#define RIGHT 0

unsigned char
cylemove(int dir,unsigned char value)
{
    unsigned char tmp;
    if(dir)
    {
        tmp = value & 0x80;
        tmp >>= 7;
        value <<= 1;
        value |= tmp;
        return  value;

    } else {
        tmp = value & 0x01;
        tmp <<= 7;
        value >>= 1;
        value |= tmp;
        return  value;
    }

}
void delayms(unsigned int ms)
{
    unsigned char j;
    unsigned int i;
    for (i = ms; i > 0; i--)
        for (j = 110; j > 0; j--);
}

void main()
{
    unsigned char tmp = 0xaa;
    while (1)
    {
        tmp = cylemove(LEFT, tmp);
        P1  = tmp;
        delayms(499);

    }
}
