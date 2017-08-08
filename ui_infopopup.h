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
    QTableWidget *tableWidget;
    QLabel *label_3;
    QPushButton *Back;
    QTableWidget *tableWidget_2;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Infopopup)
    {
        if (Infopopup->objectName().isEmpty())
            Infopopup->setObjectName(QStringLiteral("Infopopup"));
        Infopopup->resize(738, 489);
        Infopopup->setMinimumSize(QSize(0, 0));
        Infopopup->setMaximumSize(QSize(16777215, 16777215));
        tableWidget = new QTableWidget(Infopopup);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 81, 391, 391));
        label_3 = new QLabel(Infopopup);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 20, 151, 17));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        Back = new QPushButton(Infopopup);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(530, 450, 111, 25));
        Back->setFont(font);
        tableWidget_2 = new QTableWidget(Infopopup);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(420, 80, 311, 271));
        label_7 = new QLabel(Infopopup);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 50, 101, 20));
        label_7->setFont(font);
        label_8 = new QLabel(Infopopup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(540, 50, 101, 20));
        label_8->setFont(font);
        layoutWidget = new QWidget(Infopopup);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(420, 360, 311, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout->addWidget(label_6);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Infopopup);

        QMetaObject::connectSlotsByName(Infopopup);
    } // setupUi

    void retranslateUi(QWidget *Infopopup)
    {
        Infopopup->setWindowTitle(QApplication::translate("Infopopup", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Infopopup", "INFORMATION", Q_NULLPTR));
        Back->setText(QApplication::translate("Infopopup", "BACK", Q_NULLPTR));
        label_7->setText(QApplication::translate("Infopopup", "EQUIPMENTS:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Infopopup", "MEMBERS:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Infopopup", "GROUPNAME:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Infopopup", "SUBJECT:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Infopopup", "SECTION:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Infopopup: public Ui_Infopopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPOPUP_H
