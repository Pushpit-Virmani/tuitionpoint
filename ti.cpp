#include "ti.h"
#include "ui_ti.h"
#include"dialog.h"
#include "stuinfo.h"


Ti::Ti(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ti)
{
    ui->setupUi(this);
    ui->listWidget_3->addItem("English");
      ui->listWidget_3->addItem("Physics");
        ui->listWidget_3->addItem("Chemistry");
          ui->listWidget_3->addItem("Biology");
            ui->listWidget_3->addItem("Mathematics");
              ui->listWidget_3->addItem("ComputerScience");
              QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
             int h=ui->label_8->height();
              int w=ui->label_8->width();




                      ui->label_8->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

Ti::~Ti()
{
    delete ui;
}

void Ti::on_pushButton_clicked()
{
    ui->listWidget_2->addItem(ui->listWidget_3->currentItem()->text());

    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("update teacherinfo set "+ui->listWidget_3->currentItem()->text()+"='1' where loginid='"+d+"'");
    qu.exec();
    ui->listWidget_3->model()->removeRow(ui->listWidget_3->currentRow());
//dll.closedb();

}

void Ti::on_pushButton_2_clicked()
{
    ui->listWidget_3->addItem(ui->listWidget_2->currentItem()->text());
ui->listWidget_2->model()->removeRow(ui->listWidget_2->currentRow());
//int n1=ui->listWidget_2->count();

//Dialog dll;
//dll.connopen();
QSqlQuery qu;
qu.prepare("update teacherinfo set "+ui->listWidget_3->currentItem()->text()+"='0' where loginid='"+d+"'");
qu.exec();
//dll.closedb();

}

void Ti::on_pushButton_3_clicked()
{

    Dialog dll;
    //dll.connopen();
    QSqlQueryModel *md=new QSqlQueryModel;
    //

    QSqlQuery *uoi=new QSqlQuery(dll.db);


    uoi->prepare("select stuname  from relation where teachid=?");//only one student

    uoi->addBindValue(d);
    uoi->exec();
    uoi->next();

// while(uoi->next())
// {

////  QString studid=uoi->value(0).toString();

////   qDebug()<<studid;
////   QSqlQuery *qu=new QSqlQuery(dll.db);
////    qu->prepare("select * from studinfo where loginid=?");
////    qu->addBindValue(studid);
////    qu->exec();
////     md->setQuery(*uoi);
////  ui->tableView->setModel(md);
//}
md->setQuery(*uoi);
ui->tableView->setModel(md);

  //dll.closedb();

}

void Ti::fun(QString a)
{
   // bool ok=true;
    d=a;
   // ui->label_2->setText(a);
//    int b=a.toInt(&ok,10);
    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("select firstname from teacherinfo where loginid=?");
    qu.addBindValue(a);
     qu.exec();

   qu.next();

         ui->label_7->setText("<h3>Hello,"+qu.value(0).toString()+"</h3>");

     //dll.closedb();
}


void Ti::on_pushButton_5_clicked()
{
    close();
}

void Ti::on_tableView_activated(const QModelIndex &index)
{
    //Dialog dll;
    QString val=ui->tableView->model()->data(index).toString();
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("select * from studinfo where firstname=?");
  qu.addBindValue(val);
    qu.exec();
    qu.next();
    //dll.closedb();
 QString o=qu.value(0).toString();
 QString i=qu.value(1).toString();
 QString l=qu.value(15).toString();
 QString k=qu.value(14).toString();
 QString pp=qu.value(13).toString();
 QString em=qu.value(5).toString();
   Stuinfo thh;
this->hide();
    thh.fun11(o,i,l,k,pp,em,d);
    thh.setModal(true);
    thh.exec();



}
