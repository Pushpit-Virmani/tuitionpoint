/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(284, 368);
        Dialog->setStyleSheet(QLatin1String("QDialog\n"
"{background-color:rgb(43, 49, 56);\n"
"}\n"
"QPushButton\n"
"{\n"
"border-style:bold;\n"
"border-width:0px;\n"
"border-color:green;\n"
"background-color:rgb(0, 192, 255);\n"
"\n"
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
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 120, 121, 51));
        pushButton_2->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Print\";"));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 190, 121, 51));
        pushButton_3->setStyleSheet(QStringLiteral("font: 12pt \"Segoe Print\";"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 221, 31));
        label->setStyleSheet(QStringLiteral("color:rgb(0, 192, 255);"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 47, 31));
        label_2->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-radius:100px;"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "SIGN-IN", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "REGISTER", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "<h1>TUITION POINT</h1>", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
