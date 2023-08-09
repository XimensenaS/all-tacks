#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <exception>

using namespace std;

void addProduct(map<string, int> &m,string &n,int &c)
{
    if(c < 1)
    {
        throw invalid_argument("Count product");
    }
    m.insert(make_pair(n,c));
}

void removeProduct(map<string, int> &m,string &n,int &c)
{
    if(m.at(n) < c)
    {
        throw invalid_argument("Count product");
    }
    else if (m.count(n) == 0)
    {
        throw runtime_error("Name product");
    }
    m.erase(n);
}

int main()
{
    map<string, int> database;
    map<string, int> basket;
    string command;
    cout << "Enter name product(or 'end' for exit): ";
    cin >> command;
    while(command != "end")
    {
        int counting;
        cout << "Enter count product: ";
        cin >> counting;
        try
        {
            addProduct(database,command,counting);
        }
        catch(const invalid_argument& e)
        {
            std::cerr << "Invalid argument." << endl;
        }
        cout << "Enter name product(or 'end' for exit): ";
        cin >> command;
    }
    cout << "Enter command 'add' or 'remove' or 'exit' for exit: ";
    cin >> command;
    while (command != "exit")
    {
        string name;
        cout << "Enter name product(or 'end' for exit): ";
        cin >> name;
        int counting;
        cout << "Enter count product: ";
        cin >> counting;
        try
        {
            if (command == "add")
            {
                addProduct(basket,name,counting);
                removeProduct(database,name,counting);
            }
            else if (command == "remove")
            {
                removeProduct(basket,name,counting);
                addProduct(database,name,counting);
            }
             
        }
        catch(const invalid_argument& e)
        {
            cerr << "Invalid argument." << endl;
        }
        catch(const runtime_error& e)
        {
            cerr << "Not found product" << endl;
        }
        cout << "Enter command 'add' or 'remove' or 'exit' for exit: ";
        cin >> command;
    }
}
