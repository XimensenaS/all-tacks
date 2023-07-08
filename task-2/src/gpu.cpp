#include "gpu.h"

void display(int buffer[8])
{
    for (int i = 0; i < 8; i++)
    {    
        cout << reads(i,buffer);
    }
    cout << endl;
}