/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

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

class Ui_Information
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *information;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *nameLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *serialLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *propertyLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *locationLine;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *statusLine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *remarksLine;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *quantityLine;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *BackButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *OKButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QStringLiteral("Information"));
        Information->resize(520, 357);
        Information->setMinimumSize(QSize(500, 300));
        Information->setMaximumSize(QSize(16777215, 16777215));
        Information->setStyleSheet(QLatin1String("#Infiormation{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(Information);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        information = new QLabel(Information);
        information->setObjectName(QStringLiteral("information"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        information->setFont(font);
        information->setStyleSheet(QLatin1String("#information{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        information->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(information);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(Information);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_10->setFont(font1);
        label_10->setStyleSheet(QLatin1String("#label_10{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(label_10);

        nameLine = new QLineEdit(Information);
        nameLine->setObjectName(QStringLiteral("nameLine"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(8);
        nameLine->setFont(font2);
        nameLine->setStyleSheet(QLatin1String("#nameLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_2->addWidget(nameLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(Information);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("#label_9{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(label_9);

        serialLine = new QLineEdit(Information);
        serialLine->setObjectName(QStringLiteral("serialLine"));
        serialLine->setFont(font2);
        serialLine->setStyleSheet(QLatin1String("#serialLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_3->addWidget(serialLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(Information);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("#label_8{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_4->addWidget(label_8);

        propertyLine = new QLineEdit(Information);
        propertyLine->setObjectName(QStringLiteral("propertyLine"));
        propertyLine->setFont(font2);
        propertyLine->setStyleSheet(QLatin1String("#propertyLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_4->addWidget(propertyLine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(Information);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("#label_6{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_6->addWidget(label_6);

        locationLine = new QLineEdit(Information);
        locationLine->setObjectName(QStringLiteral("locationLine"));
        locationLine->setFont(font2);
        locationLine->setStyleSheet(QLatin1String("#locationLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_6->addWidget(locationLine);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(Information);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("#label_7{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_5->addWidget(label_7);

        statusLine = new QLineEdit(Information);
        statusLine->setObjectName(QStringLiteral("statusLine"));
        statusLine->setFont(font2);
        statusLine->setStyleSheet(QLatin1String("#statusLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_5->addWidget(statusLine);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(Information);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("#label_5{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_7->addWidget(label_5);

        remarksLine = new QLineEdit(Information);
        remarksLine->setObjectName(QStringLiteral("remarksLine"));
        remarksLine->setFont(font2);
        remarksLine->setStyleSheet(QLatin1String("#remarksLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_7->addWidget(remarksLine);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(Information);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(label_4);

        quantityLine = new QLineEdit(Information);
        quantityLine->setObjectName(QStringLiteral("quantityLine"));
        quantityLine->setFont(font2);
        quantityLine->setStyleSheet(QLatin1String("#quantityLine{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(quantityLine);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        BackButton = new QPushButton(Information);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setFont(font1);
        BackButton->setStyleSheet(QLatin1String("#BackButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_8->addWidget(BackButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        OKButton = new QPushButton(Information);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setFont(font1);
        OKButton->setStyleSheet(QLatin1String("#OKButton{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_8->addWidget(OKButton);

        horizontalSpacer_3 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", Q_NULLPTR));
        information->setText(QApplication::translate("Information", "EQUIPMENT INFORMATION", Q_NULLPTR));
        label_10->setText(QApplication::translate("Information", "Name:                ", Q_NULLPTR));
        label_9->setText(QApplication::translate("Information", "Serial:                ", Q_NULLPTR));
        label_8->setText(QApplication::translate("Information", "Equip_Prop:    ", Q_NULLPTR));
        label_6->setText(QApplication::translate("Information", "Location:          ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Information", "Op_Status:       ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Information", "Remarks:          ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Information", "Quantity:          ", Q_NULLPTR));
        BackButton->setText(QApplication::translate("Information", "Back", Q_NULLPTR));
        OKButton->setText(QApplication::translate("Information", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
