#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainToolBar->hide();
    ui->button_1->setText("Restart");
    ui->button_2->setText("End");
    QFont f;
    ui->label_bestscore->setText("<b><font color=red>Bestscore</font></b>");
    ui->label_score->setText("<b>Score</b>");
    f.setPointSize(20);
    ui->label_bestscore->setFont(f);
    ui->label_score->setFont(f);

    QString path_1=":/background/background.png";
    ui->label_1->setPixmap(QPixmap(path_1));
    ui->label_2->setPixmap(QPixmap(path_1));
    ui->label_3->setPixmap(QPixmap(path_1));
    ui->label_4->setPixmap(QPixmap(path_1));
    ui->label_5->setPixmap(QPixmap(path_1));
    ui->label_6->setPixmap(QPixmap(path_1));
    ui->label_7->setPixmap(QPixmap(path_1));
    ui->label_8->setPixmap(QPixmap(path_1));
    ui->label_9->setPixmap(QPixmap(path_1));
    ui->label_10->setPixmap(QPixmap(path_1));
    ui->label_11->setPixmap(QPixmap(path_1));
    ui->label_12->setPixmap(QPixmap(path_1));
    ui->label_13->setPixmap(QPixmap(path_1));
    ui->label_14->setPixmap(QPixmap(path_1));
    ui->label_15->setPixmap(QPixmap(path_1));
    ui->label_16->setPixmap(QPixmap(path_1));

    QGridLayout *layout=new QGridLayout;
    layout->addWidget(ui->button_1,2,1,2,3);
    layout->addWidget(ui->button_2,2,12,2,3);
    layout->addWidget(ui->label_bestscore,1,5,2,2);
    layout->addWidget(ui->lcd_bestscore,1,7,2,4);
    layout->addWidget(ui->label_score,4,5,2,2);
    layout->addWidget(ui->lcd_score,4,7,2,4);
    layout->addWidget(ui->label_1,7,4,2,2);
    layout->addWidget(ui->label_2,7,6,2,2);
    layout->addWidget(ui->label_3,7,8,2,2);
    layout->addWidget(ui->label_4,7,10,2,2);
    layout->addWidget(ui->label_5,9,4,2,2);
    layout->addWidget(ui->label_6,9,6,2,2);
    layout->addWidget(ui->label_7,9,8,2,2);
    layout->addWidget(ui->label_8,9,10,2,2);
    layout->addWidget(ui->label_9,11,4,2,2);
    layout->addWidget(ui->label_10,11,6,2,2);
    layout->addWidget(ui->label_11,11,8,2,2);
    layout->addWidget(ui->label_12,11,10,2,2);
    layout->addWidget(ui->label_13,13,4,2,2);
    layout->addWidget(ui->label_14,13,6,2,2);
    layout->addWidget(ui->label_15,13,8,2,2);
    layout->addWidget(ui->label_16,13,10,2,2);
    ui->centralWidget->setLayout(layout);

}

void MainWindow::random_generate()
{
    ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_2_clicked()
{
    exit(1);
}
