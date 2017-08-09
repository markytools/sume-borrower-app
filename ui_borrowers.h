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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Borrowers
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *rightToLeft;
    QPushButton *leftToRight;
    QLabel *label_2;
    QTableWidget *listEquipments;
    QLabel *label_4;
    QPushButton *Back;
    QPushButton *Proceed;
    QLineEdit *lineEdit;
    QTableWidget *borrowEquipments;

    void setupUi(QWidget *Borrowers)
    {
        if (Borrowers->objectName().isEmpty())
            Borrowers->setObjectName(QStringLiteral("Borrowers"));
        Borrowers->resize(988, 436);
        gridLayout_2 = new QGridLayout(Borrowers);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(Borrowers);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Borrowers);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        rightToLeft = new QPushButton(Borrowers);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        rightToLeft->setFont(font1);

        gridLayout->addWidget(rightToLeft, 4, 2, 1, 1);

        leftToRight = new QPushButton(Borrowers);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font1);

        gridLayout->addWidget(leftToRight, 3, 2, 1, 1);

        label_2 = new QLabel(Borrowers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        listEquipments = new QTableWidget(Borrowers);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));

        gridLayout->addWidget(listEquipments, 1, 0, 7, 1);

        label_4 = new QLabel(Borrowers);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);

        Back = new QPushButton(Borrowers);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font1);

        gridLayout->addWidget(Back, 8, 2, 1, 2);

        Proceed = new QPushButton(Borrowers);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font1);

        gridLayout->addWidget(Proceed, 8, 4, 1, 2);

        lineEdit = new QLineEdit(Borrowers);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 8, 1, 1, 1);

        borrowEquipments = new QTableWidget(Borrowers);
        borrowEquipments->setObjectName(QStringLiteral("borrowEquipments"));

        gridLayout->addWidget(borrowEquipments, 1, 1, 7, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);


        retranslateUi(Borrowers);

        QMetaObject::connectSlotsByName(Borrowers);
    } // setupUi

    void retranslateUi(QWidget *Borrowers)
    {
        Borrowers->setWindowTitle(QApplication::translate("Borrowers", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Borrowers", "BORROW EQUIPMENT", Q_NULLPTR));
        label_3->setText(QApplication::translate("Borrowers", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Borrowers", "<<", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Borrowers", ">>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Borrowers", "LIST OF EQUIPMENTS", Q_NULLPTR));
        label_4->setText(QApplication::translate("Borrowers", "SEARCH:", Q_NULLPTR));
        Back->setText(QApplication::translate("Borrowers", "BACK", Q_NULLPTR));
        Proceed->setText(QApplication::translate("Borrowers", "PROCEED", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Borrowers: public Ui_Borrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H
