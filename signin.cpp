#include "signin.h"
#include "ui_signin.h"
#include "dialog.h"
#include"studenthome.h"
#include"QMessageBox"
#include"teacherhome.h"
#include"shome.h"
#include"ti.h"

Signin::Signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signin)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
   int h=ui->label_8->height();
    int w=ui->label_8->width();




            ui->label_8->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

//    //Dialog dll;
//    //dll.connopen();
}

Signin::~Signin()
{
    delete ui;
}

void Signin::on_pushButton_clicked()
{

 this->username= ui->lineEdit->text();
   QString password= ui->lineEdit_2->text();
   //Dialog dll;
   //dll.connopen();
   QSqlQuery qu;
    qDebug()<<"ihj";
   qu.prepare("select studinfo.loginid, studinfo.password, teacherinfo.loginid, teacherinfo.password from studinfo, teacherinfo ");
//   qu.addBindValue(username);
//   qu.addBindValue(password);
   qu.exec();

   bool ok=true;int c=0;
   while(qu.next())
   {
      if(this->username.toInt(&ok,10)>1000)
      {
          if(this->username == qu.value(0).toString() && password == qu.value(1).toString())
          {

                c=1;

                ////dll.closedb();
                this->hide();

              SHome stu;

              stu.fun(this->username);
               stu.setModal(true);
               stu.exec();
               break;



          }

      }
      else
      {
          if(this->username == qu.value(2).toString() && password == qu.value(3).toString())
          {
                c=1;
                //dll.closedb();
                this->close();
              Ti stuu;
              stuu.fun(this->username);
              stuu.setModal(true);

              stuu.exec();
              break;
          }



      }
     }
   if(c!=1)
   {//dll.closedb();
      QMessageBox::information(this,"error","wrong values entered");}

}

