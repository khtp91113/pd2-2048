#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w=new MainWindow;
    QWidget *w_1=new QWidget;
    w->setWindowTitle("2048");
    QPushButton *button_1=new QPushButton("Restart");
    QPushButton *button_2=new QPushButton("End");
    w->connect(button_2,SIGNAL(clicked()),&a,SLOT(quit()));
    QLCDNumber *lcd_score=new QLCDNumber;
    QLCDNumber *lcd_bestscore=new QLCDNumber;
    QGridLayout *layout=new QGridLayout;
    layout->addWidget(button_1,2,2,2,3);
    layout->addWidget(button_2,2,12,2,3);
    layout->addWidget(lcd_bestscore,1,5,2,6);
    layout->addWidget(lcd_score,4,5,2,6);
  
    w_1->setLayout(layout);
    w->setCentralWidget(w_1);

    w->show();

    return a.exec();
}
