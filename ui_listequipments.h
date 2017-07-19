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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListEquipments
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *AddButton_5;
    QPushButton *AddButton_4;
    QPushButton *AddButton_3;
    QPushButton *AddButton_2;

    void setupUi(QWidget *ListEquipments)
    {
        if (ListEquipments->objectName().isEmpty())
            ListEquipments->setObjectName(QStringLiteral("ListEquipments"));
        ListEquipments->resize(469, 361);
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

        gridLayout->addWidget(label, 0, 0, 1, 2);

        tableWidget = new QTableWidget(ListEquipments);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(ListEquipments);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(ListEquipments);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(ListEquipments);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        lineEdit_5 = new QLineEdit(ListEquipments);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_2->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(ListEquipments);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout_3->addWidget(label_9);

        lineEdit_7 = new QLineEdit(ListEquipments);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_3->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(ListEquipments);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_4->addWidget(label_8);

        lineEdit_4 = new QLineEdit(ListEquipments);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(ListEquipments);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        lineEdit_3 = new QLineEdit(ListEquipments);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(ListEquipments);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_2 = new QLineEdit(ListEquipments);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(ListEquipments);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);

        lineEdit_6 = new QLineEdit(ListEquipments);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_7->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AddButton_5 = new QPushButton(ListEquipments);
        AddButton_5->setObjectName(QStringLiteral("AddButton_5"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Black"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        AddButton_5->setFont(font2);

        verticalLayout_2->addWidget(AddButton_5);

        AddButton_4 = new QPushButton(ListEquipments);
        AddButton_4->setObjectName(QStringLiteral("AddButton_4"));
        AddButton_4->setFont(font2);

        verticalLayout_2->addWidget(AddButton_4);

        AddButton_3 = new QPushButton(ListEquipments);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setFont(font2);

        verticalLayout_2->addWidget(AddButton_3);

        AddButton_2 = new QPushButton(ListEquipments);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setFont(font2);

        verticalLayout_2->addWidget(AddButton_2);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);


        retranslateUi(ListEquipments);

        QMetaObject::connectSlotsByName(ListEquipments);
    } // setupUi

    void retranslateUi(QWidget *ListEquipments)
    {
        ListEquipments->setWindowTitle(QApplication::translate("ListEquipments", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListEquipments", "                 LIST OF EQUIPMENTS", Q_NULLPTR));
        label_4->setText(QApplication::translate("ListEquipments", "Quantity", Q_NULLPTR));
        label_10->setText(QApplication::translate("ListEquipments", "NAME", Q_NULLPTR));
        label_9->setText(QApplication::translate("ListEquipments", "SERIAL", Q_NULLPTR));
        label_8->setText(QApplication::translate("ListEquipments", "EQUIP_PROP", Q_NULLPTR));
        label_7->setText(QApplication::translate("ListEquipments", "OP_STATUS", Q_NULLPTR));
        label_6->setText(QApplication::translate("ListEquipments", "LOCATION", Q_NULLPTR));
        label_5->setText(QApplication::translate("ListEquipments", "REMARKS", Q_NULLPTR));
        AddButton_5->setText(QApplication::translate("ListEquipments", "Add", Q_NULLPTR));
        AddButton_4->setText(QApplication::translate("ListEquipments", "DELETE", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("ListEquipments", "EDIT", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("ListEquipments", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListEquipments: public Ui_ListEquipments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEQUIPMENTS_H
