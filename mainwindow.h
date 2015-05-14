#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include <QDebug>
#include <time.h>
#include <QTime>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
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

};

#endif // MAINWINDOW_H
