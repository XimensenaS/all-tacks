#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
enum COLOUR
{
    RED,
    BLUE,
    GREEN,
    NONE
};

class Figure
{
public:
    double abscessCenter;
    double ordinateCenter;
    COLOUR coloring;

    Figure(double abscess, double ordinate, COLOUR color) : ordinateCenter(ordinate), abscessCenter(abscess), coloring(color) {}
    void getColoring()
    {
        if (coloring == COLOUR::RED)
        {
            cout << "Red.";
        }
        else if (coloring == COLOUR::BLUE)
        {
            cout << "Blue.";
        }
        else if (coloring == COLOUR::GREEN)
        {
            cout << "Green.";
        }
        else
        {
            cout << "colorless.";
        }
        cout << endl;
    }
};

class Circle : public Figure
{
private:
    double radius;

public:
    Circle(double ocdinate, double abscess, COLOUR color, double rad) : Figure(ocdinate, abscess, color), radius(rad) {}
    void squareCircle()
    {
        cout << "Square circle:" << atan(1) * 4 * radius * radius << endl;
    }
    void describingCircle()
    {
        cout << "A:" << abscessCenter - radius - .01 << " " << ordinateCenter + radius + .01 << endl;
        cout << "B:" << abscessCenter + radius + .01 << " " << ordinateCenter + radius + .01 << endl;
        cout << "C:" << abscessCenter + radius + .01 << " " << ordinateCenter - radius - .01 << endl;
        cout << "D:" << abscessCenter - radius - .01 << " " << ordinateCenter - radius - .01 << endl;
    }
};

class Square : public Figure
{
public:
    double edgeLength;
    Square(double ocdinate, double abscess, COLOUR color, double edge) : Figure(ocdinate, abscess, color), edgeLength(edge) {}
    virtual void squareFigure()
    {
        cout << "Square area:" << edgeLength * edgeLength << endl;
    }
    virtual void describingFigure()
    {
        double halfEdge = edgeLength / 2;
        cout << "A:" << abscessCenter - halfEdge - .01 << " " << ordinateCenter + halfEdge + .01 << endl;
        cout << "B:" << abscessCenter + halfEdge + .01 << " " << ordinateCenter + halfEdge + .01 << endl;
        cout << "C:" << abscessCenter + halfEdge + .01 << " " << ordinateCenter - halfEdge - .01 << endl;
        cout << "D:" << abscessCenter - halfEdge - .01 << " " << ordinateCenter - halfEdge - .01 << endl;
    }
};

class Triangle : public Square
{
public:
    Triangle(double ocdinate, double abscess, COLOUR color, double edge) : Square(ocdinate, abscess, color, edge) {}
    void squareFigure() override
    {
        cout << "Square triangle:" << edgeLength * edgeLength * sqrt(3) / 4 << endl;
    }
    void describingFigure() override
    {
        double halfEdge = edgeLength / 2;
        cout << "A:" << abscessCenter - halfEdge - .01 << " " << ordinateCenter + edgeLength + .01 << endl;
        cout << "B:" << abscessCenter + halfEdge + .01 << " " << ordinateCenter + edgeLength + .01 << endl;
        cout << "C:" << abscessCenter + halfEdge + .01 << " " << ordinateCenter - edgeLength - .01 << endl;
        cout << "D:" << abscessCenter - halfEdge - .01 << " " << ordinateCenter - edgeLength - .01 << endl;
    }
};

class Rectangle : public Figure
{
private:
    double height;
    double wigth;

public:
    Rectangle(double ocdinate, double abscess, COLOUR color, double _height, double _wigth) : Figure(ocdinate, abscess, color), height(_height), wigth(_wigth) {}
    void squareRectangle()
    {
        cout << "Square rectange: " << height * wigth << endl;
    }
    void describingRectangle()
    {
        cout << "A:" << abscessCenter - wigth / 2 - .01 << " " << ordinateCenter + height / 2 + .01 << endl;
        cout << "B:" << abscessCenter + wigth / 2 + .01 << " " << ordinateCenter + height / 2 + .01 << endl;
        cout << "C:" << abscessCenter + wigth / 2 + .01 << " " << ordinateCenter - height / 2 - .01 << endl;
        cout << "D:" << abscessCenter - wigth / 2 - .01 << " " << ordinateCenter - height / 2 - .01 << endl;
    }
};

COLOUR coloring(string colour)
{
    if(colour == "Red")
    {
        return COLOUR::RED;
    }
    else if (colour == "Blue")
    {
        return COLOUR::BLUE;
    }
    else if (colour == "Green")
    {
        return COLOUR::GREEN;
    }
    return COLOUR::NONE;
}