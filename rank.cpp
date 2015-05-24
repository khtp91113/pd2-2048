#include "rank.h"

rank::rank(QWidget *parent) :
    QDialog(parent)
{
     QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName("Score.dat");
     db.open();
     //db.exec("DROP TABLE rank");
     QSqlQuery query(db);

     query.prepare("CREATE TABLE rank (Rank varchar[2],Name varchar(20),Score varchar(20))");
     query.exec();

     /*query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('1','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('2','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('3','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('4','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('5','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('6','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('7','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('8','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('9','--','--')");
     query.exec();
     query.prepare("INSERT INTO rank(Rank,Name,Score) VALUES('10','--','--')");
     query.exec();*/
     QSqlQueryModel *model=new QSqlQueryModel;
     model->setQuery("SELECT * FROM rank");

     table=new QTableView;
     table->setWindowTitle("Rank");
     table->setModel(model);
     table->setFixedSize(325,325);
     table->show();
     db.close();
}

rank::~rank()
{

}
