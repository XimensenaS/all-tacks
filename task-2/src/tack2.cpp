#include <iostream>
#include <vector>
#include <cassert>
#include <string>
#include <exception>
#include <memory>
#include <unordered_set>
using namespace std;

int main()
{
    auto f = [](vector<int> vec)
    {
        unordered_set<int> r;
        for (auto nums : vec)
        {
            if (!r.count(nums))
            {
                r.insert(nums);
            }
        }
        auto x = make_unique<vector<int>>(r.begin(), r.end());
        return x;
    };
}
