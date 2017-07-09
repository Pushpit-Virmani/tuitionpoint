#include "teacherhome.h"
#include "ui_teacherhome.h"
#include"dialog.h"
#include"QMessageBox"
#include"studenthome.h"
#include"shome.h"
#include<QDebug>

TeacherHome::TeacherHome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherHome)
{
    ui->setupUi(this);
    QPixmap p("C:/Users/dell/Desktop/kurojpg.jpg");
    int h=ui->label_4->height();
    int w=ui->label_4->width();
            ui->label_4->setPixmap(p.scaled(h,w,Qt::KeepAspectRatio));
            QPixmap pixmapp("C:/Users/dell/Desktop/logo.jpeg");
           int h1=ui->label_15->height();
            int w1=ui->label_15->width();




                    ui->label_15->setPixmap(pixmapp.scaled(h1,w1,Qt::KeepAspectRatio,Qt::SmoothTransformation));

            ui->pushButton_2->hide();

}

TeacherHome::~TeacherHome()
{
    delete ui;
}
    void TeacherHome::fun1(QString b,QString c,QString d,QString e,QString ll,QString j,QString k,int yuyu)
    {
        if(yuyu==1)
        {ui->pushButton->hide();
            ui->pushButton_2->show();}
        qDebug()<<b<<c<<d;
        ui->label_14->setText(c);
         ui->label_10->setText(d);
          ui->label_11->setText(e);
          ui->label_2->setText(ll);
          ui->label_9->setText(j);
            ui->label_13->setText(k);

            t=ll;//stuid
            q=b;//teachid
    }



void TeacherHome::on_pushButton_clicked()
{
    //Dialog dll;
    //dll.connopen();
      QSqlQuery qu1;
    QSqlQuery qu;
    QSqlQuery qu2;
    qu2.prepare("select firstname from teacherinfo where loginid=?");
    qu2.addBindValue(q);
    qu2.exec();
    qu2.next();
    QString s=qu2.value(0).toString();
    qu1.prepare("select firstname from studinfo where loginid=?");
    qu1.addBindValue(t);
    qu1.exec();
    qu1.next();
    QString k=qu1.value(0).toString();
QSqlQuery sss;
sss.prepare("select relation.stuid,relation.teachid from relation");
sss.exec();
int cc=0;
while(sss.next())
//    bool okkk=true;
{
    if(t==sss.value(0) && q==sss.value(1))
        cc++;
}

if(cc<1)
{
    qu.prepare("insert into relation values(?,?,'0','0','0','0','0','0','0',?,?) ");
    qu.addBindValue(t);
    qu.addBindValue(q);
    qu.addBindValue(k);
        qu.addBindValue(s);
    qu.exec();
   //dll.closedb();

    QMessageBox::information(this,"enrolled","your contact details have been shared with your teacher");
    this->hide();
    SHome st;
    st.setModal(true);
    st.fun(t);
    st.exec();}
else
{
    QMessageBox::information(this,"message", s+"  is already your teacher");
   // this->hide();
//    SHome st;
//    st.setModal(true);
//    st.fun(t);
//    st.exec();
}



}

void TeacherHome::on_pushButton_2_clicked()
{
    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("delete from relation where stuid=? and teachid=? ");
    qu.addBindValue(t);
    qu.addBindValue(q);
    qu.exec();
    //dll.closedb();
    QMessageBox::information(this,"unenrolled","you have been unrolled successfully");


   SHome st;
   st.fun(t);
   this->hide();
   st.setModal(true);

    st.exec();
}
