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
    int count = 0;
    string word,search;
    cout << "Input search word:";
    cin >> search;
    ifstream file("C:\\Users\\User\\all-tacks\\task-1\\words.tst");
    while(file >> word){
        if(word == search)count++;
    }
    cout << "Word:"<< search<< "met" << count<< "times.";
    file.close();
}
