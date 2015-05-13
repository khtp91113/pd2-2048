#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "proj_2048.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w=new MainWindow;
    w->setStyleSheet("#MainWindow{border-image:url(:/background/background.png);}");
    w->setWindowTitle("2048");
    QDesktopWidget dw;
    int width=dw.width()*0.7;
    int height=dw.height()*0.7;
    w->setMinimumSize(width,height);
    w->show();

    return a.exec();
}
