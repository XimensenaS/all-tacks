#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include <cpr/cpr.h>

using namespace std;
using namespace cpr;

int main()
{
    string URL = "https://nghttp2.org/httpbin/";
    Response r;
    cout << "Enter command" << endl;
    string command;
    cin >> command;
    while (command != "exit")
    {
        bool found = true;
        if (command == "get")
        {
            r = Get(Url(URL + "get"));
        }
        else if (command == "patch")
        {
            r = Patch(Url(URL + "patch"));
        }
        else if (command == "post")
        {
            r = Post(Url(URL + "post"));
        }
        else if (command == "put")
        {
            r = Put(Url(URL + "put"));
        }
        else if (command == "delete")
        {
            r = Delete(Url(URL + "delete"));
        }
        else
        {
            cout << "Not found" << endl;
            found = false;
        }
        if (found)
        {
            cout << r.text << endl;
        }
        cout << "Enter command" << endl;
        cin >> command;
    }
}