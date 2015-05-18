#include "game.h"

game::game(QWidget *parent) : QWidget(parent)
{
    QFont f;
    QLabel *title=new QLabel;
    title->setText("<h2><font color=red><center>2048</center></font></h2>");
    f.setPointSize(40);
    title->setFont(f);
    QPushButton *button_start=new QPushButton;
    button_start->setText("START");
    connect(button_start,SIGNAL(clicked()),this,SLOT(button_start_click()));
    QPushButton *button_quit=new QPushButton;
    button_quit->setText("QUIT");
    connect(button_quit,SIGNAL(clicked()),this,SLOT(button_quit_click()));

    image.load(":/back/menu_back.jpg");
    setAutoFillBackground(true);

    QGridLayout *layout=new QGridLayout;
    layout->addWidget(title,1,1,6,6);
    layout->addWidget(button_start,5,2,8,4);
    layout->addWidget(button_quit,6,2,8,4);
    this->setLayout(layout);
}

void game::getmain(MainWindow &w)
{
    window=&w;
}

game::~game()
{

}

void game::button_quit_click()
{
    QMediaPlayer *warning=new QMediaPlayer;
    warning->setMedia(QUrl("qrc:/music/warning.mp3"));
    warning->play();
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to quit?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/back/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
        exit(1);
}

