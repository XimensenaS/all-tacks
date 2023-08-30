#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <string>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Remotecontroller window(nullptr);
    Ui::MainWindow remotecontroller;
    remotecontroller.setupUi(&window);
    window.channels = remotecontroller.channels;
    window.volume = remotecontroller.volume;
    window.show();
    return a.exec();
}
