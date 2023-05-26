#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

int main(){
    srand(time(nullptr));
    int cost[6] = {100,200,500,1000,2000,5000};
    string path = ".//ATMmachine.bin";
    cout << "Choose action:";
    char action;
    cin >> action;
    if(action == '+'){
        int wealth [6]={0};
        ifstream file_r(path,ios::binary);
        if(!file_r){
            cerr << "Unable to open the file.";
            return 1;
        }
        int count_banknotes=0;
        file_r.read((char*)&wealth,sizeof(wealth));
        for(int i=0;i<6;i++){
            count_banknotes += wealth[i];
        }
        file_r.close();
        while(count_banknotes <=1000){
            wealth[rand()%7]+=1;
            count_banknotes++;
        }
        ofstream file(path,ios::binary);
        if(!file){
            cerr << "Unable to open the file.";
            return 1;
        }
        file.write((char*)&wealth,sizeof(wealth));
        file.close();
        cout << "ATM is topped up."<< endl;
    }else if(action == '-'){
        cout << "Enter the amount to withdraw:";
        int amount;
        cin >> amount;
        while(amount%100!=0){
            cout << "The amount must be a multiple of 100."<<endl;
            cout << "Enter the amount to withdraw:";
            cin >> amount;
        }
        ifstream file_r(path,ios::binary);
        if(!file_r){
            cerr << "Unable to open the file.";
            return 1;
        }
        int wealth [6];
        file_r.read((char*)&wealth,sizeof(wealth));
        file_r.close();
        int count = 5;
        int count_banknotes [6]={0};
        bool breakdown = false;
        while(amount!=0){
            int x = wealth[count] * cost[count];
            if(amount <= x){
                int z= amount / cost[count];
                if(z>wealth[count]){
                    cout <<"This amount cannot be withdrawn due to the lack of banknotes in the ATM"<<endl;
                    break;
                }else{
                    count_banknotes[count]+= amount/cost[count];
                    wealth[count]-=amount/cost[count];
                    amount%=cost[count];
                }
            }
            count--;
        }
        if(breakdown){
            for(int z=0;z<6;z++){
                wealth[z]+=count_banknotes[z];
            }
        }else{
            cout << "Issuing money."<<endl;
        }
        ofstream file_w(path,ios::binary);
        if(!file_w){
            cerr << "Unable to open the file.";
            return 1;
        }
        file_w.write((char*)&wealth,sizeof(wealth));
        file_w.close();
    }
    cout <<"ATM shutdown.";
}
