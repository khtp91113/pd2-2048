#include "mainwindow.h"
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
    else
        height=width;
    w.setMinimumSize(width,height);
    w.setWindowTitle("2048");

    game*m=new game;
    w.setCentralWidget(m);
    m->getmain(w);

    w.show();
    return a.exec();
}

