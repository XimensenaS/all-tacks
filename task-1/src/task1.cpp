#include <iostream>
#include <QApplication>
#include <QSlider>
#include <QPixmap>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QVBoxLayout>

class CircleNew : public QWidget
{
    Q_OBJECT
public:
    CircleNew() = default;
    CircleNew(QWidget *parent);
    void paintEvent(QPaintEvent *e) override;
    ~CircleNew();
public slots:
    void setYellow();
    void setRed();
    void setGreen();
private:
    QPixmap cCurrentColourPixmap;
    QPixmap cRedColourPixmap;
    QPixmap cYellowColourPixmap;
    QPixmap cGreenColourPixmap;
};

CircleNew::CircleNew(QWidget *parent)
{
    setParent(parent);
    setFixedSize(200,250);
    setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    cRedColourPixmap = QPixmap("C:/Users/User/all-tacks/task-1/src/circles/red");
    cGreenColourPixmap = QPixmap("C:/Users/User/all-tacks/task-1/src/circles/green");
    cYellowColourPixmap = QPixmap("C:/Users/User/all-tacks/task-1/src/circles/yellow");
    cCurrentColourPixmap = cGreenColourPixmap;
    setGeometry(cCurrentColourPixmap.rect());
}

void CircleNew::paintEvent(QPaintEvent *e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(),cCurrentColourPixmap);
}

void CircleNew::setGreen()
{
    cCurrentColourPixmap = cGreenColourPixmap;
    update();
}

void CircleNew::setYellow()
{
    cCurrentColourPixmap = cYellowColourPixmap;
    update();
}

void CircleNew::setRed()
{
    cCurrentColourPixmap = cRedColourPixmap;
    update();
}

CircleNew::~CircleNew()
{}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    auto *loyaut = new QVBoxLayout(window);
    auto *slider = new QSlider(Qt::Horizontal,window);
    auto *circle = new CircleNew(window);
    loyaut->addWidget(circle);
    loyaut->addWidget(slider);

    slider->setMinimum(0);
    slider->setMaximum(100);

    QObject::connect(slider,&QSlider::valueChanged,circle,[slider, circle](int newValue)
    {
        if (newValue > 34 && newValue <= 66)
            circle->setYellow();
        else if(newValue > 66)
            circle->setRed();
        else
            circle->setGreen();
    });

    window->show();
    return a.exec();
}