void game::button_start_click()
{
    qDeleteAll(this->children());
    image.load(":/back/back.jpg");
    setAutoFillBackground(true);
    QPalette pal(palette());
    pal.setBrush(QPalette::Window,QBrush(image.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    setPalette(pal);

    QGridLayout *layout=new QGridLayout;
    QLCDNumber *score=new QLCDNumber;
    label_1=new QLabel;
    label_2=new QLabel;
    label_3=new QLabel;
    label_4=new QLabel;
    label_1_2=new QLabel;
    label_2_3=new QLabel;
    label_3_4=new QLabel;
    label_1_5=new QLabel;
    label_2_6=new QLabel;
    label_3_7=new QLabel;
    label_4_8=new QLabel;
    label_5=new QLabel;
    label_6=new QLabel;
    label_7=new QLabel;
    label_8=new QLabel;
    label_5_6=new QLabel;
    label_6_7=new QLabel;
    label_7_8=new QLabel;
    label_5_9=new QLabel;
    label_6_10=new QLabel;
    label_7_11=new QLabel;
    label_8_12=new QLabel;
    label_9=new QLabel;
    label_10=new QLabel;
    label_11=new QLabel;
    label_12=new QLabel;
    label_9_10=new QLabel;
    label_10_11=new QLabel;
    label_11_12=new QLabel;
    label_9_13=new QLabel;
    label_10_14=new QLabel;
    label_11_15=new QLabel;
    label_12_16=new QLabel;
    label_13=new QLabel;
    label_14=new QLabel;
    label_15=new QLabel;
    label_16=new QLabel;
    label_13_14=new QLabel;
    label_14_15=new QLabel;
    label_15_16=new QLabel;

    QLabel *s=new QLabel;
    s->setText("<b><font color=orange><center>Score</center></font></b>");
    QFont f;
    f.setPointSize(40);
    s->setFont(f);

    QString path=":/back/base_0.png";
    label_1->setPixmap(QPixmap(path));
    label_1->setScaledContents(true);
    label_2->setPixmap(QPixmap(path));
    label_2->setScaledContents(true);
    label_3->setPixmap(QPixmap(path));
    label_3->setScaledContents(true);
    label_4->setPixmap(QPixmap(path));
    label_4->setScaledContents(true);
    label_5->setPixmap(QPixmap(path));
    label_5->setScaledContents(true);
    label_6->setPixmap(QPixmap(path));
    label_6->setScaledContents(true);
    label_7->setPixmap(QPixmap(path));
    label_7->setScaledContents(true);
    label_8->setPixmap(QPixmap(path));
    label_8->setScaledContents(true);
    label_9->setPixmap(QPixmap(path));
    label_9->setScaledContents(true);
    label_10->setPixmap(QPixmap(path));
    label_10->setScaledContents(true);
    label_11->setPixmap(QPixmap(path));
    label_11->setScaledContents(true);
    label_12->setPixmap(QPixmap(path));
    label_12->setScaledContents(true);
    label_13->setPixmap(QPixmap(path));
    label_13->setScaledContents(true);
    label_14->setPixmap(QPixmap(path));
    label_14->setScaledContents(true);
    label_15->setPixmap(QPixmap(path));
    label_15->setScaledContents(true);
    label_16->setPixmap(QPixmap(path));
    label_16->setScaledContents(true);

    layout->addWidget(s,2,2,3,6);
    layout->addWidget(score,2,8,3,6);
    layout->addWidget(label_1,7,4,2,2);
    layout->addWidget(label_2,7,6,2,2);
    layout->addWidget(label_3,7,8,2,2);
    layout->addWidget(label_4,7,10,2,2);
    layout->addWidget(label_1_2,7,5,2,2);
    layout->addWidget(label_2_3,7,7,2,2);
    layout->addWidget(label_3_4,7,9,2,2);
    layout->addWidget(label_1_5,8,4,2,2);
    layout->addWidget(label_2_6,8,6,2,2);
    layout->addWidget(label_3_7,8,8,2,2);
    layout->addWidget(label_4_8,8,10,2,2);
    layout->addWidget(label_5,9,4,2,2);
    layout->addWidget(label_6,9,6,2,2);
    layout->addWidget(label_7,9,8,2,2);
    layout->addWidget(label_8,9,10,2,2);
    layout->addWidget(label_5_6,9,5,2,2);
    layout->addWidget(label_6_7,9,7,2,2);
    layout->addWidget(label_7_8,9,9,2,2);
    layout->addWidget(label_5_9,10,4,2,2);
    layout->addWidget(label_6_10,10,6,2,2);
    layout->addWidget(label_7_11,10,8,2,2);
    layout->addWidget(label_8_12,10,10,2,2);
    layout->addWidget(label_9,11,4,2,2);
    layout->addWidget(label_10,11,6,2,2);
    layout->addWidget(label_11,11,8,2,2);
    layout->addWidget(label_12,11,10,2,2);
    layout->addWidget(label_9_10,11,5,2,2);
    layout->addWidget(label_10_11,11,7,2,2);
    layout->addWidget(label_11_12,11,9,2,2);
    layout->addWidget(label_9_13,12,4,2,2);
    layout->addWidget(label_10_14,12,6,2,2);
    layout->addWidget(label_11_15,12,8,2,2);
    layout->addWidget(label_12_16,12,10,2,2);
    layout->addWidget(label_13,13,4,2,2);
    layout->addWidget(label_14,13,6,2,2);
    layout->addWidget(label_15,13,8,2,2);
    layout->addWidget(label_16,13,10,2,2);
    layout->addWidget(label_13_14,13,5,2,2);
    layout->addWidget(label_14_15,13,7,2,2);
    layout->addWidget(label_15_16,13,9,2,2);
    this->setLayout(layout);

    window->set_restart_activate();
    connect(window->Restart,SIGNAL(triggered()),this,SLOT(restart_for_menu()));
    window->set_Change_activate();
    connect(window->Change_model,SIGNAL(triggered()),this,SLOT(change_model()));
    game_start();
}

void game::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    QPalette pal(palette());
    pal.setBrush(QPalette::Window,QBrush(image.scaled(event->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    setPalette(pal);
}

void game::game_start()
{
    set_check();
    set_a(0);
    random_generate_for_begin();

}

void game::set_check()
{
    for(int i=0;i<40;i++)
        check[i]=0;
}

void game::random_generate_for_begin()
{
    QString path_base2;
    if(a==0)
        path_base2=":/back/base_2_normal.png";
    else
        path_base2=":/back/base_2.png";

    srand(time(NULL));

    int i,count=0,mark[16]={0};
    for(i=0;i<16;i++)
        if(check[i]==0)
        {
            mark[count]=i;
            count++;
        }
    int place[2]={0};
    place[0]=rand()%count;
    srand(time(NULL));
    place[1]=rand()%count;
    while(place[0]==place[1])
        place[1]=rand()%count;
    check[mark[place[0]]]=2;
    check[mark[place[1]]]=2;

    switch(place[0])
    {
        case 0:label_1->setPixmap(QPixmap(path_base2));
               label_1->setScaledContents(true);
               break;
        case 1:label_2->setPixmap(QPixmap(path_base2));
               label_2->setScaledContents(true);
               break;
        case 2:label_3->setPixmap(QPixmap(path_base2));
               label_3->setScaledContents(true);
               break;
        case 3:label_4->setPixmap(QPixmap(path_base2));
               label_4->setScaledContents(true);
               break;
        case 4:label_5->setPixmap(QPixmap(path_base2));
               label_5->setScaledContents(true);
               break;
        case 5:label_6->setPixmap(QPixmap(path_base2));
               label_6->setScaledContents(true);
               break;
        case 6:label_7->setPixmap(QPixmap(path_base2));
               label_7->setScaledContents(true);
               break;
        case 7:label_8->setPixmap(QPixmap(path_base2));
               label_8->setScaledContents(true);
               break;
        case 8:label_9->setPixmap(QPixmap(path_base2));
               label_9->setScaledContents(true);
               break;
        case 9:label_10->setPixmap(QPixmap(path_base2));
               label_10->setScaledContents(true);
               break;
        case 10:label_11->setPixmap(QPixmap(path_base2));
                label_11->setScaledContents(true);
                break;
        case 11:label_12->setPixmap(QPixmap(path_base2));
                label_12->setScaledContents(true);
                break;
        case 12:label_13->setPixmap(QPixmap(path_base2));
                label_13->setScaledContents(true);
                break;
        case 13:label_14->setPixmap(QPixmap(path_base2));
                label_14->setScaledContents(true);
                break;
        case 14:label_15->setPixmap(QPixmap(path_base2));
                label_15->setScaledContents(true);
                break;
        default:label_16->setPixmap(QPixmap(path_base2));
                label_16->setScaledContents(true);
                break;
    }
    switch(place[1])
    {
        case 0:label_1->setPixmap(QPixmap(path_base2));
               label_1->setScaledContents(true);
               break;
        case 1:label_2->setPixmap(QPixmap(path_base2));
               label_2->setScaledContents(true);
               break;
        case 2:label_3->setPixmap(QPixmap(path_base2));
               label_3->setScaledContents(true);
               break;
        case 3:label_4->setPixmap(QPixmap(path_base2));
               label_4->setScaledContents(true);
               break;
        case 4:label_5->setPixmap(QPixmap(path_base2));
               label_5->setScaledContents(true);
               break;
        case 5:label_6->setPixmap(QPixmap(path_base2));
               label_6->setScaledContents(true);
               break;
        case 6:label_7->setPixmap(QPixmap(path_base2));
               label_7->setScaledContents(true);
               break;
        case 7:label_8->setPixmap(QPixmap(path_base2));
               label_8->setScaledContents(true);
               break;
        case 8:label_9->setPixmap(QPixmap(path_base2));
               label_9->setScaledContents(true);
               break;
        case 9:label_10->setPixmap(QPixmap(path_base2));
               label_10->setScaledContents(true);
               break;
        case 10:label_11->setPixmap(QPixmap(path_base2));
                label_11->setScaledContents(true);
                break;
        case 11:label_12->setPixmap(QPixmap(path_base2));
                label_12->setScaledContents(true);
                break;
        case 12:label_13->setPixmap(QPixmap(path_base2));
                label_13->setScaledContents(true);
                break;
        case 13:label_14->setPixmap(QPixmap(path_base2));
                label_14->setScaledContents(true);
                break;
        case 14:label_15->setPixmap(QPixmap(path_base2));
                label_15->setScaledContents(true);
                break;
        default:label_16->setPixmap(QPixmap(path_base2));
                label_16->setScaledContents(true);
                break;
    }
}

void game::random_generate()
{
    QString path_base2;
    QString path_base4;
    if(a==0)
    {
        path_base2=":/back/base_2_normal.png";
        path_base4=":/back/base_4_normal.png";
    }
    else
    {
        path_base2=":/back/base_2.png";
        path_base4=":/back/base_4.png";
    }
    srand(time(NULL));

    int num=2;
    int rate=0;
    rate=rand()%10;
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
    int place=0;
    place=rand()%(count);
    check[mark[place]]=num;
    if(rate!=9)
    {
        switch(place)
        {
            case 0:label_1->setPixmap(QPixmap(path_base2));
                   label_1->setScaledContents(true);
                   break;
            case 1:label_2->setPixmap(QPixmap(path_base2));
                   label_2->setScaledContents(true);
                   break;
            case 2:label_3->setPixmap(QPixmap(path_base2));
                   label_3->setScaledContents(true);
                   break;
            case 3:label_4->setPixmap(QPixmap(path_base2));
                   label_4->setScaledContents(true);
                   break;
            case 4:label_5->setPixmap(QPixmap(path_base2));
                   label_5->setScaledContents(true);
                   break;
            case 5:label_6->setPixmap(QPixmap(path_base2));
                   label_6->setScaledContents(true);
                   break;
            case 6:label_7->setPixmap(QPixmap(path_base2));
                   label_7->setScaledContents(true);
                   break;
            case 7:label_8->setPixmap(QPixmap(path_base2));
                   label_8->setScaledContents(true);
                   break;
            case 8:label_9->setPixmap(QPixmap(path_base2));
                   label_9->setScaledContents(true);
                   break;
            case 9:label_10->setPixmap(QPixmap(path_base2));
                   label_10->setScaledContents(true);
                   break;
            case 10:label_11->setPixmap(QPixmap(path_base2));
                    label_11->setScaledContents(true);
                    break;
            case 11:label_12->setPixmap(QPixmap(path_base2));
                    label_12->setScaledContents(true);
                    break;
            case 12:label_13->setPixmap(QPixmap(path_base2));
                    label_13->setScaledContents(true);
                    break;
            case 13:label_14->setPixmap(QPixmap(path_base2));
                    label_14->setScaledContents(true);
                    break;
            case 14:label_15->setPixmap(QPixmap(path_base2));
                    label_15->setScaledContents(true);
                    break;
            default:label_16->setPixmap(QPixmap(path_base2));
                    label_16->setScaledContents(true);
                    break;
        }
    }
    else
    {
        switch(place)
        {
            case 0:label_1->setPixmap(QPixmap(path_base4));
                   label_1->setScaledContents(true);
                   break;
            case 1:label_2->setPixmap(QPixmap(path_base4));
                   label_2->setScaledContents(true);
                   break;
            case 2:label_3->setPixmap(QPixmap(path_base4));
                   label_3->setScaledContents(true);
                   break;
            case 3:label_4->setPixmap(QPixmap(path_base4));
                   label_4->setScaledContents(true);
                   break;
            case 4:label_5->setPixmap(QPixmap(path_base4));
                   label_5->setScaledContents(true);
                   break;
            case 5:label_6->setPixmap(QPixmap(path_base4));
                   label_6->setScaledContents(true);
                   break;
            case 6:label_7->setPixmap(QPixmap(path_base4));
                   label_7->setScaledContents(true);
                   break;
            case 7:label_8->setPixmap(QPixmap(path_base4));
                   label_8->setScaledContents(true);
                   break;
            case 8:label_9->setPixmap(QPixmap(path_base4));
                   label_9->setScaledContents(true);
                   break;
            case 9:label_10->setPixmap(QPixmap(path_base4));
                   label_10->setScaledContents(true);
                   break;
            case 10:label_11->setPixmap(QPixmap(path_base4));
                    label_11->setScaledContents(true);
                    break;
            case 11:label_12->setPixmap(QPixmap(path_base4));
                    label_12->setScaledContents(true);
                    break;
            case 12:label_13->setPixmap(QPixmap(path_base4));
                    label_13->setScaledContents(true);
                    break;
            case 13:label_14->setPixmap(QPixmap(path_base4));
                    label_14->setScaledContents(true);
                    break;
            case 14:label_15->setPixmap(QPixmap(path_base4));
                    label_15->setScaledContents(true);
                    break;
            default:label_16->setPixmap(QPixmap(path_base4));
                    label_16->setScaledContents(true);
                    break;
        }
    }
}

void game::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Up)
    {

    }
}

void game::select_pic()
{
    if(a==0)
    {
        label_1->setPixmap(QPixmap(":/back/base_" + QString::number(check[0]) + "_normal.png"));
        label_2->setPixmap(QPixmap(":/back/base_" + QString::number(check[1]) + "_normal.png"));
        label_3->setPixmap(QPixmap(":/back/base_" + QString::number(check[2]) + "_normal.png"));
        label_4->setPixmap(QPixmap(":/back/base_" + QString::number(check[3]) + "_normal.png"));
        label_5->setPixmap(QPixmap(":/back/base_" + QString::number(check[4]) + "_normal.png"));
        label_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[5]) + "_normal.png"));
        label_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[6]) + "_normal.png"));
        label_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[7]) + "_normal.png"));
        label_9->setPixmap(QPixmap(":/back/base_" + QString::number(check[8]) + "_normal.png"));
        label_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[9]) + "_normal.png"));
        label_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[10]) + "_normal.png"));
        label_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[11]) + "_normal.png"));
        label_13->setPixmap(QPixmap(":/back/base_" + QString::number(check[12]) + "_normal.png"));
        label_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[13]) + "_normal.png"));
        label_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[14]) + "_normal.png"));
        label_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[15]) + "_normal.png"));
        if(check[16]!=0)
        {
            label_1_5->setPixmap(QPixmap(":/back/base_" + QString::number(check[16]) + "_normal.png"));
            label_1_5->setScaledContents(true);
            label_1_5->raise();
            label_1_5->show();
        }
        else
            label_1_5->hide();
        if(check[17]!=0)
        {
            label_2_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[17]) + "_normal.png"));
            label_2_6->setScaledContents(true);
            label_2_6->raise();
            label_2_6->show();
        }
        else
            label_2_6->hide();
        if(check[18]!=0)
        {
            label_3_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[18]) + "_normal.png"));
            label_3_7->setScaledContents(true);
            label_3_7->raise();
            label_3_7->show();
        }
        else
            label_3_7->hide();
        if(check[19]!=0)
        {
            label_4_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[19]) + "_normal.png"));
            label_4_8->setScaledContents(true);
            label_4_8->raise();
            label_4_8->show();
        }
        else
            label_4_8->hide();
        if(check[20]!=0)
        {
            label_5_9->setPixmap(QPixmap(":/back/base_" + QString::number(check[20]) + "_normal.png"));
            label_5_9->setScaledContents(true);
            label_5_9->raise();
            label_5_9->show();
        }
        else
            label_5_9->hide();
        if(check[21]!=0)
        {
            label_6_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[21]) + "_normal.png"));
            label_6_10->setScaledContents(true);
            label_6_10->raise();
            label_6_10->show();
        }
        else
            label_6_10->hide();
        if(check[22]!=0)
        {
            label_7_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[22]) + "_normal.png"));
            label_7_11->setScaledContents(true);
            label_7_11->raise();
            label_7_11->show();
        }
        else
            label_7_11->hide();
        if(check[23]!=0)
        {
            label_8_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[23]) + "_normal.png"));
            label_8_12->setScaledContents(true);
            label_8_12->raise();
            label_8_12->show();
        }
        else
            label_8_12->hide();
        if(check[24]!=0)
        {
            label_9_13->setPixmap(QPixmap(":/back/base_" + QString::number(check[24]) + "_normal.png"));
            label_9_13->setScaledContents(true);
            label_9_13->raise();
            label_9_13->show();
        }
        else
            label_9_13->hide();
        if(check[25]!=0)
        {
            label_10_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[25]) + "_normal.png"));
            label_10_14->setScaledContents(true);
            label_10_14->raise();
            label_10_14->show();
        }
        else
            label_10_14->hide();
        if(check[26]!=0)
        {
            label_11_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[26]) + "_normal.png"));
            label_11_15->setScaledContents(true);
            label_11_15->raise();
            label_11_15->show();
        }
        else
            label_11_15->hide();
        if(check[27]!=0)
        {
            label_12_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[27]) + "_normal.png"));
            label_12_16->setScaledContents(true);
            label_12_16->raise();
            label_12_16->show();
        }
        else
            label_12_16->hide();
        if(check[28]!=0)
        {
            label_1_2->setPixmap(QPixmap(":/back/base_" + QString::number(check[28]) + "_normal.png"));
            label_1_2->setScaledContents(true);
            label_1_2->raise();
            label_1_2->show();
        }
        else
            label_1_2->hide();
        if(check[29]!=0)
        {
            label_2_3->setPixmap(QPixmap(":/back/base_" + QString::number(check[29]) + "_normal.png"));
            label_2_3->setScaledContents(true);
            label_2_3->raise();
            label_2_3->show();
        }
        else
            label_2_3->hide();
        if(check[30]!=0)
        {
            label_3_4->setPixmap(QPixmap(":/back/base_" + QString::number(check[30]) + "_normal.png"));
            label_3_4->setScaledContents(true);
            label_3_4->raise();
            label_3_4->show();
        }
        else
            label_3_4->hide();
        if(check[31]!=0)
        {
            label_5_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[31]) + "_normal.png"));
            label_5_6->setScaledContents(true);
            label_5_6->raise();
            label_5_6->show();
        }
        else
            label_5_6->hide();
        if(check[32]!=0)
        {
            label_6_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[32]) + "_normal.png"));
            label_6_7->setScaledContents(true);
            label_6_7->raise();
            label_6_7->show();
        }
        else
            label_6_7->hide();
        if(check[33]!=0)
        {
            label_7_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[33]) + "_normal.png"));
            label_7_8->setScaledContents(true);
            label_7_8->raise();
            label_7_8->show();
        }
        else
            label_7_8->hide();
        if(check[34]!=0)
        {
            label_9_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[34]) + "_normal.png"));
            label_9_10->setScaledContents(true);
            label_9_10->raise();
            label_9_10->show();
        }
        else
            label_9_10->hide();
        if(check[35]!=0)
        {
            label_10_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[35]) + "_normal.png"));
            label_10_11->setScaledContents(true);
            label_10_11->raise();
            label_10_11->show();
        }
        else
            label_10_11->hide();
        if(check[36]!=0)
        {
            label_11_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[36]) + "_normal.png"));
            label_11_12->setScaledContents(true);
            label_11_12->raise();
            label_11_12->show();
        }
        else
            label_11_12->hide();
        if(check[37]!=0)
        {
            label_13_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[37]) + "_normal.png"));
            label_13_14->setScaledContents(true);
            label_13_14->raise();
            label_13_14->show();
        }
        else
            label_13_14->hide();
        if(check[38]!=0)
        {
            label_14_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[38]) + "_normal.png"));
            label_14_15->setScaledContents(true);
            label_14_15->raise();
            label_14_15->show();
        }
        else
            label_14_15->hide();
        if(check[39]!=0)
        {
            label_15_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[39]) + "_normal.png"));
            label_15_16->setScaledContents(true);
            label_15_16->raise();
            label_15_16->show();
        }
        else
            label_15_16->hide();
    }
    else
    {
        label_1->setPixmap(QPixmap(":/back/base_" + QString::number(check[0]) + ".png"));
        label_2->setPixmap(QPixmap(":/back/base_" + QString::number(check[1]) + ".png"));
        label_3->setPixmap(QPixmap(":/back/base_" + QString::number(check[2]) + ".png"));
        label_4->setPixmap(QPixmap(":/back/base_" + QString::number(check[3]) + ".png"));
        label_5->setPixmap(QPixmap(":/back/base_" + QString::number(check[4]) + ".png"));
        label_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[5]) + ".png"));
        label_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[6]) + ".png"));
        label_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[7]) + ".png"));
        label_9->setPixmap(QPixmap(":/back/base_" + QString::number(check[8]) + ".png"));
        label_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[9]) + ".png"));
        label_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[10]) + ".png"));
        label_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[11]) + ".png"));
        label_13->setPixmap(QPixmap(":/back/base_" + QString::number(check[12]) + ".png"));
        label_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[13]) + ".png"));
        label_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[14]) + ".png"));
        label_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[15]) + ".png"));
        if(check[16]!=0)
        {
            label_1_5->setPixmap(QPixmap(":/back/base_" + QString::number(check[16]) + ".png"));
            label_1_5->setScaledContents(true);
            label_1_5->raise();
            label_1_5->show();
        }
        else
            label_1_5->hide();
        if(check[17]!=0)
        {
            label_2_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[17]) + ".png"));
            label_2_6->setScaledContents(true);
            label_2_6->raise();
            label_2_6->show();
        }
        else
            label_2_6->hide();
        if(check[18]!=0)
        {
            label_3_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[18]) + ".png"));
            label_3_7->setScaledContents(true);
            label_3_7->raise();
            label_3_7->show();
        }
        else
            label_3_7->hide();
        if(check[19]!=0)
        {
            label_4_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[19]) + ".png"));
            label_4_8->setScaledContents(true);
            label_4_8->raise();
            label_4_8->show();
        }
        else
            label_4_8->hide();
        if(check[20]!=0)
        {
            label_5_9->setPixmap(QPixmap(":/back/base_" + QString::number(check[20]) + ".png"));
            label_5_9->setScaledContents(true);
            label_5_9->raise();
            label_5_9->show();
        }
        else
            label_5_9->hide();
        if(check[21]!=0)
        {
            label_6_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[21]) + ".png"));
            label_6_10->setScaledContents(true);
            label_6_10->raise();
            label_6_10->show();
        }
        else
            label_6_10->hide();
        if(check[22]!=0)
        {
            label_7_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[22]) + ".png"));
            label_7_11->setScaledContents(true);
            label_7_11->raise();
            label_7_11->show();
        }
        else
            label_7_11->hide();
        if(check[23]!=0)
        {
            label_8_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[23]) + ".png"));
            label_8_12->setScaledContents(true);
            label_8_12->raise();
            label_8_12->show();
        }
        else
            label_8_12->hide();
        if(check[24]!=0)
        {
            label_9_13->setPixmap(QPixmap(":/back/base_" + QString::number(check[24]) + ".png"));
            label_9_13->setScaledContents(true);
            label_9_13->raise();
            label_9_13->show();
        }
        else
            label_9_13->hide();
        if(check[25]!=0)
        {
            label_10_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[25]) + ".png"));
            label_10_14->setScaledContents(true);
            label_10_14->raise();
            label_10_14->show();
        }
        else
            label_10_14->hide();
        if(check[26]!=0)
        {
            label_11_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[26]) + ".png"));
            label_11_15->setScaledContents(true);
            label_11_15->raise();
            label_11_15->show();
        }
        else
            label_11_15->hide();
        if(check[27]!=0)
        {
            label_12_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[27]) + ".png"));
            label_12_16->setScaledContents(true);
            label_12_16->raise();
            label_12_16->show();
        }
        else
            label_12_16->hide();
        if(check[28]!=0)
        {
            label_1_2->setPixmap(QPixmap(":/back/base_" + QString::number(check[28]) + "_normal.png"));
            label_1_2->setScaledContents(true);
            label_1_2->raise();
            label_1_2->show();
        }
        else
            label_1_2->hide();
        if(check[29]!=0)
        {
            label_2_3->setPixmap(QPixmap(":/back/base_" + QString::number(check[29]) + "_normal.png"));
            label_2_3->setScaledContents(true);
            label_2_3->raise();
            label_2_3->show();
        }
        else
            label_2_3->hide();
        if(check[30]!=0)
        {
            label_3_4->setPixmap(QPixmap(":/back/base_" + QString::number(check[30]) + "_normal.png"));
            label_3_4->setScaledContents(true);
            label_3_4->raise();
            label_3_4->show();
        }
        else
            label_3_4->hide();
        if(check[31]!=0)
        {
            label_5_6->setPixmap(QPixmap(":/back/base_" + QString::number(check[31]) + "_normal.png"));
            label_5_6->setScaledContents(true);
            label_5_6->raise();
            label_5_6->show();
        }
        else
            label_5_6->hide();
        if(check[32]!=0)
        {
            label_6_7->setPixmap(QPixmap(":/back/base_" + QString::number(check[32]) + "_normal.png"));
            label_6_7->setScaledContents(true);
            label_6_7->raise();
            label_6_7->show();
        }
        else
            label_6_7->hide();
        if(check[33]!=0)
        {
            label_7_8->setPixmap(QPixmap(":/back/base_" + QString::number(check[33]) + "_normal.png"));
            label_7_8->setScaledContents(true);
            label_7_8->raise();
            label_7_8->show();
        }
        else
            label_7_8->hide();
        if(check[34]!=0)
        {
            label_9_10->setPixmap(QPixmap(":/back/base_" + QString::number(check[34]) + "_normal.png"));
            label_9_10->setScaledContents(true);
            label_9_10->raise();
            label_9_10->show();
        }
        else
            label_9_10->hide();
        if(check[35]!=0)
        {
            label_10_11->setPixmap(QPixmap(":/back/base_" + QString::number(check[35]) + "_normal.png"));
            label_10_11->setScaledContents(true);
            label_10_11->raise();
            label_10_11->show();
        }
        else
            label_10_11->hide();
        if(check[36]!=0)
        {
            label_11_12->setPixmap(QPixmap(":/back/base_" + QString::number(check[36]) + "_normal.png"));
            label_11_12->setScaledContents(true);
            label_11_12->raise();
            label_11_12->show();
        }
        else
            label_11_12->hide();
        if(check[37]!=0)
        {
            label_13_14->setPixmap(QPixmap(":/back/base_" + QString::number(check[37]) + "_normal.png"));
            label_13_14->setScaledContents(true);
            label_13_14->raise();
            label_13_14->show();
        }
        else
            label_13_14->hide();
        if(check[38]!=0)
        {
            label_14_15->setPixmap(QPixmap(":/back/base_" + QString::number(check[38]) + "_normal.png"));
            label_14_15->setScaledContents(true);
            label_14_15->raise();
            label_14_15->show();
        }
        else
            label_14_15->hide();
        if(check[39]!=0)
        {
            label_15_16->setPixmap(QPixmap(":/back/base_" + QString::number(check[39]) + "_normal.png"));
            label_15_16->setScaledContents(true);
            label_15_16->raise();
            label_15_16->show();
        }
        else
            label_15_16->hide();
    }
}

