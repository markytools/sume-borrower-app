/********************************************************************************
** Form generated from reading UI file 'borrowers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERS_H
#define UI_BORROWERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Borrowers
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *SearchItem;
    QLineEdit *Quantity;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QPushButton *BorrowBotton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Borrowers)
    {
        if (Borrowers->objectName().isEmpty())
            Borrowers->setObjectName(QStringLiteral("Borrowers"));
        Borrowers->resize(429, 309);
        gridLayout = new QGridLayout(Borrowers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(66, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label = new QLabel(Borrowers);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(72, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        SearchItem = new QComboBox(Borrowers);
        SearchItem->setObjectName(QStringLiteral("SearchItem"));

        gridLayout->addWidget(SearchItem, 1, 0, 1, 1);

        Quantity = new QLineEdit(Borrowers);
        Quantity->setObjectName(QStringLiteral("Quantity"));
        Quantity->setMaxLength(2);

        gridLayout->addWidget(Quantity, 1, 1, 1, 1);

        AddButton = new QPushButton(Borrowers);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton->setFont(font1);

        gridLayout->addWidget(AddButton, 1, 2, 1, 1);

        DeleteButton = new QPushButton(Borrowers);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setFont(font1);

        gridLayout->addWidget(DeleteButton, 1, 3, 1, 1);

        BorrowBotton = new QPushButton(Borrowers);
        BorrowBotton->setObjectName(QStringLiteral("BorrowBotton"));
        BorrowBotton->setFont(font1);

        gridLayout->addWidget(BorrowBotton, 1, 4, 1, 1);

        tableWidget = new QTableWidget(Borrowers);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 5);


        retranslateUi(Borrowers);

        QMetaObject::connectSlotsByName(Borrowers);
    } // setupUi

    void retranslateUi(QWidget *Borrowers)
    {
        Borrowers->setWindowTitle(QApplication::translate("Borrowers", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Borrowers", "    BORROW EQUIPMENT", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SearchItem->setToolTip(QApplication::translate("Borrowers", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        AddButton->setText(QApplication::translate("Borrowers", "Add", Q_NULLPTR));
        DeleteButton->setText(QApplication::translate("Borrowers", "Delete", Q_NULLPTR));
        BorrowBotton->setText(QApplication::translate("Borrowers", "Borrow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Borrowers: public Ui_Borrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H
