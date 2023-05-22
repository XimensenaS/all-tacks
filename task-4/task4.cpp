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
    bool check = false;
    cout << "Input path:";
    getline(cin,path);
    int end= path.length()-4;
    if(path.substr(end, 4) == ".png"){
        ifstream file(path,ios::binary);
        char ending[4];
        file.read(ending,4);
        if((int)ending[0]==-119&&ending[1]=='P'&&ending[2]=='N'&&ending[3]=='G'){
            check = true;
        }
    }
    if(check){cout << "This file  - PNG.";}
    else{cout <<  "This file  - no PNG.";}
}
