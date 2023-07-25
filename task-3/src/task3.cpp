#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <cpr/cpr.h>

using namespace std;
using namespace cpr;

int main()
{
    string URL = "http://httpbin.org/";
    Response r;
    vector<Pair> arguments;
    string key;
    cout << "Enter key argument: ";
    cin >> key;
    while (key != "post" || key != "get")
    {
        cout << "Enter value argument: ";
        string value;
        cin >> value;
        arguments.emplace_back(Pair(key,value));
        cout << "Enter key argument: ";
        cin >> key;
    }
    if (key == "get")
    {
        URL += "get";
        vector<Pair>::iterator it;
        for (it = arguments.begin(); it != arguments.end(); it++)
        {
            URL = (it == arguments.begin() ? "?" : "&");
            URL += it->key + "=" + it->value;
        }
        r = Get(Url(URL));
    }
    else
    {
        URL += "post";
        r = Post(Url(URL),
                 Payload(arguments.begin(),arguments.end()));
    }
    cout << r.text << endl;
}