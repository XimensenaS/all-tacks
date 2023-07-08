#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <ctime>
#include <iomanip>
#include <vector>
#include "track.h"

using namespace std;

int main()
{
    Player *player = new Player;
    cout << "Enter count track in playlist: ";
    int counting = 0;
    cin >> counting;
    if (counting < 1)
    {
        cerr << "Incorrect enter" << endl;
        return 1;
    }
    else
    {
        for (int c = 0; c < counting; c++)
        {
            player->addSong();
        }
        string command;
        cout << "Enter command: " << endl;
        cin >> command;
        while (command != "exit")
        {
            if (command == "play")
            {
                player->playSong();
            }
            else if (command == "pause")
            {
                player->pauseSong();
            }
            else if (command == "next")
            {
                player->nextSong();
            }
            else if (command == "stop")
            {
                player->stopSong();
            }
            else
            {
                cerr << "Incorrect command." << endl;
            }
            cout << "Enter command " << endl;
            cin >> command;
        }
    }
    delete player;
}