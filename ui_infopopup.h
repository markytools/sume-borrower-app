/********************************************************************************
** Form generated from reading UI file 'infopopup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOPOPUP_H
#define UI_INFOPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Infopopup
{
public:
    QTableWidget *tableWidget;
    QLabel *label_3;
    QPushButton *AddButton;

    void setupUi(QWidget *Infopopup)
    {
        if (Infopopup->objectName().isEmpty())
            Infopopup->setObjectName(QStringLiteral("Infopopup"));
        Infopopup->resize(578, 357);
        Infopopup->setMinimumSize(QSize(578, 357));
        Infopopup->setMaximumSize(QSize(578, 357));
        tableWidget = new QTableWidget(Infopopup);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(9, 32, 561, 281));
        label_3 = new QLabel(Infopopup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 9, 103, 17));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        AddButton = new QPushButton(Infopopup);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setGeometry(QRect(220, 323, 111, 25));
        AddButton->setFont(font);

        retranslateUi(Infopopup);

        QMetaObject::connectSlotsByName(Infopopup);
    } // setupUi

    void retranslateUi(QWidget *Infopopup)
    {
        Infopopup->setWindowTitle(QApplication::translate("Infopopup", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Infopopup", "INFORMATION:", Q_NULLPTR));
        AddButton->setText(QApplication::translate("Infopopup", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Infopopup: public Ui_Infopopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPOPUP_H
