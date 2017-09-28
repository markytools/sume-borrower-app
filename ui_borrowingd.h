/********************************************************************************
** Form generated from reading UI file 'borrowingd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWINGD_H
#define UI_BORROWINGD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowingD
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *studentName;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *groupName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *subject;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *section;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *instructor;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Add;
    QPushButton *Delete;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QDateTimeEdit *startDateTime;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QDateTimeEdit *endDateTime;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Cancel;
    QPushButton *Proceed;

    void setupUi(QWidget *BorrowingD)
    {
        if (BorrowingD->objectName().isEmpty())
            BorrowingD->setObjectName(QStringLiteral("BorrowingD"));
        BorrowingD->resize(686, 478);
        BorrowingD->setMinimumSize(QSize(0, 0));
        BorrowingD->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(BorrowingD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(203, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(BorrowingD);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(BorrowingD);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout_4->addWidget(label_2);

        studentName = new QLineEdit(BorrowingD);
        studentName->setObjectName(QStringLiteral("studentName"));

        horizontalLayout_4->addWidget(studentName);


        verticalLayout_2->addLayout(horizontalLayout_4);

        listWidget = new QListWidget(BorrowingD);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_2->addWidget(listWidget);


        verticalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(BorrowingD);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout->addWidget(label_9);

        groupName = new QLineEdit(BorrowingD);
        groupName->setObjectName(QStringLiteral("groupName"));

        horizontalLayout->addWidget(groupName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(BorrowingD);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        subject = new QLineEdit(BorrowingD);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout_2->addWidget(subject);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_12 = new QLabel(BorrowingD);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_10->addWidget(label_12);

        section = new QLineEdit(BorrowingD);
        section->setObjectName(QStringLiteral("section"));

        horizontalLayout_10->addWidget(section);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(BorrowingD);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_3->addWidget(label_11);

        instructor = new QLineEdit(BorrowingD);
        instructor->setObjectName(QStringLiteral("instructor"));

        horizontalLayout_3->addWidget(instructor);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_9->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Add = new QPushButton(BorrowingD);
        Add->setObjectName(QStringLiteral("Add"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Black"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        Add->setFont(font2);

        verticalLayout_3->addWidget(Add);

        Delete = new QPushButton(BorrowingD);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setFont(font2);

        verticalLayout_3->addWidget(Delete);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(BorrowingD);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);

        horizontalLayout_5->addWidget(label_8);

        startDateTime = new QDateTimeEdit(BorrowingD);
        startDateTime->setObjectName(QStringLiteral("startDateTime"));

        horizontalLayout_5->addWidget(startDateTime);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(BorrowingD);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        horizontalLayout_6->addWidget(label_7);

        endDateTime = new QDateTimeEdit(BorrowingD);
        endDateTime->setObjectName(QStringLiteral("endDateTime"));

        horizontalLayout_6->addWidget(endDateTime);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Cancel = new QPushButton(BorrowingD);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font2);

        horizontalLayout_8->addWidget(Cancel);

        Proceed = new QPushButton(BorrowingD);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font2);

        horizontalLayout_8->addWidget(Proceed);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout_6, 1, 0, 1, 3);


        retranslateUi(BorrowingD);

        QMetaObject::connectSlotsByName(BorrowingD);
    } // setupUi

    void retranslateUi(QWidget *BorrowingD)
    {
        BorrowingD->setWindowTitle(QApplication::translate("BorrowingD", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowingD", "BORROWING DETAILS", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowingD", "ENTER THE STUDENT NAME:", Q_NULLPTR));
        label_9->setText(QApplication::translate("BorrowingD", "GROUP NAME:", Q_NULLPTR));
        label_10->setText(QApplication::translate("BorrowingD", "SUBJECT:", Q_NULLPTR));
        label_12->setText(QApplication::translate("BorrowingD", "SECTION:", Q_NULLPTR));
        label_11->setText(QApplication::translate("BorrowingD", "INSTRUCTOR:", Q_NULLPTR));
        Add->setText(QApplication::translate("BorrowingD", "ADD", Q_NULLPTR));
        Delete->setText(QApplication::translate("BorrowingD", "DELETE", Q_NULLPTR));
        label_8->setText(QApplication::translate("BorrowingD", "START:", Q_NULLPTR));
        label_7->setText(QApplication::translate("BorrowingD", "END:", Q_NULLPTR));
        Cancel->setText(QApplication::translate("BorrowingD", "CANCEL", Q_NULLPTR));
        Proceed->setText(QApplication::translate("BorrowingD", "PROCEED", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowingD: public Ui_BorrowingD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGD_H
