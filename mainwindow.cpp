#include "mainwindow.h"
#include "game.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QMenu *menu=new QMenu("&Options");
    Restart=new QAction("Restart",this);
    Rank=new QAction("Rank",this);
    Quit=new QAction("Quit",this);
    Change_model=new QAction("Change model",this);
    connect(Quit,SIGNAL(triggered()),this,SLOT(quit()));
    menu->addAction(Restart);
    Restart->setDisabled(true);
    menu->addAction(Change_model);
    Change_model->setDisabled(true);
    menu->addAction(Rank);
    menu->addAction(Quit);
    QMenuBar *menubar=new QMenuBar;
    menubar->addMenu(menu);
    this->setMenuBar(menubar);
}

MainWindow::~MainWindow()
{

}

void MainWindow::quit()
{
    QMediaPlayer *warning=new QMediaPlayer;
    warning->setMedia(QUrl("qrc:/music/warning.mp3"));
    warning->play();
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to quit?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/back/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
        exit(1);
}

void MainWindow::set_restart_activate()
{
    Restart->setEnabled(true);
}

void MainWindow::set_Change_activate()
{
    Change_model->setEnabled(true);
}
