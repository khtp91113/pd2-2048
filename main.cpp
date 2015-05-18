#include "mainwindow.h"
<<<<<<< HEAD
#include "game.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QDesktopWidget dw;
    int width=dw.width()*0.75;
    int height=dw.height()*0.75;
    if(width>height)
        width=height;
    else if(width<height)
        height=width;
    w.setMinimumSize(width,height);
    w.setWindowTitle("2048");

    game*m=new game;
    w.setCentralWidget(m);
    m->getmain(w);

    w.show();
=======
#include "ui_mainwindow.h"
#include "proj_2048.h"
#include <QApplication>
#include <QtGui>
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w=new MainWindow;
    w->setStyleSheet("#MainWindow{border-image:url(:/background/back.jpg);}");
    w->setWindowTitle("2048");
    QDesktopWidget dw;
    int width=dw.width()*0.7;
    int height=dw.height()*0.7;
    w->setMinimumSize(width,height);
    w->setFocus();
    w->show();
    w->set_check();
    w->random_generate();
    w->random_generate();


>>>>>>> c3bafb205848e51123afdaba602d6ba05f5d7812


    return a.exec();
}
<<<<<<< HEAD

=======
>>>>>>> c3bafb205848e51123afdaba602d6ba05f5d7812
