#ifndef TI_H
#define TI_H

#include <QDialog>

namespace Ui {
class Ti;
}

class Ti : public QDialog
{
    Q_OBJECT

public:
    explicit Ti(QWidget *parent = 0);
    QString firstname;
    QString d;
    void fun(QString a);
    ~Ti();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Ti *ui;
};

#endif // TI_H
