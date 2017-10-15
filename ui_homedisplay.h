/********************************************************************************
** Form generated from reading UI file 'homedisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEDISPLAY_H
#define UI_HOMEDISPLAY_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeDisplay
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Equipments;
    QPushButton *Subjects;
    QPushButton *Borrowing;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *HomeDisplay)
    {
        if (HomeDisplay->objectName().isEmpty())
            HomeDisplay->setObjectName(QStringLiteral("HomeDisplay"));
        HomeDisplay->resize(800, 800);
        HomeDisplay->setMinimumSize(QSize(750, 600));
        HomeDisplay->setMaximumSize(QSize(16777215, 16777215));
        HomeDisplay->setStyleSheet(QLatin1String("#HomeDisplay{\n"
"border-color: white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout_2 = new QGridLayout(HomeDisplay);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        Equipments = new QPushButton(HomeDisplay);
        Equipments->setObjectName(QStringLiteral("Equipments"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Equipments->sizePolicy().hasHeightForWidth());
        Equipments->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        Equipments->setFont(font);
        Equipments->setStyleSheet(QLatin1String("#Equipments{\n"
"border-image:url(:/images/images/equips.png);\n"
"background:none;\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(Equipments, 0, 3, 1, 1);

        Subjects = new QPushButton(HomeDisplay);
        Subjects->setObjectName(QStringLiteral("Subjects"));
        sizePolicy.setHeightForWidth(Subjects->sizePolicy().hasHeightForWidth());
        Subjects->setSizePolicy(sizePolicy);
        Subjects->setFont(font);
        Subjects->setStyleSheet(QLatin1String("#Subjects{\n"
"border-image:url(:/images/images/subs.png);\n"
"background:none;\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(Subjects, 0, 5, 1, 1);

        Borrowing = new QPushButton(HomeDisplay);
        Borrowing->setObjectName(QStringLiteral("Borrowing"));
        sizePolicy.setHeightForWidth(Borrowing->sizePolicy().hasHeightForWidth());
        Borrowing->setSizePolicy(sizePolicy);
        Borrowing->setFont(font);
        Borrowing->setStyleSheet(QLatin1String("#Borrowing{\n"
"border-image:url(:/images/images/borrow.png);\n"
"background:none;\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(Borrowing, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 6, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(HomeDisplay);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"border-image:url(:/images/images/su_logo_extended.png);\n"
"background:none;\n"
"border:none;\n"
"}"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(HomeDisplay);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);


        retranslateUi(HomeDisplay);

        QMetaObject::connectSlotsByName(HomeDisplay);
    } // setupUi

    void retranslateUi(QWidget *HomeDisplay)
    {
        HomeDisplay->setWindowTitle(QApplication::translate("HomeDisplay", "Form", Q_NULLPTR));
        Equipments->setText(QString());
        Subjects->setText(QString());
        Borrowing->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("HomeDisplay", "MECHANICAL ENGINEERING LABORATORY BORROWER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeDisplay: public Ui_HomeDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEDISPLAY_H
