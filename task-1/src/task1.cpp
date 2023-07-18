#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>
#include <algorithm>

using namespace std;

vector<int> timer;
mutex timer_assent;

void swim(int speed)
{

    int time = 0;
    for (int distance = 0; distance < 100; distance += speed, time++)
    {
        this_thread::sleep_for(chrono::seconds(1));
    }
    timer_assent.unlock();
    timer.push_back(time);
    timer_assent.lock();
}

int main()
{
    thread swimmer1(swim, 13);
    thread swimmer2(swim, 11);
    thread swimmer3(swim, 14);
    thread swimmer4(swim, 15);
    thread swimmer5(swim, 10);
    swim(12);
    swimmer1.join();
    swimmer2.join();
    swimmer3.join();
    swimmer4.join();
    swimmer5.join();
    sort(timer.begin(), timer.end());
    timer_assent.unlock();
    for(int i = 0;i < 6;i++)
    {
        cout << timer[i]<< endl;
    }
}