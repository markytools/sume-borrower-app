/********************************************************************************
** Form generated from reading UI file 'confirmations.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATIONS_H
#define UI_CONFIRMATIONS_H

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

class Ui_Confirmations
{
public:
    QGridLayout *gridLayout;
    QTableWidget *borrowEquipment;
    QPushButton *Cancel;
    QPushButton *Proceed;
    QLabel *label;

    void setupUi(QWidget *Confirmations)
    {
        if (Confirmations->objectName().isEmpty())
            Confirmations->setObjectName(QStringLiteral("Confirmations"));
        Confirmations->resize(405, 285);
        gridLayout = new QGridLayout(Confirmations);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        borrowEquipment = new QTableWidget(Confirmations);
        borrowEquipment->setObjectName(QStringLiteral("borrowEquipment"));
        borrowEquipment->setEnabled(true);

        gridLayout->addWidget(borrowEquipment, 2, 0, 1, 2);

        Cancel = new QPushButton(Confirmations);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Cancel->setFont(font);

        gridLayout->addWidget(Cancel, 4, 0, 1, 1);

        Proceed = new QPushButton(Confirmations);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font);

        gridLayout->addWidget(Proceed, 4, 1, 1, 1);

        label = new QLabel(Confirmations);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(Confirmations);

        QMetaObject::connectSlotsByName(Confirmations);
    } // setupUi

    void retranslateUi(QWidget *Confirmations)
    {
        Confirmations->setWindowTitle(QApplication::translate("Confirmations", "Form", Q_NULLPTR));
        Cancel->setText(QApplication::translate("Confirmations", "CANCEL", Q_NULLPTR));
        Proceed->setText(QApplication::translate("Confirmations", "PROCEED", Q_NULLPTR));
        label->setText(QApplication::translate("Confirmations", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Confirmations: public Ui_Confirmations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONS_H
