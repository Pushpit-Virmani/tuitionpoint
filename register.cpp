#include "register.h"
#include "ui_register.h"
#include"studenthome.h"
#include"dialog.h"
#include<QMessageBox>
#include<QDebug>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
   int h=ui->label_14->height();
    int w=ui->label_14->width();




            ui->label_14->setPixmap(pixmap.scaled(h,w,Qt::KeepAspectRatio,Qt::SmoothTransformation));


   // this->hide();
    ui->groupBox->close();
    ui->groupBox_2->close();
    ui->listWidget_3->addItem("English");
      ui->listWidget_3->addItem("Physics");
        ui->listWidget_3->addItem("Chemistry");
          ui->listWidget_3->addItem("Biology");
            ui->listWidget_3->addItem("Mathematics");
              ui->listWidget_3->addItem("ComputerScience");

}

Register::~Register()
{
    delete ui;
}

void Register::on_radioButton_clicked()
{
    ui->groupBox->show();
    ui->radioButton_2->hide();


}

void Register::on_radioButton_2_clicked()
{
    h++;
    ui->radioButton->hide();
    ui->radioButton_2->setChecked(true);

    if(h==1)//for clicking many times
    {
    f=1;//counter for checking teacher info
    QString firstname= ui->lineEdit->text();
    QString lastname=  ui->lineEdit_2->text();
    int age=           ui->lineEdit_4->text().toInt();
    QString dob=       ui->lineEdit_3->text();
    QString address=   ui->lineEdit_6->text();
    QString password=  ui->lineEdit_10->text();
    QString ph=ui->lineEdit_11->text();
    QString em=ui->lineEdit_12->text();
    this->firstname=firstname;

    ui->groupBox_2->show();
    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("insert into teacherinfo (firstname,lastname,age,dob,address,password,phonenumber,email,physics,english,chemistry,mathematics,biology,computerscience) values(?,?,?,?,?,?,?,?,'0','0','0','0','0','0')");
    qu.addBindValue(firstname);
    qu.addBindValue(lastname);
    qu.addBindValue(age);
    qu.addBindValue(dob);
    qu.addBindValue(address);
    qu.addBindValue(password);
     qu.addBindValue(ph);
      qu.addBindValue(em);
    qu.exec();
   //dll.closedb();
}}

void Register::on_pushButton_3_clicked()
{



if(f!=1)//counter as teacher info is set
{

    ////Dialog dll;
    //dll.connopen();

    QString firstname= ui->lineEdit->text();
    QString lastname=  ui->lineEdit_2->text();
    int age=           ui->lineEdit_4->text().toInt();
    QString dob=       ui->lineEdit_3->text();
    QString address=   ui->lineEdit_6->text();
   // QString loginid=ui->lineEdit->text();
    QString password=  ui->lineEdit_10->text();
    QString standard=  ui->lineEdit_7->text();
    QString stream=    ui->lineEdit_8->text();
    QString board=ui->lineEdit_9->text();
    QString ph=ui->lineEdit_11->text();
    QString em=ui->lineEdit_12->text();





//    int lid = loginid.toInt(&ok, 10);
    QSqlQuery qu;

    qu.prepare( "insert into studinfo  (firstname,lastname,age,dob,address,password,class,stream,board,physics,chemistry,mathematics,biology,english,computerscience,phonenumber,email) values (?,?,?,?,?,?,?,?,?,0,0,0,0,0,0,?,?)");
    qu.addBindValue(firstname);
     qu.addBindValue(lastname);
      qu.addBindValue(age);
       qu.addBindValue(dob);
        qu.addBindValue(address);
//         qu.addBindValue(lid);
           qu.addBindValue(password);
           qu.addBindValue(standard);
            qu.addBindValue(stream);
             qu.addBindValue(board);
                 qu.addBindValue(ph);
                     qu.addBindValue(em);
             qu.exec();
             qu.prepare("select loginid from studinfo where firstname=?");
             qu.addBindValue(firstname);
             qu.exec();
             QString fg;
             while(qu.next())
             {
                 fg=qu.value(0).toString();
             }



           if(qu.exec()){
           //QMessageBox::information(this,"Save","Successfully saved");
               QMessageBox::information(this,"log id","your id is "+fg);

         }
           else
             QMessageBox::information(this,"error",qu.lastError().text());
           //dll.closedb();
this->close();
   Dialog st;
    st.setModal(true);
    st.exec();


}
else//as data entry is done earlier
        {
    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;

    qu.prepare("select loginid from teacherinfo where firstname=?");
    qu.addBindValue(firstname);
    qu.exec();
    QString fg;
    while(qu.next())
    {
        fg=qu.value(0).toString();
    }



  if(qu.exec()){
  //QMessageBox::information(this,"Save","Successfully saved");
      QMessageBox::information(this,"log id","your id is "+fg);
     //dll.closedb();
    this->close();
    Dialog st;
    st.setModal(true);
    st.exec();
}
}
}


void Register::on_pushButton_clicked()
{
    ui->listWidget_2->addItem(ui->listWidget_3->currentItem()->text());

    //Dialog dll;
    //dll.connopen();
    QSqlQuery qu;
    qu.prepare("update teacherinfo set "+ui->listWidget_3->currentItem()->text()+"='1' where firstname='"+this->firstname+"'");
    qu.exec();
    ui->listWidget_3->model()->removeRow(ui->listWidget_3->currentRow());
//dll.closedb();
}

void Register::on_pushButton_2_clicked()
{
    ui->listWidget_3->addItem(ui->listWidget_2->currentItem()->text());
ui->listWidget_2->model()->removeRow(ui->listWidget_2->currentRow());
//int n1=ui->listWidget_2->count();

//Dialog dll;
//dll.connopen();
QSqlQuery qu;
qu.prepare("update teacherinfo set "+ui->listWidget_3->currentItem()->text()+"='0' where firstname='"+this->firstname+"'");
qu.exec();
//dll.closedb();


}

