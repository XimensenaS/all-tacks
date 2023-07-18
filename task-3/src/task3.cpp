#include <string>
#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;
enum MEAL
{
    PIZZA,
    SOUP,
    STEAK,
    SALAD,
    SUSHI
};

int ready_meals = 0;
vector<MEAL> waiting_order;
int complite_order = 0;
mutex cooking;
mutex add_order;
mutex ready_order;
string meal [5]= {"pizza", "soup", "steak", "salad", "sushi"};

void waiter()
{
    while (complite_order < 10)
    {
        srand(time(nullptr));
        this_thread::sleep_for(chrono::seconds(5 + rand() % 6));
        add_order.lock();
        MEAL order = static_cast<MEAL>(rand() % 5);
        cout << "Get order for " << meal[order] << endl;
        waiting_order.push_back(order);
        add_order.unlock();
    }
}

void kitchen()
{
    while (complite_order < 10)
    {
        if (waiting_order.size() == 0)
            continue;
        add_order.lock();
        MEAL order = waiting_order.front();
        waiting_order.erase(waiting_order.cbegin());
        cout << "Started cooking " << meal[order] << endl;
        add_order.unlock();
        cooking.lock();
        this_thread::sleep_for(chrono::seconds(5 + rand() % 11));
        cooking.unlock();
        ready_order.lock();
        cout << "Order for " << meal[order] << " is ready." << endl;
        ready_meals++;
        ready_order.unlock();
    }
}

void courier()
{
    while (complite_order < 10)
    {
        if (ready_meals == 0)
            continue;
        ready_order.lock();
        cout << "Orders were taken for delivery" <<endl;
        int delivery = ready_meals;
        ready_meals = 0;
        ready_order.unlock(); 
        this_thread::sleep_for(chrono::seconds(10));
        cout << "Orders are delivered" <<endl;
        complite_order += delivery;
        this_thread::sleep_for(chrono::seconds(20));
    }
}

int main()
{
    thread Waiter(waiter);
    thread Kitchen(kitchen);
    thread Courier(courier);
    Waiter.join();
    Kitchen.join();
    Courier.join();
}