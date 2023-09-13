#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <QApplication>
#include <QtWidgets/QLineEdit>
#include <QPushButton>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QMediaPlayer>

using namespace std;

class ImageButton: public QPushButton
{
    Q_OBJECT
    QPixmap curImage;
public:
    ImageButton(QWidget *parent = nullptr)
    {
        setParent(parent);
        setFixedSize(512,512);
        curImage = QPixmap("C:/Users/User/Downloads/free-icon-start-button-5453658.png");
    }
    ~ImageButton(){}
    void paintEvent(QPaintEvent *e) override
    {
        QPainter p(this);
        p.drawPixmap(e->rect(),curImage);
    };
};

#endif // MAINWINDOW_H
