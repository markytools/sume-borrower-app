/********************************************************************************
** Form generated from reading UI file 'equipmentl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIPMENTL_H
#define UI_EQUIPMENTL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EquipmentL
{
public:
    QPushButton *AddButton_4;
    QTableWidget *tableWidget_2;
    QPushButton *AddButton_5;
    QPushButton *AddButton_2;
    QPushButton *AddButton_6;
    QLineEdit *lineEdit_2;
    QPushButton *AddButton_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *AddButton_7;

    void setupUi(QWidget *EquipmentL)
    {
        if (EquipmentL->objectName().isEmpty())
            EquipmentL->setObjectName(QStringLiteral("EquipmentL"));
        EquipmentL->resize(690, 334);
        AddButton_4 = new QPushButton(EquipmentL);
        AddButton_4->setObjectName(QStringLiteral("AddButton_4"));
        AddButton_4->setGeometry(QRect(430, 290, 75, 25));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        AddButton_4->setFont(font);
        tableWidget_2 = new QTableWidget(EquipmentL);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(420, 50, 256, 192));
        AddButton_5 = new QPushButton(EquipmentL);
        AddButton_5->setObjectName(QStringLiteral("AddButton_5"));
        AddButton_5->setGeometry(QRect(350, 290, 75, 25));
        AddButton_5->setFont(font);
        AddButton_2 = new QPushButton(EquipmentL);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setGeometry(QRect(590, 290, 75, 25));
        AddButton_2->setFont(font);
        AddButton_6 = new QPushButton(EquipmentL);
        AddButton_6->setObjectName(QStringLiteral("AddButton_6"));
        AddButton_6->setGeometry(QRect(300, 140, 75, 25));
        AddButton_6->setFont(font);
        lineEdit_2 = new QLineEdit(EquipmentL);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(490, 250, 113, 20));
        AddButton_3 = new QPushButton(EquipmentL);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setGeometry(QRect(510, 290, 75, 25));
        AddButton_3->setFont(font);
        lineEdit = new QLineEdit(EquipmentL);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 250, 113, 20));
        label = new QLabel(EquipmentL);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 151, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        tableWidget = new QTableWidget(EquipmentL);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 50, 256, 192));
        AddButton_7 = new QPushButton(EquipmentL);
        AddButton_7->setObjectName(QStringLiteral("AddButton_7"));
        AddButton_7->setGeometry(QRect(300, 80, 75, 25));
        AddButton_7->setFont(font);

        retranslateUi(EquipmentL);

        QMetaObject::connectSlotsByName(EquipmentL);
    } // setupUi

    void retranslateUi(QWidget *EquipmentL)
    {
        EquipmentL->setWindowTitle(QApplication::translate("EquipmentL", "Form", Q_NULLPTR));
        AddButton_4->setText(QApplication::translate("EquipmentL", "DELETE", Q_NULLPTR));
        AddButton_5->setText(QApplication::translate("EquipmentL", "Add", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("EquipmentL", "BACK", Q_NULLPTR));
        AddButton_6->setText(QApplication::translate("EquipmentL", ">>", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("EquipmentL", "EDIT", Q_NULLPTR));
        label->setText(QApplication::translate("EquipmentL", "EQUIPMENTS:", Q_NULLPTR));
        AddButton_7->setText(QApplication::translate("EquipmentL", "<<", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EquipmentL: public Ui_EquipmentL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIPMENTL_H
