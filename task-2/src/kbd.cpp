#include "kbd.h"

void reading(int buffer[8])
{
    cout << "Enter numbers"<< endl;
    for (int i = 0; i < 8; i++)
    {    
        int num;
        cin >> num;
        writed(num,i,buffer);
    }
}