#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <exception>
using namespace std;

class CatchFishException : public exception
{
    const char *what() const noexcept override
    {
        return "Catch fish";
    }
};

class CatchTheshException : public exception
{
    const char *what() const noexcept override
    {
        return "Catch boot";
    }
};

void fishing(string l[10], int f)
{
    if (f > 10)
    {
        throw invalid_argument("sector");
    }
    if (l[f - 1] == "fish")
    {
        throw CatchFishException();
    }
    else if (l[f - 1] == "thesh")
    {
        throw CatchTheshException();
    }
}

int main()
{
    srand(time(nullptr));
    string lake[10];
    lake[rand() % 9] = "fish";
    for (int i = 0; i < 3; i++)
    {
        int f = rand() % 9;
        if (lake[f] != "fish")
        {
            lake[f] = "thesh";
        }
        else
        {
            --i;
        }
    }
    int attempts = 1;
    int slot;
    cout << "Enter sector number: ";
    cin >> slot;
    bool stop = false;
    while (!stop)
    {
        try
        {
            fishing(lake, slot);
            cout << "Enter sector number: ";
            cin >> slot;
            ++attempts;
        }
        catch (const CatchTheshException &e)
        {
            std::cerr << "Unlucky fishing, you catch boot." << endl;
            stop = true;
        }
        catch (const CatchFishException &e)
        {
            std::cerr << "Lucky,you catch fish for " << attempts << " attemps." << endl;
            stop = true;
        }
    }
}
