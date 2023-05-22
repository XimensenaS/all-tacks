#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

int used_guestion(int z,vector<int>& h){
    bool found = false;
    for(int i=0;i<h.size()&&!found;i++){
        found= h[i]==z;
    }
    if(!found){
        h.push_back(z);
        return z;}
    else {
        return used_guestion(z+1,h);
    }
}

int main(){
    int score_player=0,score_audience=0,cur_poz=0;
    ifstream file1("C:\\Users\\User\\all-tacks\\task-5\\questions.txt");
    ifstream file2("C:\\Users\\User\\all-tacks\\task-5\\answers.txt");
    string question[13],answers[13];
    vector<int> used; 
    int count =0;
    while (!file1.eof()){
        getline(file1,question[count]);
        count++;
    }
    file1.close();
    count=0;
    while (!file2.eof()){
        getline(file2,answers[count]);
        count++;
    }
    file2.close();
    while(score_audience !=6 || score_player!=6){
        int shift;
        cout << "Input shift:";
        cin >> shift;
        if(shift<0||shift>12)continue;
        cur_poz+=shift;
        cur_poz%=13;
        int number= used_guestion(cur_poz,used);
        for(int i=0;i<used.size();i++){
            cout << used[i]<< " ";
        }
        cout << endl;
        cout << question[number]<< endl;
        cout << "Your answer:"<< endl;
        string answer;
        cin >> answer;
        if(answer!=answers[number]){
            cout << "Viewers get a point"<<endl;
            score_audience++;}
        else {
            cout << "Player get a point"<<endl;
            score_player++;}
    }
    if(score_audience == 6){
        cout << "Win audience";
    }else{
        cout << "Win player";
    }

}
