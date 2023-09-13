#include "mainwindow.h"
#include <QtGui/QtGui>
#include <QApplication>
#include <QWebEngineView>
#include <QPlainTextEdit>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto *window = new QWidget();
    auto *layout = new QHBoxLayout(window);
    auto *editor = new QPlainTextEdit();
    auto *view = new QWebEngineView();


    layout->addWidget(editor);
    layout->addWidget(view);

    editor->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    view->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    QObject::connect(editor,&QPlainTextEdit::textChanged,[&editor,&view]()
                     {
        auto addressHTML = editor->toPlainText();
        view->setHtml(addressHTML);
    });


    
    window->resize(1900,1000);
    window->show();
    return a.exec();
}
