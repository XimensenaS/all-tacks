#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

int day_month(int i){
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
        return 31;
    }else if(i==2){
        return 28;
    }else{
        return 30;
    }
}

using namespace std;

int main()
{
    ofstream file(".\\data.txt",ios::app);
    if(!file){
        cerr << "Unable to open the file.";
        return 1;
    }
    string name,surname,date;
    int payment;
    cout << "Input name,surname,data payment(in the format DD.MM.YYYY) and payment:" << endl;
    cin  >>  name >> surname >> date >> payment;
    int day,month,year;
    month = stoi(date.substr(3, 2));
    day = stoi(date.substr(0, 2));
    year = stoi(date.substr(6, 4));
    if(year>2023||month>12||day_month(month)<=day){
        cerr << "Uncurrect date.";
        return 1;
    }
    if(payment<=0){
        cerr << "Uncurrect payment.";
        return 1;
    }
    file << endl;
    file << name << " "  << surname << " " << 
            day << "."<< month << "." << year << " " << payment;
    file.close();
}
