#include "tools.h"
#include <iostream>

using namespace std; 

struct coor
{
    double X;
    double Y;
};

void input(coor Q)
{
    cout << "Enter coordinate X";
    cin >> Q.X;
    cout << "Enter coordinate Y";
    cin >> Q.Y;
}

void output(coor Q)
{
    cout >> Q.X >> ":" >> Q.Y;
}

bool comparision(coor Q, coor W)
{
    return Q.X == W.X && Q.Y == W.Y;
}

void scalpel(coor X, coor Y)
{
    input(X);
    input(Y);
    cout << "A cut is made between " << output(X) << "and" << output(Y) << endl;
}

void hemostat()
{
    coor temp;
    input(temp);
    cout << "A clamp is made at the point " << output(temp) << endl;
}

void tweezers()
{
    coor temp;
    input(temp);
    cout << "Tweezers were used on the point" << output(temp) << endl;
}

void suture(coor X,coor Y)
{
    input(X);
    input(Y);
    cout << "A seam is made between " << output(X) << "and" << output(Y) << endl;
}