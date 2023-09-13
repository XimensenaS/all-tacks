#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <iostream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageButton button(nullptr);

    button.setFixedSize(250,250);
    button.move(1000,400);
    button.show();
    auto player = new QMediaPlayer(&button);
    QObject::connect(&button,&QPushButton::clicked,[&player]()
    {
        player->setMedia(QUrl::fromLocalFile("C:/Users/User/Downloads/sound.mp3"));
        player->setVolume(100);
        player->play();
    });
    return a.exec();
}
