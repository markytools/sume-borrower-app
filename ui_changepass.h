/********************************************************************************
** Form generated from reading UI file 'changepass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
    QLineEdit *user_input;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLineEdit *old_password;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLineEdit *new_password;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *back;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *submit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *changePass)
    {
        if (changePass->objectName().isEmpty())
            changePass->setObjectName(QStringLiteral("changePass"));
        changePass->resize(327, 371);
        changePass->setMinimumSize(QSize(327, 371));
        changePass->setMaximumSize(QSize(327, 371));
        changePass->setAutoFillBackground(false);
        gridLayout = new QGridLayout(changePass);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(changePass);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(50);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("#label_10{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(label_10);

        user_input = new QLineEdit(changePass);
        user_input->setObjectName(QStringLiteral("user_input"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(8);
        user_input->setFont(font1);
        user_input->setStyleSheet(QLatin1String("#user_input{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(user_input);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(changePass);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("#label_11{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(label_11);

        old_password = new QLineEdit(changePass);
        old_password->setObjectName(QStringLiteral("old_password"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(5);
        old_password->setFont(font2);
        old_password->setStyleSheet(QLatin1String("#old_password{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));
        old_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(old_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(changePass);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(true);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("#label_12{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(label_12);

        new_password = new QLineEdit(changePass);
        new_password->setObjectName(QStringLiteral("new_password"));
        new_password->setFont(font2);
        new_password->setStyleSheet(QLatin1String("#new_password{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));
        new_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(new_password);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 3, 0, 1, 4);

        label = new QLabel(changePass);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        back = new QPushButton(changePass);
        back->setObjectName(QStringLiteral("back"));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setWeight(50);
        back->setFont(font4);
        back->setStyleSheet(QLatin1String("#back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_5->addWidget(back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        submit = new QPushButton(changePass);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setFont(font4);
        submit->setStyleSheet(QLatin1String("#submit{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_5->addWidget(submit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        label_2 = new QLabel(changePass);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"background-color:transparent;\n"
"border-image:url(:/images/images/su_logo_extended.png);\n"
"background:none;\n"
"border:none;\n"
"}"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 4);


        retranslateUi(changePass);

        QMetaObject::connectSlotsByName(changePass);
    } // setupUi

    void retranslateUi(QWidget *changePass)
    {
        changePass->setWindowTitle(QApplication::translate("changePass", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("changePass", "Username:             ", Q_NULLPTR));
        label_11->setText(QApplication::translate("changePass", "Old Password:    ", Q_NULLPTR));
        label_12->setText(QApplication::translate("changePass", "New Password:  ", Q_NULLPTR));
        label->setText(QApplication::translate("changePass", "MECHANICAL ENGINEERING LABORATORY BORROWER", Q_NULLPTR));
        back->setText(QApplication::translate("changePass", "Back", Q_NULLPTR));
        submit->setText(QApplication::translate("changePass", "Submit", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class changePass: public Ui_changePass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASS_H
