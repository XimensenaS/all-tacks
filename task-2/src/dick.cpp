#include "disk.h"
#include <fstream>

void save(int buffer[8])
{
    ofstream file("**/files/data.txt");
    for (int i = 0; i < 8; i++)
    {
        int num = reads(i, buffer);
        file  << num << endl;
    }
    file.close();
}

void load(int buffer[8])
{
    ifstream file("**/files/data.txt");
    for (int i = 0; i < 8; i++)
    {
        int num;
        file >> num >> endl;
        writed(num,i,buffer);
    }
    file.close();
}