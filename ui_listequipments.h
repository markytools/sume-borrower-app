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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListEquipments
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *equipmentTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *EditButton;
    QPushButton *RemoveButton;
    QPushButton *RemoveAllButton;
    QPushButton *Back;

    void setupUi(QWidget *ListEquipments)
    {
        if (ListEquipments->objectName().isEmpty())
            ListEquipments->setObjectName(QStringLiteral("ListEquipments"));
        ListEquipments->resize(889, 476);
        ListEquipments->setMinimumSize(QSize(889, 476));
        gridLayout = new QGridLayout(ListEquipments);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ListEquipments);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        equipmentTable = new QTableWidget(ListEquipments);
        equipmentTable->setObjectName(QStringLiteral("equipmentTable"));

        gridLayout->addWidget(equipmentTable, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddButton = new QPushButton(ListEquipments);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);

        horizontalLayout->addWidget(AddButton);

        EditButton = new QPushButton(ListEquipments);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setFont(font1);

        horizontalLayout->addWidget(EditButton);

        RemoveButton = new QPushButton(ListEquipments);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setFont(font1);

        horizontalLayout->addWidget(RemoveButton);

        RemoveAllButton = new QPushButton(ListEquipments);
        RemoveAllButton->setObjectName(QStringLiteral("RemoveAllButton"));
        RemoveAllButton->setFont(font1);

        horizontalLayout->addWidget(RemoveAllButton);

        Back = new QPushButton(ListEquipments);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font1);

        horizontalLayout->addWidget(Back);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ListEquipments);

        QMetaObject::connectSlotsByName(ListEquipments);
    } // setupUi

    void retranslateUi(QWidget *ListEquipments)
    {
        ListEquipments->setWindowTitle(QApplication::translate("ListEquipments", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListEquipments", "**LIST OF EQUIPMENTS**", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListEquipments", "ADD", Q_NULLPTR));
        EditButton->setText(QApplication::translate("ListEquipments", "EDIT", Q_NULLPTR));
        RemoveButton->setText(QApplication::translate("ListEquipments", "REMOVE EQUIPMENT", Q_NULLPTR));
        RemoveAllButton->setText(QApplication::translate("ListEquipments", "REMOVE ALL", Q_NULLPTR));
        Back->setText(QApplication::translate("ListEquipments", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListEquipments: public Ui_ListEquipments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEQUIPMENTS_H
