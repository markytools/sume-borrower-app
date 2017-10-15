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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Confirmations
{
public:
    QGridLayout *gridLayout;
    QTableWidget *borrowEquipment;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Proceed;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Confirmations)
    {
        if (Confirmations->objectName().isEmpty())
            Confirmations->setObjectName(QStringLiteral("Confirmations"));
        Confirmations->resize(600, 330);
        Confirmations->setMinimumSize(QSize(600, 300));
        Confirmations->setStyleSheet(QLatin1String("#Confirmations{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(Confirmations);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        borrowEquipment = new QTableWidget(Confirmations);
        borrowEquipment->setObjectName(QStringLiteral("borrowEquipment"));
        borrowEquipment->setEnabled(true);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        borrowEquipment->setFont(font);

        gridLayout->addWidget(borrowEquipment, 4, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Confirmations);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Cancel = new QPushButton(Confirmations);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        Cancel->setFont(font2);
        Cancel->setStyleSheet(QLatin1String("#Cancel{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_3->addWidget(Cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        Proceed = new QPushButton(Confirmations);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font2);
        Proceed->setStyleSheet(QLatin1String("#Proceed{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_3->addWidget(Proceed);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 2);


        retranslateUi(Confirmations);

        QMetaObject::connectSlotsByName(Confirmations);
    } // setupUi

    void retranslateUi(QWidget *Confirmations)
    {
        Confirmations->setWindowTitle(QApplication::translate("Confirmations", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Confirmations", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        Cancel->setText(QApplication::translate("Confirmations", "Cancel", Q_NULLPTR));
        Proceed->setText(QApplication::translate("Confirmations", "Proceed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Confirmations: public Ui_Confirmations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONS_H
