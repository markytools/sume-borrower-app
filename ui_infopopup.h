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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Infopopup
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *groupName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *subject;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *section;
    QPushButton *Back;

    void setupUi(QWidget *Infopopup)
    {
        if (Infopopup->objectName().isEmpty())
            Infopopup->setObjectName(QStringLiteral("Infopopup"));
        Infopopup->resize(669, 460);
        Infopopup->setMinimumSize(QSize(0, 0));
        Infopopup->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(Infopopup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(Infopopup);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_7 = new QLabel(Infopopup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(Infopopup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 1, 2, 1, 1);

        tableWidget = new QTableWidget(Infopopup);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 2);

        tableWidget_2 = new QTableWidget(Infopopup);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout->addWidget(tableWidget_2, 2, 2, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(Infopopup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        groupName = new QLineEdit(Infopopup);
        groupName->setObjectName(QStringLiteral("groupName"));

        horizontalLayout->addWidget(groupName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(Infopopup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        subject = new QLineEdit(Infopopup);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout_2->addWidget(subject);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Infopopup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        section = new QLineEdit(Infopopup);
        section->setObjectName(QStringLiteral("section"));

        horizontalLayout_3->addWidget(section);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 3, 2, 1, 2);

        Back = new QPushButton(Infopopup);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);

        gridLayout->addWidget(Back, 4, 3, 1, 1);


        retranslateUi(Infopopup);

        QMetaObject::connectSlotsByName(Infopopup);
    } // setupUi

    void retranslateUi(QWidget *Infopopup)
    {
        Infopopup->setWindowTitle(QApplication::translate("Infopopup", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Infopopup", "INFORMATION", Q_NULLPTR));
        label_7->setText(QApplication::translate("Infopopup", "EQUIPMENTS:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Infopopup", "MEMBERS:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Infopopup", "GROUPNAME:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Infopopup", "SUBJECT:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Infopopup", "SECTION:", Q_NULLPTR));
        Back->setText(QApplication::translate("Infopopup", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Infopopup: public Ui_Infopopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPOPUP_H
