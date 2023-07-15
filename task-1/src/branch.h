#pragma once
#include <cassert>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

class Branch
{
private:
    class Branch *parent = nullptr;
    string elfName;
    vector<Branch *> children;

public:
    Branch* getParent()
    {
        return parent;
    }
    void populate()
    {
        srand(time(nullptr));
        int countBigBranch = 3 + rand() % 3;
        for (int i = 0; i < countBigBranch; i++)
        {
            Branch *bigBranch = new Branch;
            bigBranch->parent = this;
            cout << "Enter elf name for " << i + 1 << "big branch ";
            cin >> bigBranch->elfName;
            int countMiddleBranch = 2 + rand() % 2;
            for (int a = 0; a < countMiddleBranch; a++)
            {
                Branch *middleBranch = new Branch;
                middleBranch->parent = bigBranch;
                cout << "Enter elf name for " << a + 1 << "middle branch in " << i + 1 << " big branch ";
                cin >> middleBranch->elfName;
                bigBranch->children.push_back(middleBranch);
            }
            this->children.push_back(bigBranch);
        }
    }
    Branch *findBranch(string name)
    {
        assert(name != "None");
        if (this->elfName == name)
            return this;
        for (int i = 0; i < this->children.size(); i++)
        {
            Branch *found = this->children[i]->findBranch(name);
            if (found != nullptr)
                return found;
        }
        return nullptr;
    }
    int countingNeighbors()
    {
        assert(this != nullptr);
        int count = 0;
        if (this->elfName != "None")
            count++;
        for (int i = 0; i < this->children.size(); i++)
        {
            if (this->children[i]->elfName != "None")
                count ++;
        }
        return --count;
    }
    void clearing()
    {
        for (int i = 0; i < this->children.size(); i++)
        {
            for (int j = 0; j < this->children[i]->children.size(); i++)
            {
                delete this->children[i]->children[j];
            }
            delete this->children[i];
        }
        delete this;
    }
};
