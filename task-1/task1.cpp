#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct statement{
    string name;
    string surname;
    string date;
    int payment;
};

bool FileIsExist(string Path)
{
    bool isExist = false;
    ifstream fin(filePath);
 
    if(fin.is_open())
        fin.close();
        return true;
 
    fin.close();
    return isExist;
}

int day_month(int i){
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
        return 31;
    }else if(i==2){
        return 28;
    }else{
        return 30;
    }
}

void add_statement(statement &data,ofstream &file){
    cout << "Input name,surname,data payment(in the format DD.MM.YYYY) and payment:" << endl;
    cin  >>  data.name >> data.surname >> data.date >> data.payment;
    int month = stoi(data.date.substr(3, 2));
    int day = stoi(data.date.substr(0, 2));
    int year = stoi(data.date.substr(6, 4));
    if(year>2023||month>12||day_month(month)<=day){
        cerr << "Uncurrect date.";
    }else if(data.payment<=0){
        cerr << "Uncurrect payment.";
    }else {
        data.date = to_string(day) + '.' + to_string(month) + '.' + to_string(year);
        file << data.name << " " << data.surname << " " << data.date << " " << data.payment<< endl; 
    }
}

void list_statement(ifstream &file){
    vector <statement> roster;
    int count=0;
    while(1){
        if(file.eof())break;
        statement temp;
        file >> temp.name;
        file >> temp.surname;
        file >> temp.date;     
        file >> temp.payment;
        roster.push_back(temp);
        count++;
    }
    for(int i=0;i< count;i++){
        cout << roster[i].name << " " << roster[i].surname << " " << roster[i].date << " " << roster[i].payment<< endl;
    }
}



int main()
{
    string path= ".\\data.txt";
    string command;
    cout << "Enter command:";
    cin >> command;
    if(command == "list"){
        ifstream file(path);
         if (!file.is_open()){
            cerr << "Error open file\n";
            return 1;
        }
        list_statement(file);
        file.close();
    }else if(command=="add"){
        if(FileIsExist(path)){
            cerr << "Error found file\n";
            return 1;
        }
        ofstream file(path,ios::app);
        struct statement new_s;
        if (!file.is_open()){
            cerr << "Error open file\n";
            return 1;
        }
        add_statement(new_s,file);
        file.close();
    }else{
        std::cerr << "Invalid operation."<<endl;
    }
}