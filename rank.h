#ifndef RANK_H
#define RANK_H

#include <QDialog>
#include "game.h"

class rank : public QDialog
{
    Q_OBJECT

public:
    explicit rank(QWidget *parent = 0);//建立rank資料庫
    ~rank();
    QTableView *table;
private:
};

#endif // RANK_H
