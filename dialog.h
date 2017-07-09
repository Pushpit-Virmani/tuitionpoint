#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtSql>
#include<QFileInfo>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    bool connopen();
    QString session;
    QString sess;

//int z=0;

    QSqlDatabase db;
//    bool connopen()
//    {
//        z++;
//        qDebug()<<z;
//        if(z==1)
//        {
//        db=QSqlDatabase::addDatabase("QSQLITE");
//        db.setDatabaseName("C:/sqlite/tutionpoint.sqlite");

//        if(db.open())
//        {
//          qDebug()<<"connected...";
//          return true;}
//                    else
//          {
//                    qDebug()<<"not connected";
//                    return false;}



//    }

//    void closedb()
//    {
//        z--;
//        qDebug()<<z;
//        if(z==0)
//        {
//          db.close();
//        // db.removeDatabase(QSqlDatabase::defaultConnection);
//      QSqlDatabase::removeDatabase("QSQLITE");
//        }
 //   }




    ~Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
