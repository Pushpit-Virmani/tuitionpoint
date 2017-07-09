#ifndef TEACHERHOME_H
#define TEACHERHOME_H

#include <QDialog>

namespace Ui {
class TeacherHome;
}

class TeacherHome : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherHome(QWidget *parent = 0);
    QString q;
    QString t;
    void fun1(QString b,QString c,QString d,QString e,QString ll,QString nnn,QString mmm,int yuyu);

    ~TeacherHome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TeacherHome *ui;
};

#endif // TEACHERHOME_H
