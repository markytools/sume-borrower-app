/********************************************************************************
** Form generated from reading UI file 'conflictschedule.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFLICTSCHEDULE_H
#define UI_CONFLICTSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConflictSchedule
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer;
    QPushButton *EditButton;

    void setupUi(QWidget *ConflictSchedule)
    {
        if (ConflictSchedule->objectName().isEmpty())
            ConflictSchedule->setObjectName(QStringLiteral("ConflictSchedule"));
        ConflictSchedule->resize(394, 285);
        gridLayout = new QGridLayout(ConflictSchedule);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ConflictSchedule);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(ConflictSchedule);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        tableWidget = new QTableWidget(ConflictSchedule);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        EditButton = new QPushButton(ConflictSchedule);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setFont(font1);

        gridLayout->addWidget(EditButton, 3, 1, 1, 1);


        retranslateUi(ConflictSchedule);

        QMetaObject::connectSlotsByName(ConflictSchedule);
    } // setupUi

    void retranslateUi(QWidget *ConflictSchedule)
    {
        ConflictSchedule->setWindowTitle(QApplication::translate("ConflictSchedule", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("ConflictSchedule", "             CONFLICT SCHEDULE:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConflictSchedule", "EQUIPMENTS IN TIME CONFLICT:", Q_NULLPTR));
        EditButton->setText(QApplication::translate("ConflictSchedule", "EDIT SCHEDULE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConflictSchedule: public Ui_ConflictSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFLICTSCHEDULE_H
