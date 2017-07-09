#ifndef STUINFO_H
#define STUINFO_H

#include <QDialog>

namespace Ui {
class Stuinfo;
}

class Stuinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Stuinfo(QWidget *parent = 0);
    void fun11(QString b,QString c,QString d,QString e,QString ll,QString j,QString vv);
    QString ff;
    ~Stuinfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Stuinfo *ui;
};

#endif // STUINFO_H
