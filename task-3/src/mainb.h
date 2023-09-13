#ifndef MAINB_H
#define MAINB_H

#include <QWidget>>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QGraphicsScene>
#include <QGraphicsBlurEffect>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QVBoxLayout>
#include <QPixmap>
#include <iostream>>


class MainB : public QWidget
{
    Q_OBJECT

public:
    MainB(QWidget *parent = nullptr);
    ~MainB();

private slots:

private:
    QPixmap png;
    QLabel *labelImage;
    QSlider *slider;
    QPushButton *buttonForPath;
    QVBoxLayout *layout;
};

QImage blurImage(QImage source, int blurRadius);
#endif // MAINB_H
