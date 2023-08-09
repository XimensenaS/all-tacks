#include <string>
#include <iostream>
#include <vector>
#include <exception>

using namespace std;
template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array (8):";
    for (int i = 0; i < 8; ++i)
    {
        cin >> array[i];
    }
}

template < typename T >
T calculating(T array[8])
{
    T am = 0;
    std::cout << "Arithmetic mean:";
    for (int i = 0; i < 8; ++i)
    {
        am += array[i];
    }
    return am /= 8;
}

int main()
{
    int a[8];
    input(a);
    cout << calculating(a) << endl;
    double b[8];
    input(b);
    cout << calculating(b) << endl;
    float c[8];
    input(c);
    cout << calculating(c) << endl;
}