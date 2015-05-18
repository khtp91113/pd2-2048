#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
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
=======
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include <QDebug>
#include <time.h>
#include <QTime>
>>>>>>> c3bafb205848e51123afdaba602d6ba05f5d7812
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
<<<<<<< HEAD
    friend class game;
=======

>>>>>>> c3bafb205848e51123afdaba602d6ba05f5d7812

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
<<<<<<< HEAD
    void set_restart_activate();
    void set_Change_activate();

public slots:
    void quit();
private:
    QAction *Restart;
    QAction *Change_model;
    QAction *Rank;
    QAction *Quit;
=======
    void set_check();
    void random_generate();
    void game_start();
    void keyPressEvent(QKeyEvent *event);
    void select_pic();
    void judge();
    void elapse();



private slots:
    void on_button_2_clicked();

    void on_button_1_clicked();

private:
    Ui::MainWindow *ui;
    int check[16];

>>>>>>> c3bafb205848e51123afdaba602d6ba05f5d7812
};

#endif // MAINWINDOW_H
