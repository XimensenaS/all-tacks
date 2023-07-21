#include <iostream>
#include <vector>
#include "shape.h"

using namespace std;


int main()
{
    Triangle t(6,8,10);
    printParams(&t);
    Rectangle r(10,45);
    printParams(&r);
    Circle c(7.5);
    printParams(&c);
}