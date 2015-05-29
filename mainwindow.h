#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QDesktopWidget>
#include <QKeyEvent>
#include <QWidget>
#include <time.h>
#include <QTime>
#include <QLabel>
#include <QPushButton>
#include <QFont>
#include <QGridLayout>
#include <QImage>
#include <QMenuBar>
#include <QAction>
#include <QMenu>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include <QDebug>
#include <time.h>
#include <QTime>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class game;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void set_restart_visible();
    void set_blocks_visible();
    void set_blocks_invisible();

public slots:
    void quit();
    void view_rank();

private:
    QAction *Restart;
    QMenu *Change_icon;
    QAction *Rank;
    QAction *Quit;
    QMenu *Change_mode;
    QAction *Icon_normal;
    QAction *Icon_differ;
    QAction *Mode_normal;
    QAction *Mode_block;
    QActionGroup *decide_icon;
    QActionGroup *decide_mode;
    QMenu *menu_blocks;
    QAction *add_blocks;
    QAction *dim_blocks;
};

#endif // MAINWINDOW_H
