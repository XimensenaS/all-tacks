#ifndef UNTITLEDJFKMER_H
#define UNTITLEDJFKMER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sign;
    QLineEdit *num1;
    QLineEdit *result;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *multiplication;
    QPushButton *addition;
    QPushButton *division;
    QPushButton *difference;
    QPushButton *erasing;
    QGridLayout *gridLayout;
    QPushButton *three;
    QPushButton *two;
    QPushButton *seven;
    QPushButton *four;
    QPushButton *one;
    QPushButton *point;
    QPushButton *five;
    QPushButton *six;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *zero;
    QPushButton *equal;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(421, 297);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        sign = new QLineEdit(centralwidget);
        sign->setObjectName(QString::fromUtf8("sign"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sign->sizePolicy().hasHeightForWidth());
        sign->setSizePolicy(sizePolicy);
        sign->setMinimumSize(QSize(55, 30));
        sign->setMaximumSize(QSize(70, 100));

        horizontalLayout_2->addWidget(sign);

        num1 = new QLineEdit(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);
        num1->setMinimumSize(QSize(0, 30));
        num1->setMaximumSize(QSize(16777215, 100));
        num1->setReadOnly(true);

        horizontalLayout_2->addWidget(num1);


        verticalLayout->addLayout(horizontalLayout_2);

        result = new QLineEdit(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy2);
        result->setMinimumSize(QSize(0, 40));
        result->setMaximumSize(QSize(16777215, 55));

        verticalLayout->addWidget(result);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        multiplication = new QPushButton(centralwidget);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(multiplication->sizePolicy().hasHeightForWidth());
        multiplication->setSizePolicy(sizePolicy3);
        multiplication->setMinimumSize(QSize(0, 20));
        multiplication->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_3->addWidget(multiplication);

        addition = new QPushButton(centralwidget);
        addition->setObjectName(QString::fromUtf8("addition"));
        sizePolicy3.setHeightForWidth(addition->sizePolicy().hasHeightForWidth());
        addition->setSizePolicy(sizePolicy3);
        addition->setMinimumSize(QSize(0, 20));
        addition->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_3->addWidget(addition);

        division = new QPushButton(centralwidget);
        division->setObjectName(QString::fromUtf8("division"));
        sizePolicy3.setHeightForWidth(division->sizePolicy().hasHeightForWidth());
        division->setSizePolicy(sizePolicy3);
        division->setMinimumSize(QSize(0, 20));
        division->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_3->addWidget(division);

        difference = new QPushButton(centralwidget);
        difference->setObjectName(QString::fromUtf8("difference"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(difference->sizePolicy().hasHeightForWidth());
        difference->setSizePolicy(sizePolicy4);
        difference->setMinimumSize(QSize(0, 20));
        difference->setMaximumSize(QSize(16777215, 80));

        horizontalLayout_3->addWidget(difference);

        erasing = new QPushButton(centralwidget);
        erasing->setObjectName(QString::fromUtf8("erasing"));
        sizePolicy3.setHeightForWidth(erasing->sizePolicy().hasHeightForWidth());
        erasing->setSizePolicy(sizePolicy3);
        erasing->setMinimumSize(QSize(0, 20));
        erasing->setMaximumSize(QSize(16777215, 80));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("accessories-text-editor");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("../../../.designer/backup"), QSize(), QIcon::Normal, QIcon::Off);
        }
        erasing->setIcon(icon);

        horizontalLayout_3->addWidget(erasing);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        sizePolicy2.setHeightForWidth(three->sizePolicy().hasHeightForWidth());
        three->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(three, 0, 2, 1, 1);

        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        sizePolicy2.setHeightForWidth(two->sizePolicy().hasHeightForWidth());
        two->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(two, 0, 1, 1, 1);

        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        sizePolicy2.setHeightForWidth(seven->sizePolicy().hasHeightForWidth());
        seven->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(seven, 2, 0, 1, 1);

        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        sizePolicy2.setHeightForWidth(four->sizePolicy().hasHeightForWidth());
        four->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(four, 1, 0, 1, 1);

        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        sizePolicy2.setHeightForWidth(one->sizePolicy().hasHeightForWidth());
        one->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(one, 0, 0, 1, 1);

        point = new QPushButton(centralwidget);
        point->setObjectName(QString::fromUtf8("point"));
        sizePolicy2.setHeightForWidth(point->sizePolicy().hasHeightForWidth());
        point->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(point, 3, 0, 1, 1);

        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        sizePolicy2.setHeightForWidth(five->sizePolicy().hasHeightForWidth());
        five->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(five, 1, 1, 1, 1);

        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        sizePolicy2.setHeightForWidth(six->sizePolicy().hasHeightForWidth());
        six->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(six, 1, 2, 1, 1);

        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        sizePolicy2.setHeightForWidth(eight->sizePolicy().hasHeightForWidth());
        eight->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(eight, 2, 1, 1, 1);

        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        sizePolicy2.setHeightForWidth(nine->sizePolicy().hasHeightForWidth());
        nine->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(nine, 2, 2, 1, 1);

        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        sizePolicy2.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(zero, 3, 1, 1, 1);

        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy2.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(equal, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 421, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);
        QObject::connect(multiplication, SIGNAL(clicked()), MainWindow, SLOT(addMultiple()));
        QObject::connect(addition, SIGNAL(clicked()), MainWindow, SLOT(addAdd()));
        QObject::connect(division, SIGNAL(clicked()), MainWindow, SLOT(addDiv()));
        QObject::connect(difference, SIGNAL(clicked()), MainWindow, SLOT(addDiff()));
        QObject::connect(erasing, SIGNAL(clicked()), MainWindow, SLOT(eraseLastNum()));
        QObject::connect(one, SIGNAL(clicked()), MainWindow, SLOT(add1()));
        QObject::connect(two, SIGNAL(clicked()), MainWindow, SLOT(add2()));
        QObject::connect(three, SIGNAL(clicked()), MainWindow, SLOT(add3()));
        QObject::connect(zero, SIGNAL(clicked()), MainWindow, SLOT(add0()));
        QObject::connect(four, SIGNAL(clicked()), MainWindow, SLOT(add4()));
        QObject::connect(five, SIGNAL(clicked()), MainWindow, SLOT(add5()));
        QObject::connect(six, SIGNAL(clicked()), MainWindow, SLOT(add6()));
        QObject::connect(seven, SIGNAL(clicked()), MainWindow, SLOT(add7()));
        QObject::connect(eight, SIGNAL(clicked()), MainWindow, SLOT(add8()));
        QObject::connect(nine, SIGNAL(clicked()), MainWindow, SLOT(add9()));
        QObject::connect(equal, SIGNAL(clicked()), MainWindow, SLOT(Calculion()));
        QObject::connect(point, SIGNAL(clicked()), MainWindow, SLOT(addPoint()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        difference->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        erasing->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UNTITLEDJFKMER_H