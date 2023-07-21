#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include "branch.h"

using namespace std;

int main()
{
    vector<Dog *> dogs;
    cout << "Enter count dogs ";
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int _talents;
        cout << "Enter name dog: ";
        string _name;
        cin >> _name;
        Dog *dog = new Dog(_name);
        dogs.push_back(dog);
        for (int j = 0; j < _talents; j++)
        {
            cout << "Enter denomination talent";
            string denomination;
            cin >> denomination;
            if (denomination == "Swimming")
            {
                Talent *talent = new Swimming;
                dog[i].addTalent(talent);
            }
            else if (denomination == "Dancing")
            {
                Talent *talent = new Dancing;
                dog[i].addTalent(talent);
            }
            else if (denomination == "Counting")
            {
                Talent *talent = new Counting;
                dog[i].addTalent(talent);
            }
            else
            {
                cout << "Talent not found." << endl;
            }
        }
    }
    for(int i = 0; i < count; i++)
    {
        dogs[i]->show_Talent();
    }
    for(int i = count; i > -1; i--)
    {
        delete dogs[i];
    }
}