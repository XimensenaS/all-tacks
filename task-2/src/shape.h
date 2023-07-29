#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Toy
{
private:
    string name;

public:
    Toy(string _name) : name(_name) {}
    string getName() const
    {
        return name;
    }
};

class Shared_ptr_toy
{
private:
    Toy *toy;
    int count;

public:
    Toy *getToy() const
    {
        return toy;
    }
    int getCOUNT() const
    {
        return count;
    }
    Shared_ptr_toy(string _name)
    {
        toy = new Toy(_name);
        count = 0;
    }
    Shared_ptr_toy(const Shared_ptr_toy &oth)
    {
        toy = new Toy(*oth.toy);
        count++;
    }
    Shared_ptr_toy &operator=(const Shared_ptr_toy &oth)
    {
        if (this == &oth)
            return *this;
        if (toy != nullptr)
        {
            delete toy;
            count--;
        }
        toy = new Toy(*oth.toy);
        count ++;
        return *this;
    }
    ~Shared_ptr_toy()
    {
        if (toy != nullptr && count == 0)
        {
            delete toy;
        }
        else
        {
            count--;
        }
    }
};

Shared_ptr_toy make_shared_toy(string _name = "SomeName")
{
    return Shared_ptr_toy(_name);
}

Shared_ptr_toy make_shared_toy(const Shared_ptr_toy &other)
{
    return Shared_ptr_toy(other);
}