/********************************************************************************
** Form generated from reading UI file 'listequipments.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEQUIPMENTS_H
#define UI_LISTEQUIPMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListEquipments
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *AddButton_3;
    QPushButton *AddButton_6;
    QPushButton *AddButton_4;
    QPushButton *AddButton_5;
    QPushButton *AddButton_2;
    QPushButton *AddButton_7;

    void setupUi(QWidget *ListEquipments)
    {
        if (ListEquipments->objectName().isEmpty())
            ListEquipments->setObjectName(QStringLiteral("ListEquipments"));
        ListEquipments->resize(733, 490);
        label = new QLabel(ListEquipments);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 271, 30));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableWidget = new QTableWidget(ListEquipments);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(9, 45, 711, 391));
        AddButton_3 = new QPushButton(ListEquipments);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setGeometry(QRect(100, 450, 131, 25));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton_3->setFont(font1);
        AddButton_6 = new QPushButton(ListEquipments);
        AddButton_6->setObjectName(QStringLiteral("AddButton_6"));
        AddButton_6->setGeometry(QRect(470, 450, 101, 25));
        AddButton_6->setFont(font1);
        AddButton_4 = new QPushButton(ListEquipments);
        AddButton_4->setObjectName(QStringLiteral("AddButton_4"));
        AddButton_4->setGeometry(QRect(320, 450, 141, 25));
        AddButton_4->setFont(font1);
        AddButton_5 = new QPushButton(ListEquipments);
        AddButton_5->setObjectName(QStringLiteral("AddButton_5"));
        AddButton_5->setGeometry(QRect(20, 450, 71, 25));
        AddButton_5->setFont(font1);
        AddButton_2 = new QPushButton(ListEquipments);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setGeometry(QRect(580, 450, 61, 25));
        AddButton_2->setFont(font1);
        AddButton_7 = new QPushButton(ListEquipments);
        AddButton_7->setObjectName(QStringLiteral("AddButton_7"));
        AddButton_7->setGeometry(QRect(240, 450, 71, 25));
        AddButton_7->setFont(font1);

        retranslateUi(ListEquipments);

        QMetaObject::connectSlotsByName(ListEquipments);
    } // setupUi

    void retranslateUi(QWidget *ListEquipments)
    {
        ListEquipments->setWindowTitle(QApplication::translate("ListEquipments", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListEquipments", "**LIST OF EQUIPMENTS**", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("ListEquipments", "CLEAR FIELDS", Q_NULLPTR));
        AddButton_6->setText(QApplication::translate("ListEquipments", "REMOVE ALL", Q_NULLPTR));
        AddButton_4->setText(QApplication::translate("ListEquipments", "REMOVE SELECTION", Q_NULLPTR));
        AddButton_5->setText(QApplication::translate("ListEquipments", "ADD", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("ListEquipments", "BACK", Q_NULLPTR));
        AddButton_7->setText(QApplication::translate("ListEquipments", "EDIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListEquipments: public Ui_ListEquipments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEQUIPMENTS_H
