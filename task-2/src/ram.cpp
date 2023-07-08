#include "ram.h"

int reads(int q,int buffer[8])
{
    return buffer[q];
}

void writed(int z,int q,int buffer[8])
{
    buffer[q] = z;
}