#include "shome.h"
#include "ui_shome.h"
#include "dialog.h"
#include"signin.h"
#include"QDebug"
#include"studenthome.h"
#include"teacherhome.h"
#include"lastone.h"

SHome::SHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SHome)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
   int h=ui->label_8->height();
    int w=ui->label_8->width();




            ui->label_8->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    Signin u;
    uid=u.username;
    qDebug()<<uid;


    ui->label_2->setText(uid);
    ui->tableView->close();
}

SHome::~SHome()
{
    delete ui;
}

void SHome::fun(QString a)
{
    bool ok=true;
    uid=a;
    ui->label_2->setText(a);
//    int b=a.toInt(&ok,10);
    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("select firstname from studinfo where loginid=?");
    qu.addBindValue(a);
     qu.exec();
     n=a;
    qu.next();

         ui->label_3->setText("<h3>Hello,"+qu.value(0).toString()+"</h3>");

     //dll.closedb();
}

void SHome::on_pushButton_2_clicked()
{

this->hide();
    StudentHome st;
    st.fun2(n);
    st.setModal(true);
    st.exec();
}

void SHome::on_pushButton_3_clicked()
{
    close();
}

void SHome::on_pushButton_clicked()
{
    this->hide();
    lastone lo;
    lo.fan(uid);
    lo.setModal(true);
    lo.exec();

}

void SHome::on_pushButton_4_clicked()
{
    ui->tableView->show();
    QString uidd=uid;

    Dialog dll;
    //dll.connopen();
    QSqlQueryModel *md=new QSqlQueryModel;
    //

    QSqlQuery *uoi=new QSqlQuery(dll.db);


    uoi->prepare("select teachname from relation where stuid='"+uid+"'");//only one student

   // uoi->addBindValue(uid);
    uoi->exec();
  while(uoi->next())
  {}
    md->setQuery(*uoi);
    ui->tableView->setModel(md);

       //dll.closedb();



}

void SHome::on_tableView_activated(const QModelIndex &index)
{
    //Dialog dll;
    QString val=ui->tableView->model()->data(index).toString();

    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("select * from teacherinfo where  firstname=?");
  qu.addBindValue(val);


    qu.exec();
    qu.next();
 QString o=qu.value(5).toString();
 QString i=qu.value(0).toString();
 QString l=qu.value(1).toString();
 QString k=qu.value(2).toString();
 QString pp=qu.value(13).toString();
 QString em=qu.value(14).toString();

int check=1;

    TeacherHome thy;
  //  QString oppa=ee;
     //dll.closedb();
this->hide();
      TeacherHome th;

    th.fun1(o,i,l,k,uid,pp,em,check);
    th.setModal(true);
    th.exec();

}
void SHome::funn()
{ ui->tableView->hide();
    QString uidd=uid;

    Dialog dll;
    //dll.connopen();
    QSqlQueryModel *md=new QSqlQueryModel;
    //

    QSqlQuery *uoi=new QSqlQuery(dll.db);


    uoi->prepare("select teachname from relation where stuid='"+uid+"'");//only one student

   // uoi->addBindValue(uid);
    uoi->exec();
  while(uoi->next())
  {}
    md->setQuery(*uoi);
    ui->tableView->setModel(md);

}
