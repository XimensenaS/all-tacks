#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QRegularExpression"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit,&QLineEdit::textEdited,[this](QString currentText)
            {
        QRegularExpression exp("^\\+?\\d{10}[0-9]$");
        if(exp.match(currentText).hasMatch())
        {
            setOk();
        }
        else
        {
            setNotOk();
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOk()
{
    ui->label->setText("OK");
    ui->label->setStyleSheet("QLabel {color : green}");
}

void MainWindow::setNotOk()
{
    ui->label->setText("Not Ok");
    ui->label->setStyleSheet("QLabel {color : red}");
}

