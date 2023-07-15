#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum TYPETASK{
    A,
    B,
    C,
    NONE
};

class Person
{
private:
    string name;
    string post;
    int ID;
public:
    Person(string _name,string _post,int _ID):name(_name),post(_post),ID(_ID){}
    int getID()
    {
        return ID;
    }
    string getName()
    {
        return name;
    }
};

class Worker :public Person
{
private:
    int group;
    TYPETASK task = NONE; 
public:
    Worker(string _name,string _post,int _ID,int _group):Person(_name,_post,_ID),group(_group){}
    void setTask(int _task)
    {
        this->task =  static_cast<TYPETASK>(_task);
    }
    TYPETASK getTask()
    {
        return task;
    }
};

