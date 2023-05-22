#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    string name,secondname;
    int payment=0,sum=0;
    ifstream file("C:\\Users\\User\\all-tacks\\task-3\\data.txt");
    while(!file.eof()){
        string cur_name,cor_secondname,cur_timing;
        int cur_payment;
        file >> cur_name >> cor_secondname >> cur_payment >> cur_timing;
        if(cur_payment > payment){
            name=cur_name;
            secondname=cor_secondname;
            payment= cur_payment;
        }
        sum+=cur_payment;
    }
    cout << "The largest recipient of funds"<< name << 
            " " << secondname << " " << payment << endl;
    cout << "The total payout amount is equal to" << sum;
}
