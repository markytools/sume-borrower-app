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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListEquipments
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTableWidget *equipmentTable;
    QGridLayout *gridLayout;
    QPushButton *AddButton;
    QPushButton *RemoveButton;
    QPushButton *EditButton;
    QPushButton *AddButton_2;
    QPushButton *RemoveAllButton;

    void setupUi(QWidget *ListEquipments)
    {
        if (ListEquipments->objectName().isEmpty())
            ListEquipments->setObjectName(QStringLiteral("ListEquipments"));
        ListEquipments->resize(733, 490);
        gridLayout_2 = new QGridLayout(ListEquipments);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(ListEquipments);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        equipmentTable = new QTableWidget(ListEquipments);
        equipmentTable->setObjectName(QStringLiteral("equipmentTable"));

        gridLayout_2->addWidget(equipmentTable, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        AddButton = new QPushButton(ListEquipments);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);

        gridLayout->addWidget(AddButton, 0, 0, 1, 1);

        RemoveButton = new QPushButton(ListEquipments);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setFont(font1);

        gridLayout->addWidget(RemoveButton, 0, 2, 1, 1);

        EditButton = new QPushButton(ListEquipments);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setFont(font1);

        gridLayout->addWidget(EditButton, 0, 1, 1, 1);

        AddButton_2 = new QPushButton(ListEquipments);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setFont(font1);

        gridLayout->addWidget(AddButton_2, 0, 5, 1, 1);

        RemoveAllButton = new QPushButton(ListEquipments);
        RemoveAllButton->setObjectName(QStringLiteral("RemoveAllButton"));
        RemoveAllButton->setFont(font1);

        gridLayout->addWidget(RemoveAllButton, 0, 4, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);


        retranslateUi(ListEquipments);

        QMetaObject::connectSlotsByName(ListEquipments);
    } // setupUi

    void retranslateUi(QWidget *ListEquipments)
    {
        ListEquipments->setWindowTitle(QApplication::translate("ListEquipments", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListEquipments", "**LIST OF EQUIPMENTS**", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListEquipments", "ADD", Q_NULLPTR));
        RemoveButton->setText(QApplication::translate("ListEquipments", "REMOVE SELECTION", Q_NULLPTR));
        EditButton->setText(QApplication::translate("ListEquipments", "EDIT", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("ListEquipments", "BACK", Q_NULLPTR));
        RemoveAllButton->setText(QApplication::translate("ListEquipments", "REMOVE ALL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListEquipments: public Ui_ListEquipments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEQUIPMENTS_H
