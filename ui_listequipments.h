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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListEquipments
{
public:
    QGridLayout *gridLayout;
    QTableWidget *equipmentTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *RemoveButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *RemoveAllButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *EditButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AddButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QWidget *ListEquipments)
    {
        if (ListEquipments->objectName().isEmpty())
            ListEquipments->setObjectName(QStringLiteral("ListEquipments"));
        ListEquipments->resize(1080, 600);
        ListEquipments->setMinimumSize(QSize(1080, 600));
        ListEquipments->setStyleSheet(QLatin1String("#ListEquipments{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(ListEquipments);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        equipmentTable = new QTableWidget(ListEquipments);
        equipmentTable->setObjectName(QStringLiteral("equipmentTable"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        equipmentTable->setFont(font);

        gridLayout->addWidget(equipmentTable, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Back = new QPushButton(ListEquipments);
        Back->setObjectName(QStringLiteral("Back"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        Back->setFont(font1);
        Back->setStyleSheet(QLatin1String("#Back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(Back);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        RemoveButton = new QPushButton(ListEquipments);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));
        RemoveButton->setFont(font1);
        RemoveButton->setStyleSheet(QLatin1String("#RemoveButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(RemoveButton);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        RemoveAllButton = new QPushButton(ListEquipments);
        RemoveAllButton->setObjectName(QStringLiteral("RemoveAllButton"));
        RemoveAllButton->setFont(font1);
        RemoveAllButton->setStyleSheet(QLatin1String("#RemoveAllButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(RemoveAllButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        EditButton = new QPushButton(ListEquipments);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setFont(font1);
        EditButton->setStyleSheet(QLatin1String("#EditButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(EditButton);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        AddButton = new QPushButton(ListEquipments);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setFont(font1);
        AddButton->setStyleSheet(QLatin1String("#AddButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(AddButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ListEquipments);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(ListEquipments);

        QMetaObject::connectSlotsByName(ListEquipments);
    } // setupUi

    void retranslateUi(QWidget *ListEquipments)
    {
        ListEquipments->setWindowTitle(QApplication::translate("ListEquipments", "Form", Q_NULLPTR));
        Back->setText(QApplication::translate("ListEquipments", "Back", Q_NULLPTR));
        RemoveButton->setText(QApplication::translate("ListEquipments", "Remove Equipment", Q_NULLPTR));
        RemoveAllButton->setText(QApplication::translate("ListEquipments", "Remove All", Q_NULLPTR));
        EditButton->setText(QApplication::translate("ListEquipments", "Edit", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListEquipments", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("ListEquipments", "LIST OF EQUIPMENTS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListEquipments: public Ui_ListEquipments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEQUIPMENTS_H
