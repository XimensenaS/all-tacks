#pragma once
#include <cassert>
#include <string>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Toy
{
private:
    string name;

public:
    Toy(string _name) : name(_name){};
    string getName() const
    {
        return name;
    }
    ~Toy()
    {
        cout << "Toy " << name << " was dropped." << endl;
    }
};

class Dog
{
private:
    string name;
    int age;
    shared_ptr<Toy> toy;

public:
    Dog(string _name, int _age) : name(_name), age(_age) {}
    Dog(string _name) : Dog(_name, 0) {}
    void getToy(shared_ptr<Toy> &_toy)
    {
        if (_toy.use_count() == 1 && toy == nullptr)
        {
            toy = _toy;
        }
        else if (_toy.use_count() > 1)
        {
            cout << ((toy == _toy) ? "I already have this toy." : "Another dog is playing with this toy.") << endl;
        }
    }
    void gropToy()
    {
        if (toy != nullptr)
        {
            toy = nullptr;
        }
        else
        {
            cout << "Nothing to drop." << endl;
        }
    }
};