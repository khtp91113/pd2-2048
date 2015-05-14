#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopWidget>
#include <QKeyEvent>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainToolBar->hide();
    ui->button_1->setText("Restart");
    ui->button_2->setText("End");
    QFont f;
    ui->label_bestscore->setText("<b><font color=orange>Bestscore</font></b>");
    ui->label_score->setText("<b><font color=orchid>Score</font></b>");
    f.setPointSize(20);
    ui->label_bestscore->setFont(f);
    ui->label_score->setFont(f);

    QString path_1=":/background/base_0.png";

    ui->label_1->setPixmap(QPixmap(path_1));
    ui->label_1->setScaledContents(true);
    ui->label_2->setPixmap(QPixmap(path_1));
    ui->label_2->setScaledContents(true);
    ui->label_3->setPixmap(QPixmap(path_1));
    ui->label_3->setScaledContents(true);
    ui->label_4->setPixmap(QPixmap(path_1));
    ui->label_4->setScaledContents(true);
    ui->label_5->setPixmap(QPixmap(path_1));
    ui->label_5->setScaledContents(true);
    ui->label_6->setPixmap(QPixmap(path_1));
    ui->label_6->setScaledContents(true);
    ui->label_7->setPixmap(QPixmap(path_1));
    ui->label_7->setScaledContents(true);
    ui->label_8->setPixmap(QPixmap(path_1));
    ui->label_8->setScaledContents(true);
    ui->label_9->setPixmap(QPixmap(path_1));
    ui->label_9->setScaledContents(true);
    ui->label_10->setPixmap(QPixmap(path_1));
    ui->label_10->setScaledContents(true);
    ui->label_11->setPixmap(QPixmap(path_1));
    ui->label_11->setScaledContents(true);
    ui->label_12->setPixmap(QPixmap(path_1));
    ui->label_12->setScaledContents(true);
    ui->label_13->setPixmap(QPixmap(path_1));
    ui->label_13->setScaledContents(true);
    ui->label_14->setPixmap(QPixmap(path_1));
    ui->label_14->setScaledContents(true);
    ui->label_15->setPixmap(QPixmap(path_1));
    ui->label_15->setScaledContents(true);
    ui->label_16->setPixmap(QPixmap(path_1));
    ui->label_16->setScaledContents(true);

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

void MainWindow::set_check()
{
    for(int i=0;i<16;i++)
        check[i]=0;
}

