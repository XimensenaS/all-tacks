#include <cassert>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <string>
#include "tools.cpp"

using namespace std;

struct coor
{
    double X;
    double Y;
};

int main()
{
    string command;
    cout << "Enter commands" << endl;
    coor start_cut, end_cut, start_seam, end_seam;
    while (1)
    {
        cin >> command;
        if (command == "scalpel")
            break;
    }
    cout << "The operation has begun." << endl;
    scalpel(start_cut, end_cut);
    while (comparision(start_cut,start_seam) && comparision(end_cut,end_seam))
    {
        coor start, end1;
        cout << "Enter commands" << endl;
        cin >> command;
        if (command == "scalpel")
        {
            scalpel(start, end1);
        }
        else if (command == "hemostat")
        {
            hemostat();
        }
        else if (command == "tweezers")
        {
            tweezers();
        }
        else if (command == "suture")
        {
            suture(start_seam, end_seam);
        }
        else
        {
            cerr << "Incorrect command" << endl;
        }
    }
}