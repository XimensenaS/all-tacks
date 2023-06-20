#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    vector<tm> date;
    vector<string> names;
    cout << "Enter name friends(end for ending):" << endl;
    cin >> name;
    int count = 0;
    int iter;
    while (name != "end")
    {
        time_t tt = time(nullptr);
        tm *temp = localtime(&tt);
        cout << "Enter her date of birth(YYYY/MM/DD):" << endl;
        cin >> get_time(temp, "%Y/%m/%d");
        date.emplace_back(*temp);
        names.push_back(name);
        count++;
        cout << "Enter name friends(end for ending):" << endl;
        cin >> name;
    }
    time_t t = time(nullptr);
    tm *local = localtime(&t);
    tm nearest = *localtime(&t);
    nearest.tm_mon = 11;
    nearest.tm_mday = 31;
    vector<int> birthday_people;
    for (int i = 0; i < count; i++)
    {
        int day = date[i].tm_mday;
        int month = date[i].tm_mon;
        if (month >= local->tm_mon || (day >= local->tm_mday && month == local->tm_mon))
        {
            if (day == local->tm_mday && month == local->tm_mon)
            {
                cout << "Today is the birthday of " << names[i] << endl;
            }
            else if (month < nearest.tm_mon && day < nearest.tm_mday)
            {
                nearest.tm_mday = day;
                nearest.tm_mon = month;
                birthday_people.clear();
                birthday_people.push_back(i);
            }
            else if (month = nearest.tm_mon && day == nearest.tm_mday)
            {
                birthday_people.push_back(i);
            }
        }
    }
    cout << "The nearest birthday for ";
    for (int z = 0; z < birthday_people.size(); z++)
    {
        cout << names[birthday_people[z]] << " ";
    }
    cout << "in " << put_time(&nearest, "%m/%d") << endl;
}
