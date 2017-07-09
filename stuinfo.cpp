#include "stuinfo.h"
#include "ui_stuinfo.h"
#include "ti.h"

Stuinfo::Stuinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stuinfo)
{
    ui->setupUi(this);
    QPixmap p("C:/Users/dell/Desktop/luffy1.jpg");
    int h=ui->label_12->height();
    int w=ui->label_12->width();
            ui->label_12->setPixmap(p.scaled(h,w,Qt::KeepAspectRatio));
            QPixmap pixmap("C:/Users/dell/Desktop/logo.jpeg");
           int h2=ui->label_14->height();
            int w2=ui->label_14->width();




                    ui->label_14->setPixmap(pixmap.scaled(h2,w2,Qt::KeepAspectRatio,Qt::SmoothTransformation));

}

Stuinfo::~Stuinfo()
{
    delete ui;
}
void Stuinfo::fun11(QString b,QString c,QString d,QString e,QString ll,QString j,QString vv)
{
    ff=vv;
    ui->label_7->setText(b);
     ui->label_8->setText(c);
      ui->label_9->setText(d);
      ui->label_10->setText(e);
      ui->label_11->setText(ll);
//        ui->label_13->setText(k);
      ui->label_13->setText(vv);
}

void Stuinfo::on_pushButton_clicked()
{
    this->hide();
    Ti hd;
    hd.fun(ff);
    hd.setModal(true);
    hd.exec();

}

void Stuinfo::on_pushButton_2_clicked()
{
    close();
}
