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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListBorrowers
{
public:
    QGridLayout *gridLayout;
    QTableWidget *borrowersTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Info;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AddButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;

    void setupUi(QWidget *ListBorrowers)
    {
        if (ListBorrowers->objectName().isEmpty())
            ListBorrowers->setObjectName(QStringLiteral("ListBorrowers"));
        ListBorrowers->resize(1300, 600);
        ListBorrowers->setMinimumSize(QSize(1020, 600));
        gridLayout = new QGridLayout(ListBorrowers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        borrowersTable = new QTableWidget(ListBorrowers);
        borrowersTable->setObjectName(QStringLiteral("borrowersTable"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        borrowersTable->setFont(font);

        gridLayout->addWidget(borrowersTable, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Back = new QPushButton(ListBorrowers);
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

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Info = new QPushButton(ListBorrowers);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setFont(font1);
        Info->setStyleSheet(QLatin1String("#Info{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(Info);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        AddButton = new QPushButton(ListBorrowers);
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

        horizontalSpacer_4 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(ListBorrowers);
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

        horizontalLayout_3->addWidget(label);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        retranslateUi(ListBorrowers);

        QMetaObject::connectSlotsByName(ListBorrowers);
    } // setupUi

    void retranslateUi(QWidget *ListBorrowers)
    {
        ListBorrowers->setWindowTitle(QApplication::translate("ListBorrowers", "Form", Q_NULLPTR));
        Back->setText(QApplication::translate("ListBorrowers", "Back", Q_NULLPTR));
        Info->setText(QApplication::translate("ListBorrowers", "Info", Q_NULLPTR));
        AddButton->setText(QApplication::translate("ListBorrowers", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("ListBorrowers", "LIST OF BORROWERS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ListBorrowers: public Ui_ListBorrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTBORROWERS_H
