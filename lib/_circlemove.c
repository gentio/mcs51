
unsigned char
circlemove(int dir,unsigned char value)
{
    unsigned char tmp;
    if(dir)
    {
        tmp = value & 0x80;
        tmp >>= 7;
        value <<= 1;
        value |= tmp;

    } else {
        tmp = value & 0x01;
        tmp <<= 7;
        value >>= 1;
        value |= tmp;
    }

    return  value;
}
