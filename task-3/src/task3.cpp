#include <string>
#include <iostream>
#include "person.h"

using namespace std;
int main()
{
    string name;
    int ID = 0;
    cout << "Enter name leader:";
    cin >> name;
    Person *leader = new Person(name, "leader", ID++);
    cout << "Enter count group:";
    int countGroup;
    cin >> countGroup;
    Worker *managers[countGroup];
    vector<vector<Worker *>> subordinates;
    for (int i = 0; i < countGroup; i++)
    {
        vector<Worker *> group;
        int sizeGroup;
        cout << "Enter number of people in " << i + 1 << " group: ";
        cin >> sizeGroup;
        for (int j = 0; j < sizeGroup; j++)
        {
            cout << "Enter name worker:";
            cin >> name;
            Worker *worker = new Worker(name, "workmen", ID++, i);
            group.push_back(worker);
        }
        subordinates.push_back(group);
        cout << "Enter name manager " << i + 1 << "group: ";
        cin >> name;
        Worker *manager = new Worker(name, "manager", ID++, i);
        managers[i] = manager;
    }

    int command, amountFreeWorkers = 0;
    while (amountFreeWorkers != ID)
    {
        cout << "Enter command leader:";
        cin >> command;
        for (int i = 0; i < countGroup; i++)
        {
            srand(command + managers[i]->getID());
            cout << "Manager" << managers[i]->getName() << "get command" << endl;
            int amountTask = 1 + rand() % subordinates[i].size();
            for (int j = 0, z = 0;j < subordinates[i].size() &&  z < amountTask; j++)
            {
                if (subordinates[i][j]->getTask() == TYPETASK::NONE)
                {
                    subordinates[i][j]->setTask(rand() / 3);
                    cout << "Worker " << subordinates[i][j]->getName() << " get task " << subordinates[i][j]->getTask() << "." << endl;
                    amountFreeWorkers++;
                    z++;
                }
            }
        }
    }
}