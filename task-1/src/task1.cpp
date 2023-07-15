#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>
#include <vector>
#include "branch.h"

using namespace std;

int main()
{
    int countTrees = 5;
    Branch *forest[countTrees];
    for (int i = 0; i < countTrees; i++)
    {
        forest[i] = new Branch;
        forest[i]->populate();
    }
    string mentionedElf;
    Branch *searchableBrench = nullptr;
    std::cout << "Enter a search name: ";
    std::cin >> mentionedElf;
    for (int i = 0; searchableBrench == nullptr && i < countTrees; i++)
    {
        searchableBrench = forest[i]->findBranch(mentionedElf);
    }
    if (searchableBrench == nullptr)
    {
        cerr << "Elf or branch not found." << endl;
    }
    else
    {
        if (searchableBrench->getParent()->getParent() != nullptr)
        {
            searchableBrench = searchableBrench->getParent();
        }
        cout << "The elf has"<< searchableBrench->countingNeighbors() <<"neighbors"<< endl;
    }
    for (int i = 0; i < countTrees; i++)
    {
        forest[i]->clearing();
    }
}