void game::elapse()
{
    QTime t;
    t.start();
    while(t.elapsed()<80)
        QCoreApplication::processEvents();
}

void game::set_a(int b)
{
    a=b;
}

void game::judge()
{
    for(int i=0;i<16;i++)
        if(check[i]==0)
            return;
    for(int i=0;i<16;i++)
    {
        if(i-4>=0)
        {
           if(check[i-4]==check[i])
               return;
        }
        if(i+4<16)
        {
            if(check[i+4]==check[i])
                return;
        }
        if(i%4!=0)
        {
            if(check[i-1]==check[i])
                return;
        }
        if((i+1)%4!=0)
        {
            if(check[i+1]==check[i])
                return;
        }
    }
    QMediaPlayer *lose=new QMediaPlayer;
    lose->setMedia(QUrl("qrc:/music/lose.mp3"));
    lose->play();
    end=new QDialog;
    QPushButton *button_restart=new QPushButton;
    button_restart->setText("Restart");
    connect(button_restart,SIGNAL(clicked()),this,SLOT(restart()));
    QPushButton *button_quit=new QPushButton;
    button_quit->setText("Quit");
    connect(button_quit,SIGNAL(clicked()),this,SLOT(quit()));
    QLabel *text_1=new QLabel;
    text_1->setText("<h2><font color=red><center>NO MORE MOVES!!</center></font></h2>");
    QLabel *text_2=new QLabel;
    text_2->setText("<center>Enter your name</center>");
    text_name=new QLineEdit;

    QGridLayout *layout=new QGridLayout;
    layout->addWidget(text_1,0,0,1,4);
    layout->addWidget(text_2,1,0,1,4);
    layout->addWidget(text_name,2,1,1,2);
    layout->addWidget(button_restart,3,0,1,2);
    layout->addWidget(button_quit,3,2,1,2);
    end->setLayout(layout);
    end->exec();

}

void game::restart()
{
    qDebug()<<text_name->text();
    end->close();
    set_check();
    select_pic();
    random_generate_for_begin();
}

void game::quit()
{
    qDebug()<<text_name->text();
    QMediaPlayer *warning=new QMediaPlayer;
    warning->setMedia(QUrl("qrc:/music/warning.mp3"));
    warning->play();
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to quit?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/back/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
        exit(1);
}

void game::restart_for_menu()
{
    QMediaPlayer *warning=new QMediaPlayer;
    warning->setMedia(QUrl("qrc:/music/warning.mp3"));
    warning->play();
    QMessageBox message(QMessageBox::NoIcon,"Quit","<h2>Are you sure you want to restart the game?</h2>",QMessageBox::Yes | QMessageBox::No);
    message.setIconPixmap(QPixmap(":/back/warning.jpg"));
    if(message.exec() == QMessageBox::Yes)
    {
        set_check();
        select_pic();
        random_generate_for_begin();
    }
}

void game::change_model()
{
    if(a==0)
        a=1;
    else
        a=0;
    select_pic();
}
