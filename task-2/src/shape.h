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
    ~Toy()
    {
        cout << "Toy " << name << " was dropped." << endl;
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
    void setToy(Toy *_toy)
    {
        toy = _toy;
    }
    Shared_ptr_toy(string _name = "SomeToy")
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
        count++;
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
    void reset()
    {
        count --;
    }
};

Shared_ptr_toy make_shared_toy(string _name)
{
    return Shared_ptr_toy(_name);
}

Shared_ptr_toy make_shared_toy(const Shared_ptr_toy &other)
{
    return Shared_ptr_toy(other);
}

class Dog
{
private:
    string name;
    Shared_ptr_toy toy;
    int age;

public:
    Dog(string _name, int _age) : name(_name),age(_age) {}
    void getToy(Shared_ptr_toy &_toy)
    {
        if (_toy.getCOUNT() == 0)
        {
            toy = make_shared_toy(_toy);
        }
        else if (_toy.getCOUNT() > 0)
        {
            cout << ((toy.getToy() == _toy.getToy()) ? "I already have this toy." : "Another dog is playing with this toy.") << endl;
        }
    }
    void gropToy()
    {
        if (toy.getToy() != nullptr)
        {
            toy.setToy(nullptr);
        }
        else
        {
            cout << "Nothing to drop." << endl;
        }
    }
};