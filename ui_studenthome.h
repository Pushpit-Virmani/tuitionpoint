/********************************************************************************
** Form generated from reading UI file 'studenthome.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTHOME_H
#define UI_STUDENTHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_StudentHome
{
public:
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_8;

    void setupUi(QDialog *StudentHome)
    {
        if (StudentHome->objectName().isEmpty())
            StudentHome->setObjectName(QStringLiteral("StudentHome"));
        StudentHome->resize(759, 515);
        StudentHome->setStyleSheet(QLatin1String("QDialog\n"
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
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);}\n"
"QCheckBox\n"
"{\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";\n"
"color:rgb(0,192,255);}"));
        label = new QLabel(StudentHome);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 0, 271, 41));
        checkBox = new QCheckBox(StudentHome);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(50, 160, 91, 31));
        checkBox->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        checkBox_2 = new QCheckBox(StudentHome);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(50, 200, 121, 21));
        checkBox_2->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        checkBox_3 = new QCheckBox(StudentHome);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(50, 230, 131, 21));
        checkBox_3->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        checkBox_4 = new QCheckBox(StudentHome);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(50, 260, 131, 21));
        checkBox_4->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        checkBox_5 = new QCheckBox(StudentHome);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(50, 290, 101, 21));
        checkBox_5->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        checkBox_6 = new QCheckBox(StudentHome);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(50, 320, 171, 21));
        checkBox_6->setStyleSheet(QLatin1String("font: 12pt \"Segoe Print\";\n"
"\n"
""));
        pushButton = new QPushButton(StudentHome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 390, 75, 31));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_2 = new QPushButton(StudentHome);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 30, 75, 31));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        tableView = new QTableView(StudentHome);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(240, 100, 481, 391));
        tableView->setStyleSheet(QLatin1String("background-color:rgb(85, 170, 255);\n"
"font: 12pt \"Segoe Print\";\n"
"font: 75 12pt \"Segoe Script\";"));
        label_2 = new QLabel(StudentHome);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 211, 71));
        pushButton_3 = new QPushButton(StudentHome);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 10, 75, 31));
        label_8 = new QLabel(StudentHome);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(180, 10, 47, 31));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(StudentHome);

        QMetaObject::connectSlotsByName(StudentHome);
    } // setupUi

    void retranslateUi(QDialog *StudentHome)
    {
        StudentHome->setWindowTitle(QApplication::translate("StudentHome", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("StudentHome", "<html><head/><body><p><span style=\" font-size:xx-large; font-weight:600;\">Find Tution</span></p></body></html>", Q_NULLPTR));
        checkBox->setText(QApplication::translate("StudentHome", "English", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("StudentHome", "Physics", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("StudentHome", "Chemistry", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("StudentHome", "Mathematics", Q_NULLPTR));
        checkBox_5->setText(QApplication::translate("StudentHome", "Biology", Q_NULLPTR));
        checkBox_6->setText(QApplication::translate("StudentHome", "Computer Science", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StudentHome", "Search!", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("StudentHome", "Logout", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_3->setText(QApplication::translate("StudentHome", "<<back", Q_NULLPTR));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudentHome: public Ui_StudentHome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTHOME_H
