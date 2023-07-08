#include <string>
#include <iostream>
#include "screen.h"

using namespace std;
int main()
{
    Screen *screen = new Screen;
    cout << "Enter command" << endl;
    string command;
    cin >> command;
    while (command != "exit")
    {
        if (command == "move")
        {
            screen->moveScreen();
        }
        else if (command == "resize")
        {
            screen->resizeScreen();
        }
        else if (command == "display")
        {
            {
                for (int i = 0; i < 50; i++)
                {
                    for (int j = 0; j < 80; j++)
                    {
                        bool cell = i >= screen->getStartY() && i < screen->getStartY() + screen->getHeigth() &&
                                    j >= screen->getStartX() && j < screen->getStartX() + screen->getWidth();
                        cout << cell;
                    }
                    cout << endl;
                }
            }
        }
        else
        {
            cerr << "Invalid command" << endl;
        }
        cout << "Enter command" << endl;
        cin >> command;
    }
}