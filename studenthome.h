#ifndef STUDENTHOME_H
#define STUDENTHOME_H

#include <QDialog>

namespace Ui {
class StudentHome;
}

class StudentHome : public QDialog
{
    Q_OBJECT

public:
    explicit StudentHome(QWidget *parent = 0);
    void fun2(QString v);
    QString ee;

    ~StudentHome();

int flag=0;
int flag1=0;
int flag2=0;
int flag3=0;
int flag4=0;
int flag5=0;
   int e=2;
   int e1=2;
   int e2=2;
   int e3=2;
   int e4=2;
   int e5=2;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

    void on_checkBox_clicked();
    void on_checkBox_2_clicked();
    void on_checkBox_3_clicked();
    void on_checkBox_4_clicked();
    void on_checkBox_5_clicked();
    void on_checkBox_6_clicked();



   void on_tableView_activated(const QModelIndex &index);

   void on_pushButton_3_clicked();

private:
    Ui::StudentHome *ui;
};

#endif // STUDENTHOME_H
