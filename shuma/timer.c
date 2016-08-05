#include <fun.h>

unsigned char shi = 0, ge = 0;
unsigned char num = 0, num2 = 0;

void display(unsigned char shi, unsigned char ge);

void main()
{
    TMOD = 0x01;

    TH0 = (65536 - 45872) / 256;
    TL0 = (65536 - 45872) % 256;
    EA  = 1;
    ET0 = 1;
    TR0 = 1;

    while(1){


        display(shi, ge);

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

void timer0(void) __interrupt 1
{
    TH0 = (65536 - 45872) / 256;

    TL0 = (65536 - 45872) % 256;

    num2++;
    if (num2 == 20){
        num2 = 0;
        num++;
        if (num == 60)
            num = 0;
        shi = num / 10;
        ge  = num % 10;
    }
}
