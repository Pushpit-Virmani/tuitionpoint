#ifndef LASTONE_H
#define LASTONE_H

#include <QDialog>

namespace Ui {
class lastone;
}

class lastone : public QDialog
{
    Q_OBJECT

public:
    explicit lastone(QWidget *parent = 0);
    void fan(QString ff);
    QString hh;
    ~lastone();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::lastone *ui;
};

#endif // LASTONE_H
