#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <map>
#include <ctime>
#include <iomanip>

using namespace std;
int main()
{
    cout << "Enter time in minuts and seconds" << endl;
    int minuts, seconds;
    cin >> minuts >> seconds;
    time_t duration = minuts * 60 + seconds;
    for (time_t i = duration; i != 0; i--)
    {
        tm *t = localtime(&i);
        cout << put_time(t, "%R") << endl;
    }
    cout << "DING! DING! DING!" << endl;
}