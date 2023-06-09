#include <string>
#include <iostream>
#include <map>

using namespace std;

bool checking_anagram(string f,string s){
    if(f.length() != s.length())return false;
    map<char,int> splitting_f;
    map<char,int> splitting_s;
    for (int i = 0; i < f.length(); i++)
    {
        splitting_f.insert(pair<char,int>(f[i],i));
        splitting_s.insert(pair<char,int>(s[i],i));
    }
    bool check = true;
    map<char,int>::iterator it_f,it_s;
    it_f = splitting_f.begin();
    it_s = splitting_s.begin();
    for(int i = 0;i< s.length() && check;++i){
        check = it_f->first == it_s ->first;
    }
    return check;

}


int main()
{
    string first,second;
    cout << "Enter first word ";
    cin >> first;
    cout << "Enter second word ";
    cin >> second;
    cout << boolalpha << checking_anagram(first,second)<< endl;
}
