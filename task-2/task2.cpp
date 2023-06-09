#include <string>
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int>queue;
    string input;
    while(true){
        cin >> input;
        if(input != "Next"){
            if(queue.count(input)==0){
                queue.insert(pair(input,1));
            }else {
                map<string,int>::iterator itf = queue.find(input);
                itf->second++;
            }
        }else{
            map<string,int>::iterator it = queue.begin();
            cout << it->first << endl;
            it->second--;
            if(it->second == 0){
                queue.erase(it);
            }
        }
    }
}


                    
