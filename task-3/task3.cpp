#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

struct Vector
{
    float x;
    float y;
};

Vector get_coordinate(Vector &any, char l){
    cout << "Enter the abscissa(x) of the vector "<< l <<":";
    cin  >> any.x;
    cout << "Enter the ordinate(y) of the vector "<< l <<":";
    cin  >> any.y;
    return any;
}

Vector add_vector(Vector &A,Vector &B){
    Vector temp;
    temp.x=A.x+B.x;
    temp.y=A.y+B.y;
 
    return temp;
} 

Vector subtract_vector(Vector &A,Vector &B){
    B.x= -B.x;
    B.y= -B.y;
    return add_vector(A,B);
}

void scale_vector(Vector &any){
    cout << "Enter a scalar:";
    int scalar;
    cin >> scalar;
    any.x *= scalar;
    any.y *= scalar;
}

float length_vector(Vector &any){
    return sqrt(pow(any.x,2)+pow(any.y,2));
}

void normalize_vector(Vector &any){
    int len = length_vector(any);
    any.x /= len;
    any.y /= len;
}

void print_vector(Vector any, char l){
    cout << "The abscissa(x) of the vector " << l << "  = " << any.x<< endl;
    cout << "The ordinate(y) of the vector " << l << "  = " << any.y<< endl;  
}

int main()
{
    cout << "Enter command:";
    string command;
    cin >> command;
    if(command == "add"){
        Vector A,B,C;
        A = get_coordinate(A,'A');
        B = get_coordinate(B,'B');
        C = add_vector(A,B);
        print_vector(C,'C');
    }
    else if(command =="subtract"){
        Vector A,B,C;
        A = get_coordinate(A,'A');
        B = get_coordinate(B,'B');
        C = subtract_vector(A,B);
        print_vector(C,'C');
    }
    else if(command =="scale"){
        Vector A;
        A = get_coordinate(A,'A');
        scale_vector(A);
        print_vector(A,'A');
    }
    else if(command =="length"){
        Vector A;
        A = get_coordinate(A,'A');
        cout << "Length vector = " << length_vector(A);
    }
    else if(command =="normalize"){
        Vector A;
        A = get_coordinate(A,'A');
        normalize_vector(A);
        print_vector(A,'A');
    }
    else{}
}
