#include "mainb.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainB w;
    w.show();
    return a.exec();
}
