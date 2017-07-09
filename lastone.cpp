#include "lastone.h"
#include "ui_lastone.h"
#include"dialog.h"
#include"shome.h"

lastone::lastone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lastone)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
   int h=ui->label_2->height();
    int w=ui->label_2->width();




            ui->label_8->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

lastone::~lastone()
{
    delete ui;
}

void lastone::fan(QString ff)
{
   hh=ff;
   ui->label_7->setText(hh);
}

void lastone::on_pushButton_clicked()
{
    Dialog dll;
    //dll.connopen();
    QSqlQueryModel *md=new QSqlQueryModel;
    //

    QSqlQuery *uoi=new QSqlQuery(dll.db);


    uoi->prepare("select teachname  from relation where stuid=?");//only one student

    uoi->addBindValue(hh);
    uoi->exec();
    uoi->next();
    md->setQuery(*uoi);
    ui->tableView->setModel(md);


}

void lastone::on_pushButton_2_clicked()
{
    this->hide();
    SHome ss;
    ss.setModal(true);
    ss.fun(hh);
    ss.exec();


}

void lastone::on_pushButton_3_clicked()
{

    QSqlQuery qu;
    int age= ui->lineEdit->text().toInt();
    QString board= ui->lineEdit_2->text();
    QString standard=ui->lineEdit_3->text();
     QString phonenumber=ui->lineEdit_4->text();
      QString email=ui->lineEdit_5->text();

    qu.prepare( "update  studinfo  set age=?,board=?,class=?,phonenumber=?,email=? where loginid=?");
    qu.addBindValue(age);
    qu.addBindValue(standard);
     qu.addBindValue(board);
       qu.addBindValue(phonenumber);
         qu.addBindValue(email);
         qu.addBindValue(hh);
         qu.exec();
         qu.next();
         this->hide();
         SHome ss;
         ss.setModal(true);
         ss.fun(hh);
         ss.exec();

}
