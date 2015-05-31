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
    explicit game(QWidget *parent = 0);//設定開始畫面
    ~game();
    void game_start();//初始遊戲畫面
    void set_check();//把check值歸0
    void random_generate();//隨機產生數字2或4
    void select_pic();//更新圖片
    void judge();//判斷是否gameover
    void elapse();//切換圖片的時間延遲 使看起來比較像動畫一點..
    void getmain(MainWindow &w);//抓取mainwindow的位置
    void random_generate_for_begin();//一開始的隨機產生數字*2
    void add_score(int b);//加分機制
    void set_score();//把分數歸0
    void display_score();//顯示得分
    void enough();//第一個2048出現時跳出視窗
    void set_once();//把once歸0
    void select_forbid();//障礙模式中 選擇一個格子當障礙

protected:
    void resizeEvent(QResizeEvent *event);//視窗放大縮小 圖片跟著同步縮放
    void keyPressEvent(QKeyEvent *event);//按鍵事件
signals:

public slots:
    void button_quit_click();//開始畫面的quit button設定
    void button_start_click();//開始畫面的start button設定
    void restart();//重新開始遊戲
    void quit();//結束遊戲
    void restart_for_menu();//選單列的restart 設定
    void quit_with_name();//出現2048時 跳出的視窗即使案quit也會存名字和分數
    void set_icon_normal();//把圖片設為正常
    void set_icon_differ();//把圖片設為十二生肖
    void set_mode_normal();//把模式設為正常
    void set_mode_block();//把模式設為障礙模式
    void add_block();//增加障礙
    void dim_block();//減少障礙
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
    int once;//用來記錄是否是第一次出現2048
    int mode;
};

#endif // GAME_H
