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
    ofstream backet(".//backet.txt",ios::app);
    if(!backet){
        cerr << "Unable to open the file.";
        return 1;
    }
    ifstream river(".//river.txt");
    if(!river){
        cerr << "Unable to open the file.";
        return 1;
    }
    cout << "Inter type of fish for fishing(to finish fishing, enter home):";
    string type;
    vector <string> Catch;
    int count=0;
    cin >> type;
    while(type != "home"){
        bool found = false;
        river.seekg(0);
        while (!river.eof()||found){
            string fish;
            river >> fish;
            found = fish ==type;
            if(found){
                cout << "You catch " << type<<"."<<endl;
                backet << type<< endl; 
                Catch.push_back(type);
                count++;
            }
        }
        cout << "Inter type of fish for fishing(to finish fishing, enter home):";
        cin >> type;
    }
    if(count ==0){
        cout << "You didn't catch anything."; 
    }else{
        cout << "Have you caught these fish:"<< endl; 
        for(int i = 0;i<count;i++){
            cout << Catch[i]<<endl;
        }
    }
    river.close();
    backet.close();
}