void MainWindow::random_generate()
{
    QString path_base2=":/background/base_2.png";
    QString path_base4=":/background/base_4.png";
    srand(time(NULL));

    int num=2;
    int rate=rand()%10;
    if(rate==9)
        num=4;

    srand(time(NULL));
    int i,count=0,mark[16]={0};
    for(i=0;i<16;i++)
        if(check[i]==0)
        {
            mark[count]=i;
            count++;
        }
    int place=rand()%(count);
    check[mark[place]]=num;
    if(rate!=9)
    {
        switch(place)
        {
            case 0:ui->label_1->setPixmap(QPixmap(path_base2));
                   ui->label_1->setScaledContents(true);
                   break;
            case 1:ui->label_2->setPixmap(QPixmap(path_base2));
                   ui->label_2->setScaledContents(true);
                   break;
            case 2:ui->label_3->setPixmap(QPixmap(path_base2));
                   ui->label_3->setScaledContents(true);
                   break;
            case 3:ui->label_4->setPixmap(QPixmap(path_base2));
                   ui->label_4->setScaledContents(true);
                   break;
            case 4:ui->label_5->setPixmap(QPixmap(path_base2));
                   ui->label_5->setScaledContents(true);
                   break;
            case 5:ui->label_6->setPixmap(QPixmap(path_base2));
                   ui->label_6->setScaledContents(true);
                   break;
            case 6:ui->label_7->setPixmap(QPixmap(path_base2));
                   ui->label_7->setScaledContents(true);
                   break;
            case 7:ui->label_8->setPixmap(QPixmap(path_base2));
                   ui->label_8->setScaledContents(true);
                   break;
            case 8:ui->label_9->setPixmap(QPixmap(path_base2));
                   ui->label_9->setScaledContents(true);
                   break;
            case 9:ui->label_10->setPixmap(QPixmap(path_base2));
                   ui->label_10->setScaledContents(true);
                   break;
            case 10:ui->label_11->setPixmap(QPixmap(path_base2));
                    ui->label_11->setScaledContents(true);
                    break;
            case 11:ui->label_12->setPixmap(QPixmap(path_base2));
                    ui->label_12->setScaledContents(true);
                    break;
            case 12:ui->label_13->setPixmap(QPixmap(path_base2));
                    ui->label_13->setScaledContents(true);
                    break;
            case 13:ui->label_14->setPixmap(QPixmap(path_base2));
                    ui->label_14->setScaledContents(true);
                    break;
            case 14:ui->label_15->setPixmap(QPixmap(path_base2));
                    ui->label_15->setScaledContents(true);
                    break;
            default:ui->label_16->setPixmap(QPixmap(path_base2));
                    ui->label_16->setScaledContents(true);
                    break;
        }
    }
    else
    {
        switch(place)
        {
            case 0:ui->label_1->setPixmap(QPixmap(path_base4));
                   ui->label_1->setScaledContents(true);
                   break;
            case 1:ui->label_2->setPixmap(QPixmap(path_base4));
                   ui->label_2->setScaledContents(true);
                   break;
            case 2:ui->label_3->setPixmap(QPixmap(path_base4));
                   ui->label_3->setScaledContents(true);
                   break;
            case 3:ui->label_4->setPixmap(QPixmap(path_base4));
                   ui->label_4->setScaledContents(true);
                   break;
            case 4:ui->label_5->setPixmap(QPixmap(path_base4));
                   ui->label_5->setScaledContents(true);
                   break;
            case 5:ui->label_6->setPixmap(QPixmap(path_base4));
                   ui->label_6->setScaledContents(true);
                   break;
            case 6:ui->label_7->setPixmap(QPixmap(path_base4));
                   ui->label_7->setScaledContents(true);
                   break;
            case 7:ui->label_8->setPixmap(QPixmap(path_base4));
                   ui->label_8->setScaledContents(true);
                   break;
            case 8:ui->label_9->setPixmap(QPixmap(path_base4));
                   ui->label_9->setScaledContents(true);
                   break;
            case 9:ui->label_10->setPixmap(QPixmap(path_base4));
                   ui->label_10->setScaledContents(true);
                   break;
            case 10:ui->label_11->setPixmap(QPixmap(path_base4));
                    ui->label_11->setScaledContents(true);
                    break;
            case 11:ui->label_12->setPixmap(QPixmap(path_base4));
                    ui->label_12->setScaledContents(true);
                    break;
            case 12:ui->label_13->setPixmap(QPixmap(path_base4));
                    ui->label_13->setScaledContents(true);
                    break;
            case 13:ui->label_14->setPixmap(QPixmap(path_base4));
                    ui->label_14->setScaledContents(true);
                    break;
            case 14:ui->label_15->setPixmap(QPixmap(path_base4));
                    ui->label_15->setScaledContents(true);
                    break;
            default:ui->label_16->setPixmap(QPixmap(path_base4));
                    ui->label_16->setScaledContents(true);
                    break;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::select_pic()
{
    ui->label_1->setPixmap(QPixmap(":/background/base_" + QString::number(check[0]) + ".png"));
    ui->label_2->setPixmap(QPixmap(":/background/base_" + QString::number(check[1]) + ".png"));
    ui->label_3->setPixmap(QPixmap(":/background/base_" + QString::number(check[2]) + ".png"));
    ui->label_4->setPixmap(QPixmap(":/background/base_" + QString::number(check[3]) + ".png"));
    ui->label_5->setPixmap(QPixmap(":/background/base_" + QString::number(check[4]) + ".png"));
    ui->label_6->setPixmap(QPixmap(":/background/base_" + QString::number(check[5]) + ".png"));
    ui->label_7->setPixmap(QPixmap(":/background/base_" + QString::number(check[6]) + ".png"));
    ui->label_8->setPixmap(QPixmap(":/background/base_" + QString::number(check[7]) + ".png"));
    ui->label_9->setPixmap(QPixmap(":/background/base_" + QString::number(check[8]) + ".png"));
    ui->label_10->setPixmap(QPixmap(":/background/base_" + QString::number(check[9]) + ".png"));
    ui->label_11->setPixmap(QPixmap(":/background/base_" + QString::number(check[10]) + ".png"));
    ui->label_12->setPixmap(QPixmap(":/background/base_" + QString::number(check[11]) + ".png"));
    ui->label_13->setPixmap(QPixmap(":/background/base_" + QString::number(check[12]) + ".png"));
    ui->label_14->setPixmap(QPixmap(":/background/base_" + QString::number(check[13]) + ".png"));
    ui->label_15->setPixmap(QPixmap(":/background/base_" + QString::number(check[14]) + ".png"));
    ui->label_16->setPixmap(QPixmap(":/background/base_" + QString::number(check[15]) + ".png"));
}

void MainWindow::elapse()
{
    QTime t;
    t.start();
    while(t.elapsed()<200)
        QCoreApplication::processEvents();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    int i,j,turn=0,turn_back=0;
    if(event->key()==Qt::Key_Up)
    {
        while(turn==0)
        {
            turn=1;
            for(j=1;j<=3;j++)
            {
                for(i=4*j;i<4*(j+1);i++)
                    if(check[i]!=0&&check[i-4]==0)
                    {
                        check[i-4]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
            }
        }
        for(i=0;i<4;i++)
            if(check[i]==check[i+4]&&check[i+8]==check[i+12]&&check[i]!=0&&check[i+8]!=0)
            {
                check[i]*=2;
                check[i+4]=check[i+8]*2;
                check[i+8]=0;
                check[i+12]=0;
                turn_back++;
            }
        for(j=1;j<=3;j++)
        {
            for(i=4*j;i<4*(j+1);i++)
            {
                if(check[i]!=0&&check[i]==check[i-4])
                {
                    check[i-4]*=2;
                    check[i]=0;
                    turn=0;
                    turn_back++;
                }
           }
        }
        while(turn==0)
        {
            turn=1;
            for(j=1;j<=3;j++)
            {
                for(i=4*j;i<4*(j+1);i++)
                    if(check[i]!=0&&check[i-4]==0)
                    {
                        check[i-4]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
            }
        }
        if(turn_back==0)
            return;
        select_pic();
        elapse();
        random_generate();
        select_pic();
    }
    else if(event->key()==Qt::Key_Down)
    {
        while(turn==0)
        {
            turn=1;
            for(j=3;j>=1;j--)
            {
                for(i=4*j;i<4*(j+1);i++)
                    if(check[i]==0&&check[i-4]!=0)
                    {
                        check[i]=check[i-4];
                        check[i-4]=0;
                        turn=0;
                        turn_back++;
                    }
            }
        }
        for(i=12;i<16;i++)
        {
            if(check[i]==check[i-4]&&check[i-8]==check[i-12]&&check[i]!=0&&check[i-8]!=0)
            {
                check[i]*=2;
                check[i-4]=check[i-8]*2;
                check[i-8]=0;
                check[i-12]=0;
                turn_back++;
            }
        }
        for(j=3;j>=1;j--)
        {
           for(i=4*j;i<4*(j+1);i++)
           {
                if(check[i-4]!=0&&check[i]==check[i-4])
                {
                    check[i]*=2;
                    check[i-4]=0;
                    turn=0;
                    turn_back++;
                }
           }
        }
        while(turn==0)
        {
            turn=1;
            for(j=3;j>=1;j--)
            {
                for(i=4*j;i<4*(j+1);i++)
                    if(check[i]==0&&check[i-4]!=0)
                    {
                        check[i]=check[i-4];
                        check[i-4]=0;
                        turn=0;
                        turn_back++;
                    }
            }
        }
        if(turn_back==0)
            return;
        select_pic();
        elapse();
        random_generate();
        select_pic();
    }
    else if(event->key()==Qt::Key_Left)
    {
        while(turn==0)
        {
            turn=1;
            for(j=1;j<=3;j++)
            {
                for(i=j;i<16;)
                {
                    if(check[i]!=0&&check[i-1]==0)
                    {
                        check[i-1]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
                    i+=4;
                }
            }
        }
        for(i=0;i<16;)
        {
            if(check[i]==check[i+1]&&check[i+2]==check[i+3]&&check[i]!=0&&check[i+2]!=0)
            {
                check[i]*=2;
                check[i+1]=check[i+2]*2;
                check[i+2]=0;
                check[i+3]=0;
                turn_back++;
            }
            i+=4;
        }
        for(j=1;j<=3;j++)
        {
           for(i=j;i<16;)
           {
                if(check[i]!=0&&check[i]==check[i-1])
                {
                    check[i-1]*=2;
                    check[i]=0;
                    turn=0;
                    turn_back++;
                }
                i+=4;
           }
        }
        while(turn==0)
        {
            turn=1;
            for(j=1;j<=3;j++)
            {
                for(i=j;i<16;)
                {
                    if(check[i]!=0&&check[i-1]==0)
                    {
                        check[i-1]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
                    i+=4;
                }
            }
        }
        if(turn_back==0)
            return;
        select_pic();
        elapse();
        random_generate();
        select_pic();
    }
    else if(event->key()==Qt::Key_Right)
    {
        while(turn==0)
        {
            turn=1;
            for(j=2;j>=0;j--)
            {
                for(i=j;i<16;)
                {
                    if(check[i]!=0&&check[i+1]==0)
                    {
                        check[i+1]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
                    i+=4;
                }
            }
        }
        for(i=3;i<16;)
        {
            if(check[i]==check[i-1]&&check[i-2]==check[i-3]&&check[i]!=0&&check[i-2]!=0)
            {
                check[i]*=2;
                check[i-1]=check[i-2]*2;
                check[i-3]=0;
                check[i-4]=0;
                turn_back++;
            }
            i+=4;
        }
        for(j=2;j>=0;j--)
        {
           for(i=j;i<16;)
           {
                if(check[i]!=0&&check[i]==check[i+1])
                {
                    check[i+1]*=2;
                    check[i]=0;
                    turn=0;
                    turn_back++;
                }
                i+=4;
           }
        }
        while(turn==0)
        {
            turn=1;
            for(j=2;j>=0;j--)
            {
                for(i=j;i<16;)
                {
                    if(check[i]!=0&&check[i+1]==0)
                    {
                        check[i+1]=check[i];
                        check[i]=0;
                        turn=0;
                        turn_back++;
                    }
                    i+=4;
                }
            }
        }
        if(turn_back==0)
            return;
        select_pic();
        elapse();
        random_generate();
        select_pic();
    }
    else
    {
        return;
    }
}

void MainWindow::on_button_1_clicked()
{
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to restart the game?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/background/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
    {
        QString path_1=":/background/base_0.png";

        ui->label_1->setPixmap(QPixmap(path_1));
        ui->label_1->setScaledContents(true);
        ui->label_2->setPixmap(QPixmap(path_1));
        ui->label_2->setScaledContents(true);
        ui->label_3->setPixmap(QPixmap(path_1));
        ui->label_3->setScaledContents(true);
        ui->label_4->setPixmap(QPixmap(path_1));
        ui->label_4->setScaledContents(true);
        ui->label_5->setPixmap(QPixmap(path_1));
        ui->label_5->setScaledContents(true);
        ui->label_6->setPixmap(QPixmap(path_1));
        ui->label_6->setScaledContents(true);
        ui->label_7->setPixmap(QPixmap(path_1));
        ui->label_7->setScaledContents(true);
        ui->label_8->setPixmap(QPixmap(path_1));
        ui->label_8->setScaledContents(true);
        ui->label_9->setPixmap(QPixmap(path_1));
        ui->label_9->setScaledContents(true);
        ui->label_10->setPixmap(QPixmap(path_1));
        ui->label_10->setScaledContents(true);
        ui->label_11->setPixmap(QPixmap(path_1));
        ui->label_11->setScaledContents(true);
        ui->label_12->setPixmap(QPixmap(path_1));
        ui->label_12->setScaledContents(true);
        ui->label_13->setPixmap(QPixmap(path_1));
        ui->label_13->setScaledContents(true);
        ui->label_14->setPixmap(QPixmap(path_1));
        ui->label_14->setScaledContents(true);
        ui->label_15->setPixmap(QPixmap(path_1));
        ui->label_15->setScaledContents(true);
        ui->label_16->setPixmap(QPixmap(path_1));
        ui->label_16->setScaledContents(true);

        set_check();
        random_generate();
        random_generate();
        MainWindow::setFocus();
    }
}

void MainWindow::on_button_2_clicked()
{
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to quit?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/background/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
        exit(1);
}


