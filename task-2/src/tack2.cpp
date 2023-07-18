#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

int count_trains = 0;
mutex railway_station_assent;

void arrival(int time, string designation)
{
    this_thread::sleep_for(chrono::seconds(time));
    if (!railway_station_assent.try_lock())
        cout << "Train" << designation << "waiting for an empty seat.";
    while (!railway_station_assent.try_lock()){}
    lock_guard<mutex> lock(railway_station_assent);
    cout << "Train" << designation << " has arrived."; 
    ++count_trains;
    string command = "";
    while (command != "depart")
    {
        cout << "Train" << designation << "wait command:";
        cin >> command;
    }
    cout << "Train " << designation << "departs.";
}

int main()
{
    int time[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter time";
        cin >> time[i];
    }
    thread train1(arrival,time[0],"A");
    thread train2(arrival,time[1],"B");
    thread train3(arrival,time[2],"C");
    if(railway_station_assent.try_lock() && count_trains == 3){
        train1.join();
        train2.join();
        train3.join();
    }
}