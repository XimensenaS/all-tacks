#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void swapvec(vector<int>& x,int z[]){
    for(int i=0;i<x.size();i++){
        int y=x[i];
        x[i]=z[i];
        z[i]=y;
    }
}

int jump1(int n){
    if(n==1||n==0)return 1;
    if(n==2)return 2;
    else{
        return jump1(n-1) + jump1(n-2) + jump1(n-3);
    }
}

int jump2(int n,int k=3){
    if(n==1||n==0)return 1;
    else{
        int res=0;
        for(int i=1;i<=k;i++){
            res +=jump2(n-i,k);
        }
        return res;
    }
}

void count_even(long long z,int& c){
    if(z%10%2==0){c++;}
    if(z/10>0)count_even(z/10,c);
}

int main()
{
    vector<int> a = {1,2,3,4};

    int b[] = {2,4,6,8};

    swapvec(a,b);

    for(int i = 0; i < 4; ++i)

       cout << a[i];

    cout << endl;

    for(int i = 0; i < 4; ++i)

        cout << b[i];
    cout << endl;
    int num_step,max_range=0;
    cout << "Enter the step number"<<endl;
    cin >> num_step;
    cout << jump1(num_step)<< endl;
    cout << "Enter the step number and max range jump"<<endl;
    cin >> num_step >> max_range;
    int count_jump = (max_range==0)?jump2(num_step):jump2(num_step,max_range);
    cout << count_jump << endl;
    int ans=0;
    count_even(9223372036854775806, ans);
    cout << "Ans:" <<ans << endl;
}
