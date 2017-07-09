/********************************************************************************
** Form generated from reading UI file 'shome.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOME_H
#define UI_SHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SHome
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_8;

    void setupUi(QDialog *SHome)
    {
        if (SHome->objectName().isEmpty())
            SHome->setObjectName(QStringLiteral("SHome"));
        SHome->resize(529, 406);
        SHome->setStyleSheet(QLatin1String("QDialog\n"
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
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";}"));
        label = new QLabel(SHome);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 251, 41));
        label->setStyleSheet(QLatin1String("color:rgb(0,192,255);\n"
""));
        label_2 = new QLabel(SHome);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 61, 21));
        pushButton = new QPushButton(SHome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 160, 151, 51));
        pushButton_2 = new QPushButton(SHome);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 230, 151, 51));
        pushButton_3 = new QPushButton(SHome);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 20, 75, 31));
        pushButton_4 = new QPushButton(SHome);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 300, 151, 51));
        label_3 = new QLabel(SHome);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 331, 31));
        label_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"color:rgb(12, 211, 255);"));
        tableView = new QTableView(SHome);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(350, 280, 171, 81));
        tableView->setStyleSheet(QLatin1String("background-color:rgb(12, 211, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        label_8 = new QLabel(SHome);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 30, 47, 31));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(SHome);

        QMetaObject::connectSlotsByName(SHome);
    } // setupUi

    void retranslateUi(QDialog *SHome)
    {
        SHome->setWindowTitle(QApplication::translate("SHome", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SHome", "<html><head/><body><p><span style=\" font-size:xx-large; font-weight:600;\">Student Home</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("SHome", "Edit Profile", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SHome", "Search Tuition", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SHome", "Logout", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SHome", "Unenroll", Q_NULLPTR));
        label_3->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SHome: public Ui_SHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOME_H
