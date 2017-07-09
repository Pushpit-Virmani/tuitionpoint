/********************************************************************************
** Form generated from reading UI file 'ti.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TI_H
#define UI_TI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Ti
{
public:
    QLabel *label;
    QLabel *label_6;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QLabel *label_7;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_8;

    void setupUi(QDialog *Ti)
    {
        if (Ti->objectName().isEmpty())
            Ti->setObjectName(QStringLiteral("Ti"));
        Ti->resize(781, 479);
        Ti->setMouseTracking(true);
        Ti->setStyleSheet(QLatin1String("QDialog\n"
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
"}"));
        label = new QLabel(Ti);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 0, 251, 41));
        label->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        label_6 = new QLabel(Ti);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 370, 121, 16));
        label_6->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        pushButton_3 = new QPushButton(Ti);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(44, 120, 121, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Print\";"));
        label_5 = new QLabel(Ti);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 70, 151, 16));
        label_5->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
""));
        groupBox_2 = new QGroupBox(Ti);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(180, 230, 371, 261));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 80, 41, 23));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 150, 41, 23));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        listWidget_2 = new QListWidget(groupBox_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(220, 50, 131, 161));
        listWidget_2->setStyleSheet(QLatin1String("background-color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        listWidget_3 = new QListWidget(groupBox_2);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(20, 50, 131, 161));
        listWidget_3->setStyleSheet(QLatin1String("background-color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        label_7 = new QLabel(Ti);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 101, 31));
        tableView = new QTableView(Ti);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(190, 90, 121, 131));
        tableView->setStyleSheet(QLatin1String("background-color:rgb(0, 192, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        pushButton_4 = new QPushButton(Ti);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 990, 75, 23));
        pushButton_5 = new QPushButton(Ti);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(670, 10, 75, 31));
        pushButton_5->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(Ti);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 10, 47, 31));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(Ti);

        QMetaObject::connectSlotsByName(Ti);
    } // setupUi

    void retranslateUi(QDialog *Ti)
    {
        Ti->setWindowTitle(QApplication::translate("Ti", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Ti", "<h1>Teacher Info</h1>", Q_NULLPTR));
        label_6->setText(QApplication::translate("Ti", "edit subjects", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Ti", " my students", Q_NULLPTR));
        label_5->setText(QApplication::translate("Ti", "students enrolled", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Ti", "Teacher Info", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Ti", ">", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Ti", "<", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_4->setText(QApplication::translate("Ti", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Ti", "Logout", Q_NULLPTR));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ti: public Ui_Ti {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TI_H
