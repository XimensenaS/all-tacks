#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

enum OPTION{
    ADD,
    GET_SURNANE,
    GET_PHONE_NUMBER
};

int main()
{
    map<string,string> telephone_directory;
    map<string,string> notebook;
    cout << "Enter a number that characterizing the action:"<< endl;
    cout << "0 - add the subscriber's phone number and surname to the directory"<<endl;
    cout << "1 - find out the subscriber's last name by phone number"<<endl;
    cout << "2 - find out the subscriber's phone number by last name"<<endl;
    cout << "-1 - exit"<< endl;
    int num;
    string phone_number,surname;
    cin >>num;
    while (num!= -1)
    {
        if(num == OPTION::ADD){
            cout << "Enter phone_number and surname:" <<endl;
            cin >> phone_number >> surname;
            telephone_directory.insert(pair<string,string>(phone_number,surname));
            if(notebook.count(surname) == 1){
                map<string,string>::iterator itf = notebook.find(surname);
                itf->second+=to_string(" ")+ phone_number;
            }else notebook.insert(pair<string,string>(surname,phone_number))
        }else if(num ==OPTION::GET_SURNANE){
            cout << "Enter phone number:"<<endl;
            cin >> phone_number;
            map<string,string>::iterator itf = telephone_directory.find(phone_number);
            if(itf != telephone_directory.end()){
                cout << itf->second << endl;
            }else{
                cerr << "Was not found"<< endl;
            }
        }else if(num==OPTION::GET_PHONE_NUMBER){
            cout << "Enter surname:"<<endl;
            cin >> surname;
            for(map<string,string>::iterator itf = notebook.find(surname);
            if(itf != telephone_directory.end()){
                cout << itf->second << endl;
            }else{
                cerr << "Was not found"<< endl;
            }
        }else{
            cerr << "Uncorrect input."<< endl;
        }
        cout << "Enter a number that characterizing the action:"<< endl;
        cout << "0 - add the subscriber's phone number and surname to the directory"<<endl;
        cout << "1 - find out the subscriber's last name by phone number"<<endl;
        cout << "2 - find out the subscriber's phone number by last name"<<endl;
        cout << "-1 - exit"<< endl;
        cin >> num;
    }
    
}