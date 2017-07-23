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
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *AddButton;
    QPushButton *BorrowBotton;
    QTableWidget *tableWidget;
    QPushButton *AddButton_2;
    QPushButton *AddButton_3;
    QTableWidget *tableWidget_2;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QLabel *label_4;

    void setupUi(QWidget *Borrowers)
    {
        if (Borrowers->objectName().isEmpty())
            Borrowers->setObjectName(QStringLiteral("Borrowers"));
        Borrowers->resize(748, 453);
        Borrowers->setMinimumSize(QSize(748, 453));
        Borrowers->setMaximumSize(QSize(748, 453));
        AddButton = new QPushButton(Borrowers);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(530, 310, 75, 25));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        AddButton->setFont(font);
        BorrowBotton = new QPushButton(Borrowers);
        BorrowBotton->setObjectName(QStringLiteral("BorrowBotton"));
        BorrowBotton->setGeometry(QRect(620, 310, 75, 25));
        BorrowBotton->setFont(font);
        tableWidget = new QTableWidget(Borrowers);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 471, 191));
        AddButton_2 = new QPushButton(Borrowers);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setGeometry(QRect(490, 160, 75, 25));
        AddButton_2->setFont(font);
        AddButton_3 = new QPushButton(Borrowers);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setGeometry(QRect(490, 200, 75, 25));
        AddButton_3->setFont(font);
        tableWidget_2 = new QTableWidget(Borrowers);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(580, 100, 151, 192));
        label_2 = new QLabel(Borrowers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 71, 143, 17));
        label_2->setFont(font);
        label_3 = new QLabel(Borrowers);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 71, 211, 17));
        label_3->setFont(font);
        layoutWidget = new QWidget(Borrowers);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 20, 407, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(66, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(72, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(Borrowers);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 310, 113, 20));
        label_4 = new QLabel(Borrowers);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 310, 61, 17));
        label_4->setFont(font);

        retranslateUi(Borrowers);

        QMetaObject::connectSlotsByName(Borrowers);
    } // setupUi

    void retranslateUi(QWidget *Borrowers)
    {
        Borrowers->setWindowTitle(QApplication::translate("Borrowers", "Form", Q_NULLPTR));
        AddButton->setText(QApplication::translate("Borrowers", "BACK", Q_NULLPTR));
        BorrowBotton->setText(QApplication::translate("Borrowers", "PROCEED", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("Borrowers", ">>", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("Borrowers", "<<", Q_NULLPTR));
        label_2->setText(QApplication::translate("Borrowers", "LIST OF EQUIPMENTS:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Borrowers", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        label->setText(QApplication::translate("Borrowers", "BORROW EQUIPMENT", Q_NULLPTR));
        label_4->setText(QApplication::translate("Borrowers", "SEARCH:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Borrowers: public Ui_Borrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H
