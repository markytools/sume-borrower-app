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
#include <QtWidgets/QHBoxLayout>
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
    QTableWidget *borrowersTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *AddButton_2;
    QPushButton *Back_2;
    QPushButton *Back;

    void setupUi(QWidget *ListBorrowers)
    {
        if (ListBorrowers->objectName().isEmpty())
            ListBorrowers->setObjectName(QStringLiteral("ListBorrowers"));
        ListBorrowers->resize(707, 491);
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

        gridLayout->addWidget(label, 0, 0, 1, 1);

        borrowersTable = new QTableWidget(ListBorrowers);
        borrowersTable->setObjectName(QStringLiteral("borrowersTable"));

        gridLayout->addWidget(borrowersTable, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddButton = new QPushButton(ListBorrowers);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);

        horizontalLayout->addWidget(AddButton);

        AddButton_2 = new QPushButton(ListBorrowers);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setFont(font1);

        horizontalLayout->addWidget(AddButton_2);

        Back_2 = new QPushButton(ListBorrowers);
        Back_2->setObjectName(QStringLiteral("Back_2"));
        Back_2->setFont(font1);

        horizontalLayout->addWidget(Back_2);

        Back = new QPushButton(ListBorrowers);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font1);

        horizontalLayout->addWidget(Back);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(ListBorrowers);

        QMetaObject::connectSlotsByName(ListBorrowers);
    } // setupUi

    void retranslateUi(QWidget *ListBorrowers)
    {
        ListBorrowers->setWindowTitle(QApplication::translate("ListBorrowers", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ListBorrowers", "                                  LIST OF BORROWERS:", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListBorrowers", "ADD", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("ListBorrowers", "DELETE", Q_NULLPTR));
        Back_2->setText(QApplication::translate("ListBorrowers", "INFO", Q_NULLPTR));
        Back->setText(QApplication::translate("ListBorrowers", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListBorrowers: public Ui_ListBorrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTBORROWERS_H
