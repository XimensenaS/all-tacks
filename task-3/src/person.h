#include <QMainWindow>
#include <QLineEdit>

class Remotecontroller : public QMainWindow
{
    Q_OBJECT

public:
    Remotecontroller(QWidget *parent = nullptr): QMainWindow(parent){};
    ~Remotecontroller(){};
    QLineEdit *volume;
    QLineEdit *channels;
private slots:
    void channel0(){channels->setText("0");}
    void channel1(){channels->setText("1");}
    void channel2(){channels->setText("2");}
    void channel3(){channels->setText("3");}
    void channel4(){channels->setText("4");}
    void channel5(){channels->setText("5");}
    void channel6(){channels->setText("6");}
    void channel7(){channels->setText("7");}
    void channel8(){channels->setText("8");}
    void channel9(){channels->setText("9");}
    void next()
    {
        auto x = channels->text().toInt() + 1;
        if(x > 9)
            x= 0;
        channels->setText(QString::number(x));
    }
    void previos()
    {
        auto x = channels->text().toInt() - 1;
        channels->setText(QString::number(x));
    }
    void increase()
    {
        auto x = volume->text().toInt();
        if(x != 100)
        {x += 10;}
        volume->setText(QString::number(x));
    }
    void revease()
    {
        auto x = volume->text().toInt();
        if(x != 0)
        {x -= 10;}
        volume->setText(QString::number(x));
    }
};