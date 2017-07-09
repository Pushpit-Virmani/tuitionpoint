#ifndef SHOME_H
#define SHOME_H

#include <QDialog>

namespace Ui {
class SHome;
}

class SHome : public QDialog
{
    Q_OBJECT

public:
    explicit SHome(QWidget *parent = 0);
    QString n;
    QString uid;
      void fun(QString a);//for sending values
        void funn();
      ~SHome();

private slots:
      void on_pushButton_2_clicked();

      void on_pushButton_3_clicked();

      void on_pushButton_clicked();

      void on_pushButton_4_clicked();

      void on_tableView_activated(const QModelIndex &index);

private:
    Ui::SHome *ui;
};

#endif // SHOME_H
