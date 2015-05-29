#include "mainwindow.h"
#include "game.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    QMenu *menu=new QMenu("&Options");
    Restart=new QAction("Restart",this);
    Rank=new QAction("Rank",this);
    Quit=new QAction("Quit",this);
    Icon_normal=new QAction("正常版",this);
    Icon_differ=new QAction("生肖版",this);
    Mode_normal=new QAction("正常版",this);
    Mode_block=new QAction("障礙版",this);
    decide_icon=new QActionGroup(this);
    decide_icon->addAction(Icon_normal);
    Icon_normal->setCheckable(true);
    Icon_normal->setChecked(true);
    decide_icon->addAction(Icon_differ);
    Icon_differ->setCheckable(true);
    Icon_differ->setChecked(false);
    decide_icon->setExclusive(true);
    decide_mode=new QActionGroup(this);
    decide_mode->addAction(Mode_normal);
    Mode_normal->setCheckable(true);
    Mode_normal->setChecked(true);
    decide_mode->addAction(Mode_block);
    Mode_block->setCheckable(true);
    Mode_block->setChecked(false);
    decide_mode->setExclusive(true);
    Change_icon=new QMenu("&Change icon");
    Change_mode=new QMenu("&Change mode");
    connect(Quit,SIGNAL(triggered()),this,SLOT(quit()));
    menu->addAction(Restart);
    Restart->setVisible(false);
    menu->addMenu(Change_icon);
    Change_icon->addAction(Icon_normal);
    Change_icon->addAction(Icon_differ);
    menu->addMenu(Change_mode);
    Change_mode->addAction(Mode_normal);
    Change_mode->addAction(Mode_block);
    menu->addAction(Rank);
    connect(Rank,SIGNAL(triggered()),this,SLOT(view_rank()));
    menu->addAction(Quit);

    menu_blocks=new QMenu("&Blocks");
    menu_blocks->menuAction()->setVisible(false);
    add_blocks=new QAction("Add blocks",this);
    dim_blocks=new QAction("Diminish blocks",this);
    menu_blocks->addAction(add_blocks);
    menu_blocks->addAction(dim_blocks);


    QMenuBar *menubar=new QMenuBar;
    menubar->addMenu(menu);
    menubar->addMenu(menu_blocks);
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

void MainWindow::view_rank()
{
    rank *k=new rank;
}

void MainWindow::set_restart_visible()
{
    Restart->setVisible(true);
}

void MainWindow::set_blocks_visible()
{
    menu_blocks->menuAction()->setVisible(true);
}

void MainWindow::set_blocks_invisible()
{
    menu_blocks->menuAction()->setVisible(false);
}
