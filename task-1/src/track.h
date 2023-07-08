#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

class Track
{
private:
    string title;
    tm dateOfCreation;
    int duretion;
public:
    void setTitle()
    {
        cin >> title;
    }
    void setDateOfCreation()
    {
        time_t t = time(nullptr);
        tm *temp = localtime(&t);
        dateOfCreation = *temp;
        cin >> get_time(&dateOfCreation,  "%d-%m-%Y");
    }
    void setDuretion()
    {
        cin >> duretion;
    }

    string getTitle()
    {
        return title;
    }

    tm getDateOfCreation()
    {
        return dateOfCreation;
    }

    int getDuretion()
    {
        return duretion;
    }
};

class Player
{
private:
    vector<Track> playlist;
    int count_song = 0;
    bool playing = false;
    bool pause = false;

public:
    void addSong()
    {
        Track song;
        cout << "Enter title: ";
        song.setTitle();
        cout << "Enter date of creation(dd-mm-yyyy): ";
        song.setDateOfCreation();
        cout << "Enter duretion song: ";
        song.setDuretion();
        playlist.emplace_back(song);
        count_song++;
    }
    void playSong()
    {
        cout << "Enter title track:" << endl;
        string titles;
        cin >> titles;
        bool found = false;
        for (int i = 0; !found && i < count_song; i++)
        {
            if (titles == playlist[i].getTitle())
            {
                found = true;
                tm temp = playlist[i].getDateOfCreation();
                playing = true;
                cout << "Now playing: " << playlist[i].getTitle() << endl
                     << "Date of creation: " << put_time(&temp, "%d-%m-%Y") << endl
                     << "Duretion: " << playlist[i].getDuretion() << endl;
            }
        }
        if (!found)
        {
            cerr << "Track not found." << endl;
        }
    }
    void pauseSong()
    {
        if (pause == false && playing == true)
        {
            pause = true;
            cout << "Audio recording on pause." << endl;
        }
    }
    void nextSong()
    {
        playing = true;
        srand(time(nullptr));
        int randTrack = rand() % count_song;
        tm temp = playlist[randTrack].getDateOfCreation();
        cout << "Now playing: " << playlist[randTrack].getTitle() << endl
             << "Date of creation: " << put_time(&temp, "%d-%m-%Y") << endl
             << "Duretion: " << playlist[randTrack].getDuretion() << endl;
    }
    void stopSong()
    {
        if (playing == true)
        {
            playing = false;
            cout << "Audio recording stopped." << endl;
        }
    }
};
