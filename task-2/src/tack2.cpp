#include <iostream>
#include <vector>
#include "geometric_figure.h"

using namespace std;

int main()
{
    cout << "Enter figure: ";
    string command;
    cin >> command;
    if (command == "Circle")
    {
        cout << "Enter coodinates center (X and Y):" << endl;
        double X, Y, R;
        cin >> X >> Y;
        cout << "Enter colour:" << endl;
        string color;
        cin >> color;
        cout << "Enter radius circle:" << endl;
        cin >> R;
        Circle *circle = new Circle(X, Y, coloring(color), R);
        circle->squareCircle();
        circle->getColoring();
        circle->describingCircle();
        delete circle;
    }
    else if (command == "Square")
    {
        cout << "Enter coodinates center (X and Y):" << endl;
        double X, Y, length;
        cin >> X >> Y;
        cout << "Enter colour:" << endl;
        string color;
        cin >> color;
        cout << "Enter length side:" << endl;
        cin >> length;
        Square *square = new Square(X, Y, coloring(color), length);
        square->squareFigure();
        square->getColoring();
        square->describingFigure();
        delete square;
    }
    else if (command == "Triangle")
    {
        cout << "Enter coodinates center (X and Y):" << endl;
        double X, Y, length;
        cin >> X >> Y;
        cout << "Enter colour:" << endl;
        string color;
        cin >> color;
        cout << "Enter length side:" << endl;
        cin >> length;
        Triangle *triangle = new Triangle(X, Y, coloring(color), length);
        triangle->squareFigure();
        triangle->getColoring();
        triangle->describingFigure();
        delete triangle;
    }
    else if (command == "Rectangle")
    {
        cout << "Enter coodinates center (X and Y):" << endl;
        double X, Y, H, W;
        cin >> X >> Y;
        cout << "Enter colour:" << endl;
        string color;
        cin >> color;
        cout << "Enter height and wirth:" << endl;
        cin >> H >> W;
        Rectangle *rectangle = new Rectangle(X, Y, coloring(color), H, W);
        rectangle->squareRectangle();
        rectangle->getColoring();
        rectangle->describingRectangle();
        delete rectangle;
    }
    else
    {
        cout << "Figure not found." << endl;
    }
}