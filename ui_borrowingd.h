/********************************************************************************
** Form generated from reading UI file 'borrowingd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowingD
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QDateTimeEdit *endDateTime;
    QPushButton *Cancel;
    QPushButton *Proceed;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *Delete;
    QPushButton *Add;
    QLineEdit *studentName;
    QLabel *label_8;
    QDateTimeEdit *startDateTime;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *groupName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *subject;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *section;
    QLabel *label;

    void setupUi(QWidget *BorrowingD)
    {
        if (BorrowingD->objectName().isEmpty())
            BorrowingD->setObjectName(QStringLiteral("BorrowingD"));
        BorrowingD->resize(686, 478);
        BorrowingD->setMinimumSize(QSize(686, 478));
        BorrowingD->setMaximumSize(QSize(686, 478));
        gridLayout = new QGridLayout(BorrowingD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_7 = new QLabel(BorrowingD);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 5, 2, 1, 1);

        endDateTime = new QDateTimeEdit(BorrowingD);
        endDateTime->setObjectName(QStringLiteral("endDateTime"));

        gridLayout->addWidget(endDateTime, 5, 3, 1, 1);

        Cancel = new QPushButton(BorrowingD);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font);

        gridLayout->addWidget(Cancel, 6, 2, 1, 2);

        Proceed = new QPushButton(BorrowingD);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font);

        gridLayout->addWidget(Proceed, 6, 4, 1, 1);

        label_2 = new QLabel(BorrowingD);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        listWidget = new QListWidget(BorrowingD);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 3, 0, 1, 5);

        Delete = new QPushButton(BorrowingD);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setFont(font);

        gridLayout->addWidget(Delete, 4, 0, 1, 1);

        Add = new QPushButton(BorrowingD);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setFont(font);

        gridLayout->addWidget(Add, 4, 1, 1, 1);

        studentName = new QLineEdit(BorrowingD);
        studentName->setObjectName(QStringLiteral("studentName"));

        gridLayout->addWidget(studentName, 2, 2, 1, 2);

        label_8 = new QLabel(BorrowingD);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 4, 2, 1, 1);

        startDateTime = new QDateTimeEdit(BorrowingD);
        startDateTime->setObjectName(QStringLiteral("startDateTime"));

        gridLayout->addWidget(startDateTime, 4, 3, 1, 1);

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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(BorrowingD);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_3->addWidget(label_11);

        section = new QLineEdit(BorrowingD);
        section->setObjectName(QStringLiteral("section"));

        horizontalLayout_3->addWidget(section);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 6, 0, 1, 2);

        label = new QLabel(BorrowingD);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Black"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        gridLayout->addWidget(label, 1, 2, 1, 2);


        retranslateUi(BorrowingD);

        QMetaObject::connectSlotsByName(BorrowingD);
    } // setupUi

    void retranslateUi(QWidget *BorrowingD)
    {
        BorrowingD->setWindowTitle(QApplication::translate("BorrowingD", "Form", Q_NULLPTR));
        label_7->setText(QApplication::translate("BorrowingD", "END:", Q_NULLPTR));
        Cancel->setText(QApplication::translate("BorrowingD", "CANCEL", Q_NULLPTR));
        Proceed->setText(QApplication::translate("BorrowingD", "PROCEED", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowingD", "ENTER THE STUDENT NAME:", Q_NULLPTR));
        Delete->setText(QApplication::translate("BorrowingD", "DELETE", Q_NULLPTR));
        Add->setText(QApplication::translate("BorrowingD", "ADD", Q_NULLPTR));
        label_8->setText(QApplication::translate("BorrowingD", "START:", Q_NULLPTR));
        label_9->setText(QApplication::translate("BorrowingD", "GROUP NAME:", Q_NULLPTR));
        label_10->setText(QApplication::translate("BorrowingD", "SUBJECT:", Q_NULLPTR));
        label_11->setText(QApplication::translate("BorrowingD", "SECTION:", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowingD", "BORROWING DETAILS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowingD: public Ui_BorrowingD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGD_H
