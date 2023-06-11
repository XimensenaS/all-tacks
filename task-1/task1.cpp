#include <iostream>

using namespace std;
#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7
#define first "Monday"
#define second "Tuesday"
#define trird "Wenesdey"
#define fourth "Thursday"
#define fifth "Friday"
#define sixth "Saturday"
#define seventh "Sunday"

int main()
{
    cout << "Enter the day of the week in the form of its serial number" << endl;
    int num;
    cin >> num;
    if (num == MONDAY)
    {
        cout << first << endl;
    }
    else if (num == TUESDAY)
    {
        cout << second << endl;
    }
    else if (num == WEDNESDAY)
    {
        cout << trird << endl;
    }
    else if (num == THURSDAY)
    {
        cout << fourth << endl;
    }
    else if (num == SATURDAY)
    {
        cout << sixth << endl;
    }
    else if (num == FRIDAY)
    {
        cout << fifth << endl;
    }
    else if (num == SUNDAY)
    {
        cout << seventh << endl;
    }
    else
    {
        cerr << "Incorrect input";
    }
}