#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>

namespace Ui {
class Signin;
}

class Signin : public QDialog
{
    Q_OBJECT

public:
    explicit Signin(QWidget *parent = 0);

    QString username;
    ~Signin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Signin *ui;
};

#endif // SIGNIN_H
