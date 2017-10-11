/********************************************************************************
** Form generated from reading UI file 'homedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEDISPLAY_H
#define UI_HOMEDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeDisplay
{
public:
    QLabel *label_2;
    QPushButton *Borrowing;
    QPushButton *Equipments;
    QPushButton *Subjects;

    void setupUi(QWidget *HomeDisplay)
    {
        if (HomeDisplay->objectName().isEmpty())
            HomeDisplay->setObjectName(QStringLiteral("HomeDisplay"));
        HomeDisplay->resize(571, 338);
        HomeDisplay->setMinimumSize(QSize(571, 338));
        HomeDisplay->setMaximumSize(QSize(16777215, 16777215));
        label_2 = new QLabel(HomeDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 40, 301, 81));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        Borrowing = new QPushButton(HomeDisplay);
        Borrowing->setObjectName(QStringLiteral("Borrowing"));
        Borrowing->setGeometry(QRect(20, 140, 151, 121));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        Borrowing->setFont(font1);
        Equipments = new QPushButton(HomeDisplay);
        Equipments->setObjectName(QStringLiteral("Equipments"));
        Equipments->setGeometry(QRect(210, 140, 151, 121));
        Equipments->setFont(font1);
        Subjects = new QPushButton(HomeDisplay);
        Subjects->setObjectName(QStringLiteral("Subjects"));
        Subjects->setGeometry(QRect(400, 140, 151, 121));
        Subjects->setFont(font1);

        retranslateUi(HomeDisplay);

        QMetaObject::connectSlotsByName(HomeDisplay);
    } // setupUi

    void retranslateUi(QWidget *HomeDisplay)
    {
        HomeDisplay->setWindowTitle(QApplication::translate("HomeDisplay", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("HomeDisplay", "**LAB BORROWER**", Q_NULLPTR));
        Borrowing->setText(QApplication::translate("HomeDisplay", "BORROWING", Q_NULLPTR));
        Equipments->setText(QApplication::translate("HomeDisplay", "EQUIPMENTS", Q_NULLPTR));
        Subjects->setText(QApplication::translate("HomeDisplay", "SUBJECTS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeDisplay: public Ui_HomeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDISPLAY_H
