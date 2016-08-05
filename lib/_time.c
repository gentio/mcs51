
void delayms(unsigned int i)
{
    unsigned char j;
    for (; i > 0; i--)
        for (j = 110; j > 0; j--);
}
