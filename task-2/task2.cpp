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
    string path;
    cout << "Input path:";
    getline(cin,path);
    ifstream file(path,ios::binary);
    while(!file.is_open()){
        cout << "Retry input path:";
        getline(cin,path);
        ifstream file(path,ios::binary);
    }
    while(!file.eof()){
        char buffer[22]= {0};
        file.read(buffer,21);
        cout << buffer;
    }
    file.close();
}
