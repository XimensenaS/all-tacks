#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;
int main()
{
    srand(time(nullptr));
    ofstream file(".\\pic.txt");
    if(!file){
        cerr << "Unable to open the file.";
        return 1;
    }
    cout << "Inter height and width:";
    int height,width;
    cin >> height>> width;
    cout << height<< width<<endl;
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            file << rand()%2;
        }
        file << endl;
    } 
    file.close();
}
