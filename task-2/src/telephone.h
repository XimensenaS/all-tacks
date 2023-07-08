#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contact
{
private:
    string phoneNumber;
    string name;

public:
    void setPhoneNumber()
    {
        string endindNumber;
        cin >> endindNumber;
        if (endindNumber.length() == 10)
        {
            phoneNumber = to_string(+7) + endindNumber;
        }
        else
        {
            cerr << "Incorrect number." << endl;
        }
    }
    void setName()
    {
        cin >> name;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getName()
    {
        return name;
    }
};

class Telephone
{
private:
    vector<Contact> addressBook;
    int count_contact = 0;

public:
    void addContact()
    {
        Contact temp;
        cout << "Enter name ";
        temp.setName();
        cout << "Enter phone number ";
        cout << "+7";
        temp.setPhoneNumber();
        addressBook.emplace_back(temp);
        count_contact++;
    }
    void callConract()
    {
        cout << "Enter the contact's name or phone number: ";
        string input;
        cin >> input;
        bool itNumber = input.length() == 12 && input[0] == '+';
        bool found = false;
        for (int i = 0; !found && i < count_contact; i++)
        {
            if (itNumber && addressBook[i].getPhoneNumber() == input)
            {
                found = true;
                cout << "CALL" << input << endl;
            }
            else if (addressBook[i].getName() == input)
            {
                found = true;
                cout << "CALL" << addressBook[i].getPhoneNumber() << endl;
            }
        }
        if (!found)
        {
            cout << "Contact not found" << endl;
        }
    }
    void smsContact()
    {
        cout << "Enter the contact's name or phone number: ";
        string input;
        cin >> input;
        bool found = false;
        for (int i = 0; !found && i < count_contact; i++)
        {
            found = addressBook[i].getPhoneNumber() == input || addressBook[i].getName() == input;
        }
        if (found)
        {
            cout << "Enter sms: " << endl;
            getline(cin, input);
            cout << "Sms sent.";
        }
        else
        {
            cout << "Contact not found" << endl;
        }
    }
};