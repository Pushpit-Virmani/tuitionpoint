#include "dialog.h"
#include "ui_dialog.h"
#include"register.h"
#include"signin.h"
#include"studenthome.h"
#include"teacherhome.h"
#include<QColorDialog>




Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
     QPixmap pixmap("D:/Users/john/Desktop/logo.jpeg");
    int h=ui->label_2->height();
     int w=ui->label_2->width();




             ui->label_2->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked()
{
    this->hide();
    Signin sig;
    connopen();

    sig.setModal(true);
    sig.exec();

}

void Dialog::on_pushButton_3_clicked()
{
    this->hide();
    Register re;
    connopen();
    re.setModal(true);
    re.exec();

}

bool Dialog:: connopen()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("tutionpoint");
//    db.setUserName("root");
//    db.setPassword("root");
    db.setHostName("localhost");
    db.setDatabaseName("tutionpoint");
    db.setUserName("root");
    db.setPassword("root");
    if (db.open()) {
        qDebug() << "Database error not occurred";
        return false;
}
    return true;
}
