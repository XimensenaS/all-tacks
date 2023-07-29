#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include "branch.h"

using namespace std;

int main()
{
    shared_ptr<Toy> Ball = make_shared<Toy>("Ball");
    Dog S("Sharik", 3);
    Dog D("Drujok");
    S.getToy(Ball);
    S.getToy(Ball);
    D.getToy(Ball);
    S.gropToy();
    D.getToy(Ball);
    S.gropToy();
    Ball.reset();
}