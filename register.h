#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    QString firstname;
   int f;
    int h=0;
    ~Register();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();
       void on_pushButton_3_clicked();

       void on_pushButton_clicked();

       void on_pushButton_2_clicked();



private:
    Ui::Register *ui;
};

#endif // REGISTER_H
