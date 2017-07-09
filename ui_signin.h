/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_8;

    void setupUi(QDialog *Signin)
    {
        if (Signin->objectName().isEmpty())
            Signin->setObjectName(QStringLiteral("Signin"));
        Signin->resize(641, 444);
        Signin->setStyleSheet(QLatin1String("QDialog\n"
"{background-color:rgb(43, 49, 56);\n"
"}\n"
"QPushButton\n"
"{\n"
"border-style:bold;\n"
"border-width:0px;\n"
"border-color:green;\n"
"background-color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:white;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:white;\n"
"color:rgb(0, 192, 255);\n"
"border-color:green;\n"
"border-width:10px;\n"
"border-style:bold;\n"
"}\n"
"QPushButtonpressed\n"
"{\n"
"color:rgb(255, 255, 0);\n"
"background-color:rgb(52, 168, 83);\n"
"border-width:2px;}\n"
"QLabel\n"
"{\n"
"color:rgb(0,192,255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";}"));
        label = new QLabel(Signin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 191, 41));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(Signin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 160, 91, 31));
        label_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_3 = new QLabel(Signin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 220, 91, 31));
        label_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        lineEdit = new QLineEdit(Signin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 160, 131, 31));
        lineEdit->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0, 192, 255);\n"
""));
        lineEdit_2 = new QLineEdit(Signin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 220, 131, 31));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(Signin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 310, 101, 41));
        pushButton->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(Signin);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 30, 47, 31));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(Signin);

        QMetaObject::connectSlotsByName(Signin);
    } // setupUi

    void retranslateUi(QDialog *Signin)
    {
        Signin->setWindowTitle(QApplication::translate("Signin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Signin", "<h1><u>SIGN-UP</u></h1>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Signin", "Username:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Signin", "Password:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Signin", "Submit", Q_NULLPTR));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signin: public Ui_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
