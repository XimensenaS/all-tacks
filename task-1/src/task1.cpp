#include "Ui_MainWindow.h"
#include "scalculator.h"

#include <iostream>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculationMainWindow window(nullptr);
    Ui::MainWindow scalculation;
    scalculation.setupUi(&window);
    window.num1 = scalculation.num1;
    window.result = scalculation.result;
    window.sign = scalculation.sign;
    window.show();
    return a.exec();
}

