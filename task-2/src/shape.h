#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct BoundingBoxDimensions
{
    double width;
    double height;
};

class Shape
{
protected:
    BoundingBoxDimensions dimension;

public:
    virtual double square() = 0;
    virtual BoundingBoxDimensions dimensions() = 0;
    virtual string type() = 0;
};

class Circle : virtual public Shape
{
private:
    double radius;

public:
    virtual double square()
    {
        return atan(1) * 4 * radius * radius;
    }
    virtual BoundingBoxDimensions dimensions()
    {
        return dimension;
    }
    virtual string type()
    {
        return "Circle";
    }
    Circle(double _radius) : radius(_radius)
    {
        this->dimension.height = _radius * 2;
        this->dimension.width = _radius * 2;
    }
};

class Rectangle : virtual public Shape
{
private:
    double lenght;
    double widthRectangle;

public:
    virtual double square()
    {
        return lenght * widthRectangle;
    }
    virtual BoundingBoxDimensions dimensions()
    {
        return dimension;
    }
    virtual string type()
    {
        return "Rectangle";
    }
    Rectangle(double _lenght, double _width) : lenght(_lenght), widthRectangle(_width)
    {
        this->dimension.height = _lenght;
        this->dimension.width = _width;
    }
};

class Triangle : virtual public Shape
{
private:
    double a, b, c;
    double p = (a + b + c) / 2;

public:
    virtual double square()
    {
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    virtual BoundingBoxDimensions dimensions()
    {
        return dimension;
    }
    virtual string type()
    {
        return "Triangle";
    }
    Triangle(double _a, double _b, double _c) : a(_a), b(_b), c(_c)
    {
        double side = a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))) * 2;
        this->dimension.height = side;
        this->dimension.width = side;
    }
};

void printParams(Shape *_shape)
{
    cout << "Type: " << _shape->type() << endl;
    cout << "Square: " << _shape->square() << endl;
    cout << "Wirth: " << _shape->dimensions().width << endl;
    cout << "Height: " << _shape->dimensions().height << endl;
}