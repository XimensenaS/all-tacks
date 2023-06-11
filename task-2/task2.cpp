#include <iostream>

using namespace std;

#define SPRING  false
#define SUMMER  false
#define AUTUMN  false
#define WINTER  true


int main()
{
    #if SPRING
    cout << "Spring";
    #endif
    #if SUMMER
    cout << "Summer";
    #endif
    #if AUTUMN
    cout << "Autumn";
    #endif
    #if WINTER 
    cout << "Winter";
    #endif

}


                    
