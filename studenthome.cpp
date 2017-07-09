#include "studenthome.h"
#include "ui_studenthome.h"
#include"dialog.h"
#include<QDebug>
#include<QSqlQueryModel>
#include"teacherhome.h"
#include<QMessageBox>
#include"shome.h"

StudentHome::StudentHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentHome)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
   int h=ui->label_8->height();
    int w=ui->label_8->width();




            ui->label_8->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

StudentHome::~StudentHome()
{
    delete ui;
}

void StudentHome::on_pushButton_2_clicked()
{
    close();
}

void StudentHome::on_checkBox_clicked()
{
    flag++;
    if(flag%2!=0)
 e=1;
    else
        e=0;



}
void StudentHome::on_checkBox_2_clicked()
{flag1++;
            if (flag1%2!=0)
    {
 e1=1;}
            else
                e1=0;

}
void StudentHome::on_checkBox_3_clicked()
{
    flag2++;
    if(flag2%2!=0)
 e2=1;
    else
        e2=0;
}
void StudentHome::on_checkBox_4_clicked()
{
    flag3++;
    if(flag3%2!=0)
 e3=1;
    else
        e3=0;
}
void StudentHome::on_checkBox_5_clicked()
{
    flag4++;
    if(flag4%2!=0)
 e4=1;
    else
        e4=0;
}
void StudentHome::on_checkBox_6_clicked()
{
    flag5++;
    if(flag5%2!=0)
 e5=1;
    else
        e5=0;
}


void StudentHome::on_pushButton_clicked()
{
    qDebug()<<e<<e1<<e2<<e3<<e4<<e5;

    Dialog dll;
    //dll.connopen();
    QSqlQueryModel *md=new QSqlQueryModel;
    QSqlQuery *qu=new QSqlQuery(dll.db);
    qu->prepare("select * from teacherinfo where english=? or physics=? or chemistry=? or mathematics=? or biology=? or computerscience=?");
    qu->addBindValue(e);
     qu->addBindValue(e1);
        qu->addBindValue(e2);
          qu->addBindValue(e3);
            qu->addBindValue(e4);
              qu->addBindValue(e5);

    qu->exec();
    md->setQuery(*qu);
    ui->tableView->setModel(md);
   //dll.closedb();

}

void StudentHome::on_tableView_activated(const QModelIndex &index)
{
    //Dialog dll;
    QString val=ui->tableView->model()->data(index).toString();
//    ui->tableView->model()->data(

//QMessageBox::information(this,"hello",);
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("select * from teacherinfo where loginid=? or firstname=? or lastname=? or age=? or dob=? or address=? or password=? or physics=? or english=? or chemistry=? or mathematics=? or biology=? or computerscience=? or phonenumber=? or email=?");
  qu.addBindValue(val);
  qu.addBindValue(val);
  qu.addBindValue(val);
  qu.addBindValue(val);
   qu.addBindValue(val);
     qu.addBindValue(val);
       qu.addBindValue(val);
         qu.addBindValue(val);
           qu.addBindValue(val);
             qu.addBindValue(val);
               qu.addBindValue(val);
                 qu.addBindValue(val);
                  qu.addBindValue(val);
                   qu.addBindValue(val);
                    qu.addBindValue(val);

    qu.exec();
    qu.next();
 QString o=qu.value(5).toString();
 QString i=qu.value(0).toString();
 QString l=qu.value(1).toString();
 QString k=qu.value(2).toString();
 QString pp=qu.value(13).toString();
 QString em=qu.value(14).toString();

int kl=0;

    TeacherHome th;
    QString oppa=ee;
     //dll.closedb();
this->hide();
    th.fun1(o,i,l,k,oppa,pp,em,kl);
    th.setModal(true);
    th.exec();



}
void StudentHome::fun2(QString v)
{
   ee=v;
    ui->label_2->setText(v);

}

void StudentHome::on_pushButton_3_clicked()
{
    this->hide();
    SHome sf;
    sf.setModal(true);
    sf.fun(ee);
    sf.exec();
}
