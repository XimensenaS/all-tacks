#include <iostream>
#include <string>
using namespace std;
enum COMMAND
{
    SUM,
    SAVE,
    LOAD,
    INPUT,
    DISPLAY,
    EXIT
};

int main()
{
    int buffer[8];
    while (1)
    {
        cout << "Enter number command\n(0 - sun \n1 - save data\n2 - load data\n3 - input data\n4- data display\n5 - exit)" << endl;
        int command;
        cin >> command;
        if (command == COMMAND::SUM)
        {
            comparing(buffer);
        }
        else if (command == COMMAND::SAVE)
        {
            save(buffer);
        }
        else if (command == COMMAND::LOAD)
        {
            load(buffer);
        }
        else if (command == COMMAND::INPUT)
        {
            reading(buffer);
        }
        else if (command == COMMAND::DISPLAY)
        {
            display(buffer);
        }
        else if (command == COMMAND::EXIT)
        {
            break;
        }
        else
        {
            cerr << "Invalid command"<< endl;
        }
    }
}
