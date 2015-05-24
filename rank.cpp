#include "rank.h"

rank::rank(QWidget *parent) :
    QDialog(parent)
{
     QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("Score.dat");
     db.open();
     //db.exec("DROP TABLE rank");
     QSqlQuery query(db);

     query.prepare("CREATE TABLE rank (Name varchar(20),Score varchar(20))");
     query.exec();

     /*query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Name,Score) VALUES('--','--')");
     query.exec();*/
     QSqlQueryModel *model=new QSqlQueryModel;
     model->setQuery("SELECT Name,Score FROM rank ORDER BY Score DESC LIMIT 10 ");

     table=new QTableView;
     table->setWindowTitle("Rank");
     table->setModel(model);
     table->setFixedSize(226,325);
     table->show();
     db.close();
}

rank::~rank()
{

}
