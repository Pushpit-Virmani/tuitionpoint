/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_4;
    QLabel *label_14;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(895, 748);
        Register->setStyleSheet(QLatin1String("QDialog\n"
"{background-color:rgb(43, 49, 56);\n"
"}\n"
"QLabel\n"
"{\n"
"color:rgb(0, 192, 255);\n"
"}\n"
"QPushButton\n"
"{\n"
"border-style:bold;\n"
"background-color:rgb(0, 192, 255);\n"
"color:white;\n"
"\n"
"\n"
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
"QRadioButton\n"
"{\n"
"color:rgb(0, 192, 255);}\n"
"QGroupBox\n"
"{font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);\n"
"}\n"
"QLineEdit\n"
"{\n"
"color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";}\n"
""));
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 0, 231, 41));
        label->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 470, 371, 241));
        groupBox->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);\n"
""));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 50, 81, 21));
        label_8->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 130, 71, 16));
        label_10->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 90, 71, 16));
        label_9->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(140, 50, 113, 20));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(140, 90, 113, 20));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 130, 113, 20));
        groupBox_2 = new QGroupBox(Register);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(510, 470, 371, 241));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 90, 41, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 150, 41, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(220, 50, 131, 161));
        listWidget_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);\n"
""));
        listWidget_3 = new QListWidget(groupBox_2);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(20, 50, 131, 161));
        listWidget_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);\n"
""));
        radioButton = new QRadioButton(Register);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(160, 440, 101, 17));
        radioButton->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"\n"
""));
        radioButton_2 = new QRadioButton(Register);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(530, 440, 91, 17));
        radioButton_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        pushButton_3 = new QPushButton(Register);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 710, 91, 41));
        pushButton_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(340, 120, 141, 31));
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 80, 141, 31));
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(340, 201, 141, 31));
        lineEdit_6 = new QLineEdit(Register);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(340, 241, 141, 31));
        lineEdit_10 = new QLineEdit(Register);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(340, 281, 141, 31));
        lineEdit_10->setEchoMode(QLineEdit::Password);
        lineEdit_11 = new QLineEdit(Register);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(340, 321, 141, 31));
        lineEdit_12 = new QLineEdit(Register);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(340, 371, 141, 31));
        label_2 = new QLabel(Register);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 80, 108, 25));
        label_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 120, 106, 25));
        label_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 160, 111, 21));
        label_4->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_5 = new QLabel(Register);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 210, 108, 21));
        label_5->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_7 = new QLabel(Register);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 250, 108, 21));
        label_7->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_11 = new QLabel(Register);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(210, 290, 108, 16));
        label_11->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_12 = new QLabel(Register);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(210, 330, 119, 25));
        label_12->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_13 = new QLabel(Register);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 370, 119, 31));
        label_13->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        lineEdit_4 = new QLineEdit(Register);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(340, 161, 141, 31));
        label_14 = new QLabel(Register);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(200, 10, 47, 31));
        label_14->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));
        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        radioButton->raise();
        radioButton_2->raise();
        pushButton_3->raise();
        lineEdit_3->raise();
        lineEdit_6->raise();
        lineEdit_10->raise();
        lineEdit_11->raise();
        lineEdit_12->raise();
        label_4->raise();
        label_5->raise();
        label_7->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        lineEdit_4->raise();
        label_3->raise();
        lineEdit_2->raise();
        label_2->raise();
        lineEdit->raise();
        label_14->raise();

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "<h1><u>REGISTER</u></h1>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Register", "Student Info", Q_NULLPTR));
        label_8->setText(QApplication::translate("Register", "Standard:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Register", "Board : ", Q_NULLPTR));
        label_9->setText(QApplication::translate("Register", "Stream : ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Register", "Teacher Info", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Register", ">", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Register", "<", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Register", "Student", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Register", "Teacher", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Register", "Submit", Q_NULLPTR));
        lineEdit->setText(QString());
        label_2->setText(QApplication::translate("Register", "First Name : ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "Last Name  :", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Age  : ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "DOB : ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Register", "Address : ", Q_NULLPTR));
        label_11->setText(QApplication::translate("Register", "Password:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Register", "phonenumber", Q_NULLPTR));
        label_13->setText(QApplication::translate("Register", "email", Q_NULLPTR));
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
