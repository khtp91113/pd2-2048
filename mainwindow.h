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
    explicit MainWindow(QWidget *parent = 0);//設定初始mainwindow格式
    ~MainWindow();
    void set_restart_visible();//設定選單列的restart顯示
    void set_blocks_visible();//設定選單列的block顯示
    void set_blocks_invisible();//設定選單列的block隱藏

public slots:
    void quit();//選單列的quit 程式結束
    void view_rank();//打開rank資料庫

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
