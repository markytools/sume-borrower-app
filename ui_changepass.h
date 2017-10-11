/********************************************************************************
** Form generated from reading UI file 'changepass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASS_H
#define UI_CHANGEPASS_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changePass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *lineEdit_3;
    QPushButton *Cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *changePass)
    {
        if (changePass->objectName().isEmpty())
            changePass->setObjectName(QStringLiteral("changePass"));
        changePass->resize(326, 337);
        changePass->setMinimumSize(QSize(326, 337));
        changePass->setMaximumSize(QSize(326, 337));
        gridLayout = new QGridLayout(changePass);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(changePass);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        horizontalLayout->addWidget(label_10);

        lineEdit = new QLineEdit(changePass);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(changePass);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        horizontalLayout_2->addWidget(label_11);

        lineEdit_2 = new QLineEdit(changePass);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(changePass);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);

        horizontalLayout_3->addWidget(label_12);

        lineEdit_3 = new QLineEdit(changePass);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 4);

        Cancel = new QPushButton(changePass);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Cancel->setFont(font1);

        gridLayout->addWidget(Cancel, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        pushButton = new QPushButton(changePass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        label = new QLabel(changePass);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 4);


        retranslateUi(changePass);

        QMetaObject::connectSlotsByName(changePass);
    } // setupUi

    void retranslateUi(QWidget *changePass)
    {
        changePass->setWindowTitle(QApplication::translate("changePass", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("changePass", "USERNAME:", Q_NULLPTR));
        label_11->setText(QApplication::translate("changePass", "OLD PASSWORD:", Q_NULLPTR));
        label_12->setText(QApplication::translate("changePass", "NEW PASSWORD:", Q_NULLPTR));
        Cancel->setText(QApplication::translate("changePass", "SUBMIT", Q_NULLPTR));
        pushButton->setText(QApplication::translate("changePass", "BACK", Q_NULLPTR));
        label->setText(QApplication::translate("changePass", "SILLIMAN UNIVERSITY MECHANICAL ENGINEERING LABORATORY BORROWER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changePass: public Ui_changePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASS_H
