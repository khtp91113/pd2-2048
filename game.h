#ifndef GAME_H
#define GAME_H
#include "mainwindow.h"
#include "rank.h"
#include <QMainWindow>
#include <QWidget>
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
#include <QObject>
#include <QMessageBox>
#include <QMenuBar>
#include <QLCDNumber>
#include <QPixmap>
#include <QDialog>
#include <QLineEdit>
#include <QMediaPlayer>
#include <QtSql>
#include <QTableView>
#include <QMap>
#include <QMediaPlaylist>

class game : public QWidget
{
    Q_OBJECT
public:
    explicit game(QWidget *parent = 0);
    ~game();
    void game_start();
    void set_check();
    void random_generate();
    void select_pic();
    void judge();
    void elapse();
    void getmain(MainWindow &w);
    void random_generate_for_begin();
    void add_score(int b);
    void set_score();
    void display_score();
    void enough();
    void set_once();
    void select_forbid();

protected:
    void resizeEvent(QResizeEvent *event);
    void keyPressEvent(QKeyEvent *event);
signals:

public slots:
    void button_quit_click();
    void button_start_click();
    void restart();
    void quit();
    void restart_for_menu();
    void quit_with_name();
    void set_icon_normal();
    void set_icon_differ();
    void set_mode_normal();
    void set_mode_block();
    void add_block();
    void dim_block();
private:
    MainWindow *window;
    QImage image;
    int check[40];
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_1_2;
    QLabel *label_2_3;
    QLabel *label_3_4;
    QLabel *label_1_5;
    QLabel *label_2_6;
    QLabel *label_3_7;
    QLabel *label_4_8;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5_6;
    QLabel *label_6_7;
    QLabel *label_7_8;
    QLabel *label_5_9;
    QLabel *label_6_10;
    QLabel *label_7_11;
    QLabel *label_8_12;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_9_10;
    QLabel *label_10_11;
    QLabel *label_11_12;
    QLabel *label_9_13;
    QLabel *label_10_14;
    QLabel *label_11_15;
    QLabel *label_12_16;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_13_14;
    QLabel *label_14_15;
    QLabel *label_15_16;
    QLabel *frame;
    int icon;
    QDialog *end;
    QLineEdit *text_name;
    QLCDNumber *score;
    int your_score;
    int once;
    int mode;
    int when;
};

#endif // GAME_H
