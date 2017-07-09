/********************************************************************************
** Form generated from reading UI file 'lastone.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTONE_H
#define UI_LASTONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_lastone
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *lastone)
    {
        if (lastone->objectName().isEmpty())
            lastone->setObjectName(QStringLiteral("lastone"));
        lastone->resize(555, 479);
        lastone->setStyleSheet(QLatin1String("QDialog\n"
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
"border-width:1px;\n"
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
"QLabel\n"
"{font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";}\n"
""));
        label = new QLabel(lastone);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 13, 281, 31));
        label->setStyleSheet(QLatin1String("font: 20pt \"Segoe Print\";\n"
""));
        label_2 = new QLabel(lastone);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 47, 21));
        label_3 = new QLabel(lastone);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 61, 16));
        label_4 = new QLabel(lastone);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 160, 81, 16));
        tableView = new QTableView(lastone);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(130, 280, 211, 131));
        tableView->setStyleSheet(QLatin1String("\n"
"background-color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        lineEdit = new QLineEdit(lastone);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 80, 113, 20));
        lineEdit_2 = new QLineEdit(lastone);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 120, 113, 20));
        lineEdit_3 = new QLineEdit(lastone);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 160, 113, 20));
        pushButton = new QPushButton(lastone);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 302, 111, 21));
        pushButton->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        lineEdit_4 = new QLineEdit(lastone);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 200, 113, 20));
        lineEdit_5 = new QLineEdit(lastone);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(160, 240, 113, 20));
        label_5 = new QLabel(lastone);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 200, 131, 16));
        label_6 = new QLabel(lastone);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 240, 47, 13));
        pushButton_2 = new QPushButton(lastone);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 75, 16));
        pushButton_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        pushButton_3 = new QPushButton(lastone);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 430, 75, 23));
        pushButton_3->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Print\";"));
        label_7 = new QLabel(lastone);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 10, 47, 13));
        label_8 = new QLabel(lastone);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 10, 47, 31));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));
        label_9 = new QLabel(lastone);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(330, 260, 47, 31));
        label_9->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(lastone);

        QMetaObject::connectSlotsByName(lastone);
    } // setupUi

    void retranslateUi(QDialog *lastone)
    {
        lastone->setWindowTitle(QApplication::translate("lastone", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("lastone", "Student information", Q_NULLPTR));
        label_2->setText(QApplication::translate("lastone", "age", Q_NULLPTR));
        label_3->setText(QApplication::translate("lastone", "board", Q_NULLPTR));
        label_4->setText(QApplication::translate("lastone", "standard", Q_NULLPTR));
        pushButton->setText(QApplication::translate("lastone", "MY Teachers", Q_NULLPTR));
        label_5->setText(QApplication::translate("lastone", "phonenumber", Q_NULLPTR));
        label_6->setText(QApplication::translate("lastone", "email", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("lastone", "back", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("lastone", "done", Q_NULLPTR));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lastone: public Ui_lastone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTONE_H
