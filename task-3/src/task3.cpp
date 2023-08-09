#include <string>
#include <iostream>
#include <vector>
#include <exception>

using namespace std;
template <typename t1, typename t2>
struct date
{
    t1 key;
    t2 value;
};

template <typename t1, typename t2>
void add(vector<date<t1, t2>> r)
{
    date<t1, t2> m;
    cout << "Enter key:";
    cin >> m.key;
    cout << "Enter value:";
    cin >> m.value;
    r.push_back(m);
}

template <typename t1, typename t2>
void remove(vector<date<t1, t2>> r)
{
    t1 p;
    cout << "Enter key:";
    cin >> p;
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i].key == p)
        {
            r.erase(r.begin() + i);
        }
    }
}

template <typename t1, typename t2>
void print(vector<date<t1, t2>> r)
{
    for (int i = 0; i < r.size(); i++)
    {
        cout << "(" << r[i].key << "," << r[i].value << ")" << endl;
    }
}

template <typename t1, typename t2>
void find(vector<date<t1, t2>> r)
{
    t1 p;
    cout << "Enter key:";
    cin >> p;
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i].key == p)
        {
            cout << "(" << r[i].key << "," << r[i].value << ")" << endl;
        }
    }
}

int main()
{
    vector<date<int, string>> registry1;
    vector<date<string, double>> registry2;
    vector<date<double, int>> registry3;
    string command;
    cout << "Enter command for registry <int, string>:";
    cin >> command;
    while (command != "exit")
    {
        if (command == "add")
        {
            add(registry1);
        }
        else if (command == "remove")
        {
            remove(registry1);
        }
        else if (command == "print")
        {
            print(registry1);
        }
        else if (command == "find")
        {
            find(registry1);
        }
        else
        {
            cout << "invalid command" << endl;
        }
        cout << "Enter command for registry <int, string>:";
        cin >> command;
    }
    cout << "Enter command for registry <string, double>:";
    cin >> command;
    while (command != "exit")
    {
        if (command == "add")
        {
            add(registry1);
        }
        else if (command == "remove")
        {
            remove(registry1);
        }
        else if (command == "print")
        {
            print(registry1);
        }
        else if (command == "find")
        {
            find(registry1);
        }
        else
        {
            cout << "invalid command" << endl;
        }
        cout << "Enter command for registry <string, double>:";
        cin >> command;
    }
    cout << "Enter command for registry <string, double>:";
    cin >> command;
    while (command != "exit")
    {
        if (command == "add")
        {
            add(registry1);
        }
        else if (command == "remove")
        {
            remove(registry1);
        }
        else if (command == "print")
        {
            print(registry1);
        }
        else if (command == "find")
        {
            find(registry1);
        }
        else
        {
            cout << "invalid command" << endl;
        }
        cout << "Enter command for registry <string, double>:";
        cin >> command;
    }
}