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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QWidget *layoutWidget;
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
    QPushButton *BackButton;
    QPushButton *OKButton;
    QLabel *label_3;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QStringLiteral("Information"));
        Information->resize(400, 300);
        Information->setMinimumSize(QSize(400, 300));
        Information->setMaximumSize(QSize(400, 300));
        layoutWidget = new QWidget(Information);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 381, 214));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_10->setFont(font);

        horizontalLayout_2->addWidget(label_10);

        nameLine = new QLineEdit(layoutWidget);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        horizontalLayout_2->addWidget(nameLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        horizontalLayout_3->addWidget(label_9);

        serialLine = new QLineEdit(layoutWidget);
        serialLine->setObjectName(QStringLiteral("serialLine"));

        horizontalLayout_3->addWidget(serialLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        propertyLine = new QLineEdit(layoutWidget);
        propertyLine->setObjectName(QStringLiteral("propertyLine"));

        horizontalLayout_4->addWidget(propertyLine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_6->addWidget(label_6);

        locationLine = new QLineEdit(layoutWidget);
        locationLine->setObjectName(QStringLiteral("locationLine"));

        horizontalLayout_6->addWidget(locationLine);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout_5->addWidget(label_7);

        statusLine = new QLineEdit(layoutWidget);
        statusLine->setObjectName(QStringLiteral("statusLine"));

        horizontalLayout_5->addWidget(statusLine);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_7->addWidget(label_5);

        remarksLine = new QLineEdit(layoutWidget);
        remarksLine->setObjectName(QStringLiteral("remarksLine"));

        horizontalLayout_7->addWidget(remarksLine);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout->addWidget(label_4);

        quantityLine = new QLineEdit(layoutWidget);
        quantityLine->setObjectName(QStringLiteral("quantityLine"));

        horizontalLayout->addWidget(quantityLine);


        verticalLayout_2->addLayout(horizontalLayout);

        BackButton = new QPushButton(Information);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setGeometry(QRect(200, 270, 75, 25));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        BackButton->setFont(font1);
        OKButton = new QPushButton(Information);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setGeometry(QRect(290, 270, 75, 25));
        OKButton->setFont(font1);
        label_3 = new QLabel(Information);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 20, 151, 20));
        label_3->setFont(font1);

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("Information", "NAME", Q_NULLPTR));
        label_9->setText(QApplication::translate("Information", "SERIAL", Q_NULLPTR));
        label_8->setText(QApplication::translate("Information", "EQUIP_PROP", Q_NULLPTR));
        label_6->setText(QApplication::translate("Information", "LOCATION", Q_NULLPTR));
        label_7->setText(QApplication::translate("Information", "OP_STATUS", Q_NULLPTR));
        label_5->setText(QApplication::translate("Information", "REMARKS", Q_NULLPTR));
        label_4->setText(QApplication::translate("Information", "Quantity", Q_NULLPTR));
        BackButton->setText(QApplication::translate("Information", "BACK", Q_NULLPTR));
        OKButton->setText(QApplication::translate("Information", "OK", Q_NULLPTR));
        label_3->setText(QApplication::translate("Information", "INFORMATION:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
