#include "mainb.h"

QImage blurImage(QPixmap source, int blurRadius)
{
    if(source.isNull()) {
        return QImage();
    }
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(source);

    auto *blur = new QGraphicsBlurEffect;
    blur->setBlurRadius(blurRadius);
    item.setGraphicsEffect(blur);
    scene.addItem(&item);
    QImage result(source.size(),QImage::Format_ARGB32);
    result.fill(Qt::transparent);
    QPainter paint(&result);
    scene.render(&paint,QRectF(),
                 QRectF(0,0,source.width(),source.height()));
    return result;
}

MainB::MainB(QWidget *parent)
    : QWidget(parent)
{

    slider = new QSlider(Qt::Horizontal);
    buttonForPath = new QPushButton("Open");
    labelImage = new QLabel(this);
    layout = new QVBoxLayout(this);

    this->setLayout(layout);

    layout->addWidget(labelImage);
    layout->addWidget(slider);
    layout->addWidget(buttonForPath);

    slider->setMaximum(0);
    slider->setMaximum(10);
    connect(buttonForPath,&QPushButton::clicked,[this]()
    {
        auto filepath = QFileDialog::getOpenFileName(nullptr,"Open png file","/Qt/","png(*.png)");
        png = QPixmap(filepath);
        labelImage->setPixmap(png.scaled(png.width(),png.height(), Qt::KeepAspectRatio));
    });
    connect(slider,&QSlider::valueChanged,[this](int value)
    {
        auto image = blurImage(png,value);
        labelImage->setPixmap(QPixmap::fromImage(image).scaled(
                                    labelImage->width(),
                                    labelImage->height(),
                                    Qt::KeepAspectRatio));
    });
}

MainB::~MainB()
{
    delete slider;
    delete buttonForPath;
    delete labelImage;
    delete layout;
}




