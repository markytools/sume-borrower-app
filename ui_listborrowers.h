/********************************************************************************
** Form generated from reading UI file 'listborrowers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTBORROWERS_H
#define UI_LISTBORROWERS_H

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

class Ui_ListBorrowers
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *AddButton;
    QPushButton *AddButton_2;
    QPushButton *AddButton_3;

    void setupUi(QWidget *ListBorrowers)
    {
        if (ListBorrowers->objectName().isEmpty())
            ListBorrowers->setObjectName(QStringLiteral("ListBorrowers"));
        ListBorrowers->resize(528, 367);
        gridLayout = new QGridLayout(ListBorrowers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ListBorrowers);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        tableWidget = new QTableWidget(ListBorrowers);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);

        AddButton = new QPushButton(ListBorrowers);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);

        gridLayout->addWidget(AddButton, 2, 0, 1, 1);

        AddButton_2 = new QPushButton(ListBorrowers);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setFont(font1);

        gridLayout->addWidget(AddButton_2, 2, 1, 1, 1);

        AddButton_3 = new QPushButton(ListBorrowers);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setFont(font1);

        gridLayout->addWidget(AddButton_3, 2, 2, 1, 1);


        retranslateUi(ListBorrowers);

        QMetaObject::connectSlotsByName(ListBorrowers);
    } // setupUi

    void retranslateUi(QWidget *ListBorrowers)
    {
        ListBorrowers->setWindowTitle(QApplication::translate("ListBorrowers", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListBorrowers", "                        LIST OF BORROWERS:", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListBorrowers", "ADD", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("ListBorrowers", "DELETE", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("ListBorrowers", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListBorrowers: public Ui_ListBorrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTBORROWERS_H
