#include <iostream>
#include <vector>
#include "telephone.h"

using namespace std;

int main()
{
    Telephone *telephone = new Telephone;
    cout << "Enter command: ";
    string command;
    cin >> command;
    while (command != "exit")
    {
        if (command == "add")
        {
            telephone->addContact();
        }
        else if (command == "call")
        {
            telephone->callConract();
        }
        else if (command == "sms")
        {
            telephone->smsContact();
        }
        else
        {
            cerr << "Invalid command.";
        }
        cout << "Enter command: ";
        cin >> command;
    }
    delete telephone;
}