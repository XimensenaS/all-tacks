#include <iostream>
#include <vector>
#include <cpr/cpr.h>

using namespace std;
using namespace cpr;

int main()
{
    string URL = "http://httpbin.org/html";
    Response r = Get(Url(URL));
    cout << r.text.substr(r.text.find("<h1>") + 4, 
            r.text.find("</h1>") - r.text.find("<h1>") - 4) << endl;
}