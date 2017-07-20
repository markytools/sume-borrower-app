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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Confirmations
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Confirmations)
    {
        if (Confirmations->objectName().isEmpty())
            Confirmations->setObjectName(QStringLiteral("Confirmations"));
        Confirmations->resize(400, 300);
        gridLayout = new QGridLayout(Confirmations);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Confirmations);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        listView = new QListView(Confirmations);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 2);

        pushButton_2 = new QPushButton(Confirmations);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton = new QPushButton(Confirmations);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        retranslateUi(Confirmations);

        QMetaObject::connectSlotsByName(Confirmations);
    } // setupUi

    void retranslateUi(QWidget *Confirmations)
    {
        Confirmations->setWindowTitle(QApplication::translate("Confirmations", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Confirmations", "                   EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Confirmations", "CANCEL", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Confirmations", "PROCEED", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Confirmations: public Ui_Confirmations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONS_H
