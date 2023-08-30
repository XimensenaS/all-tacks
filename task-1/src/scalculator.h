#pragma once
#include "Ui_MainWindow.h"
#include <string>
#include <QApplication>
#include <QtWidgets/QLineEdit>
using namespace std;

class CalculationMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    CalculationMainWindow(QWidget *parent = nullptr) : QMainWindow(parent){}
    ~CalculationMainWindow(){}
    QLineEdit *sign;
    QLineEdit *num1;
    QLineEdit *result;
    void enterNumber()
    {
        num1->setText(result->text());
        result->setText("");
    }
public slots:
    void add0(){result->setText(result->text() + "0");}
    void add1(){result->setText(result->text() + "1");}
    void add2(){result->setText(result->text() + "2");}
    void add3(){result->setText(result->text() + "3");}
    void add4(){result->setText(result->text() + "4");}
    void add5(){result->setText(result->text() + "5");}
    void add6(){result->setText(result->text() + "6");}
    void add7(){result->setText(result->text() + "7");}
    void add8(){result->setText(result->text() + "8");}
    void add9(){result->setText(result->text() + "9");}
    void addAdd()
    {
        sign->setText("+");
        enterNumber();
    };
    void addDiff()
    {
        sign->setText("-");
        enterNumber();
    };
    void addDiv()
    {
        sign->setText("/");
        enterNumber();
    };
    void addMultiple()
    {
        sign->setText("*");
        enterNumber();
    };
    void Calculion()
    {
        if (num1->text().isEmpty() || result->text().isEmpty())
        {
            string n1 = num1->text().toStdString();
            string n2 = result->text().toStdString();
            double num = atof(n1.c_str());
            double num2 = atof(n2.c_str());
            string action = sign->text().toStdString();
            double res;
            QString text1;
            if (action == "+")
            {
                res = num + num2;
                text1 = QStringLiteral("%1 + ").arg(num);
            }
            else if (action == "*")
            {
                res = num * num2;
                text1 = QStringLiteral("%1 * ").arg(num);
            }
            else if (action == "/")
            {

                res = num / num2;
                text1 = QStringLiteral("%1 / ").arg(num);
            }
            else if (action == "-")
            {
                res = num - num2;
                text1 = QStringLiteral("%1 - ").arg(num);
            }
            num1->setText(text1 + result->text());
            result->setText(QStringLiteral("%1").arg(res));
        }
        else
        {
            result->setText("Error");
        }
    };
    void addPoint(){result->setText(result->text() + ".");};
    void eraseLastNum()
    {
        string s = result->text().toStdString();
        s.pop_back();
        result->setText(QString::fromStdString(s));
    }
};