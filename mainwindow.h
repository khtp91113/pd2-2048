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
    void set_restart_activate();
    void set_Change_activate();

public slots:
    void quit();
    void view_rank();
private:
    QAction *Restart;
    QAction *Change_model;
    QAction *Rank;
    QAction *Quit;
};

#endif // MAINWINDOW_H