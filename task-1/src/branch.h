#pragma once
#include <cassert>
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class Talent
{
public:
    virtual string getName() = 0;

};

class Swimming : virtual public Talent
{
private:
    string name = "Swim";

public:
    virtual string getName()
    {
        return name;
    }
};
class Dancing : virtual public Talent
{
private:
    string name = "Dance";

public:
    virtual string getName()
    {
        return name;
    }
};
class Counting : virtual public Talent
{
private:
    string name = "Count";

public:
    virtual string getName()
    {
        return name;
    }
};
class Dog
{
private:
    string name;
    vector<Talent *> talents;

public:
    Dog(string _name) : name(_name) {}
    virtual void addTalent(Talent *_talent)
    {
        talents.push_back(_talent);
    }
    virtual void show_Talent()
    {
        cout << "This is " << name << " and it has some talents:" << endl;
        for (int i = 0; i < talents.size(); i++)
        {
            cout << "   It can " << talents[i]->getName() << endl;
        }
    }
};