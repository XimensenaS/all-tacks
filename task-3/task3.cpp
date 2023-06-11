
#include <iostream>

using namespace std;
#define advertisement(start, end) start##_##end

#define cycle(s)                 \
    for (int i = 0; i < 10; i++) \
    {                            \
        s;                       \
    }

bool check_overflow(int z)
{
    return z > 20;
}

bool check_empty(int z)
{
    return z == 0;
}

int main()
{
    int train_van[10];
    int passenger_sum = 0;
    cycle(cout << "Enter count passenger in " << i + 1 << " van:";
          cin >> advertisement(train, van)[i];
          sum += advertisement(train, van)[i];);
    cycle(if (advertisement(check, overflow)(advertisement(train, van)[i]))
                  cout << "Overflow in " << i + 1 << " van." << endl;
          if (advertisement(check, empty)(advertisement(train, van)[i]))
                  cout << i + 1 << " van empty." << endl;)
    cout << "Passenger in train " << advertisement(passenger,sum) << "people.";
}
