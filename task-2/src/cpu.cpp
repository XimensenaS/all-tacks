#include "cpu.h"

void comparing(int buffer[8])
{
    int sum = 0;
    for (int z = 0; z < 8; z++)
    {
        sum += reads(z,buffer);
    }

    cout << sum << endl;
}
