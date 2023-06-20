#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <map>
#include <ctime>
#include <iomanip>


using namespace std;

time_t ending(time_t s, time_t e)
{
    e = time(nullptr);
    return difftime(e, s);
}
int main()
{
    bool active_task = false;
    time_t start_time, end_time;
    vector<string> task_name;
    vector<time_t> duration;
    int count = 0;
    cout << "Enter command(begin,end,status and exit)" << endl;
    string command;
    cin >> command;
    while (1)
    {
        if (command == "begin")
        {
            if (active_task)
            {
                duration.push_back(ending(start_time, end_time));
                cout << "New active task"<<endl;
            }
            active_task = true;
            start_time = time(nullptr);
            string name;
            cout << "Enter task name: " << endl;
            cin >> name;
            task_name.push_back(name);
            cout << "Task " << count + 1 << ": " << task_name[count] << " begin." << endl;
            count++;
        }
        else if (command == "end")
        {
            if (active_task)
            {
                duration.push_back(ending(start_time, end_time));
                active_task = false;
                cout << "Active task ending" << endl;
            }
            else
            {
                cerr << "Not active task." << endl;
            }
        }
        else if (command == "status")
        {
            if (active_task)
            {
                cout << "Active task:" << task_name[count - 1] << endl;
            }
            int count_completed_task = (active_task) ? (count-1) : (count);
            for (int i = 0; i < count_completed_task; i++)
            {
                tm* t = localtime(&duration[i]);
                cout << "Task " << i + 1 << ": " << task_name[i] << ".Duration " << put_time(t,"%H:%M:%S") << endl;
            }
        }
        else if (command == "exit")
        {
            break;
        }
        cout << "Enter command(begin,end,status and exit)" << endl;
        cin >> command;
    }
}