#include <iostream>
#include <vector>
#include <memory>
#include "shape.h"

using namespace std;

int main()
{
    Shared_ptr_toy Ball = make_shared_toy("Ball");
    Dog S("Sharik", 3);
    Dog D("Drujok", 1);
    S.getToy(Ball);
    S.getToy(Ball);
    D.getToy(Ball);
    S.gropToy();
    D.getToy(Ball);
    S.gropToy();
    Ball.reset();
}