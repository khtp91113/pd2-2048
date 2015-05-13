#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void random_generate();
    void game_start();
    void move();
    void judge();


private slots:
    void on_button_2_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
