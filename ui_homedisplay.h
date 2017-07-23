/********************************************************************************
** Form generated from reading UI file 'homedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
    QPushButton *AddButton;
    QPushButton *AddButton_2;

    void setupUi(QWidget *HomeDisplay)
    {
        if (HomeDisplay->objectName().isEmpty())
            HomeDisplay->setObjectName(QStringLiteral("HomeDisplay"));
        HomeDisplay->resize(400, 300);
        HomeDisplay->setMinimumSize(QSize(400, 300));
        label_2 = new QLabel(HomeDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 30, 301, 81));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        AddButton = new QPushButton(HomeDisplay);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(20, 140, 151, 121));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);
        AddButton_2 = new QPushButton(HomeDisplay);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setGeometry(QRect(210, 140, 151, 121));
        AddButton_2->setFont(font1);

        retranslateUi(HomeDisplay);

        QMetaObject::connectSlotsByName(HomeDisplay);
    } // setupUi

    void retranslateUi(QWidget *HomeDisplay)
    {
        HomeDisplay->setWindowTitle(QApplication::translate("HomeDisplay", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("HomeDisplay", "**LAB BORROWER**", Q_NULLPTR));
        AddButton->setText(QApplication::translate("HomeDisplay", "BORROWING", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("HomeDisplay", "EQUIPMENTS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeDisplay: public Ui_HomeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDISPLAY_H
