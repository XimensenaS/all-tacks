#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen
{
private:
    int startX = 0;
    int startY = 0;
    int width = 12;
    int height = 10;

public:
    void setWidth()
    {
        cin >> width;
    }
    void setHeight()
    {
        cin >> height;
    }
    int getStartX()
    {
        return startX;
    }
    int getStartY()
    {
        return startY;
    }
    int getWidth()
    {
        return width;
    }
    int getHeigth()
    {
        return height;
    }
    void moveScreen()
    {
        cout << "Enter the shift along the abscissa:" << endl;
        int shiftX, shiftY;
        cin >> shiftX >> shiftY;
        if (shiftX > -startX || shiftX < 80 - startX - width)
        {
            cerr << "Impossible shift." << endl;
        }
        else
        {
            if (shiftY > -startY || shiftY < 80 - startY - height)
            {
                cerr << "Impossible shift." << endl;
            }
            startX = +shiftX;
            startY = +shiftY;
        }
    }
    void resizeScreen()
    {
        cout << "Enter new width"<< endl;
        setWidth();
        cout << "Enter new heigth"<< endl;
        setHeight();
    }
};
