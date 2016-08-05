#include <8052.h>

unsigned char code DIG_PLACE[8] = {
0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
unsigned char code DIG_CODE[17] = {
0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
//0、1、2、3、4、5、6、7、8、9、A、b、C、d、E、F
void delayms(unsigned int i);
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

void delayms(unsigned int i)
{
    unsigned char j;
    for (; i > 0; i--)
        for (j = 110; j > 0; j--);
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
