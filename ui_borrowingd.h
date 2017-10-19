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
#include <QtWidgets/QCheckBox>
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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *studentName;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *Add;
    QPushButton *Delete;
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
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QDateTimeEdit *startDateTime;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QDateTimeEdit *endDateTime;
    QCheckBox *hasEndTime;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Proceed;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label;

    void setupUi(QWidget *BorrowingD)
    {
        if (BorrowingD->objectName().isEmpty())
            BorrowingD->setObjectName(QStringLiteral("BorrowingD"));
        BorrowingD->resize(800, 600);
        BorrowingD->setMinimumSize(QSize(800, 600));
        BorrowingD->setMaximumSize(QSize(16777215, 16777215));
        BorrowingD->setStyleSheet(QLatin1String("#BorrowingD{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(BorrowingD);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(BorrowingD);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_4->addWidget(label_2);

        studentName = new QLineEdit(BorrowingD);
        studentName->setObjectName(QStringLiteral("studentName"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(8);
        studentName->setFont(font1);
        studentName->setStyleSheet(QLatin1String("#studentName{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_4->addWidget(studentName);


        horizontalLayout_12->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Add = new QPushButton(BorrowingD);
        Add->setObjectName(QStringLiteral("Add"));
        Add->setFont(font);
        Add->setStyleSheet(QLatin1String("#Add{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_11->addWidget(Add);

        Delete = new QPushButton(BorrowingD);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setFont(font);
        Delete->setStyleSheet(QLatin1String("#Delete{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_11->addWidget(Delete);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(horizontalLayout_12);

        listWidget = new QListWidget(BorrowingD);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        listWidget->setFont(font2);

        verticalLayout_2->addWidget(listWidget);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_9 = new QLabel(BorrowingD);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QLatin1String("#label_9{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(label_9);

        groupName = new QLineEdit(BorrowingD);
        groupName->setObjectName(QStringLiteral("groupName"));
        groupName->setFont(font1);
        groupName->setStyleSheet(QLatin1String("#groupName{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(groupName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(BorrowingD);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("#label_10{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(label_10);

        subject = new QLineEdit(BorrowingD);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setFont(font1);
        subject->setStyleSheet(QLatin1String("#subject{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_2->addWidget(subject);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_12 = new QLabel(BorrowingD);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("#label_12{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_10->addWidget(label_12);

        section = new QLineEdit(BorrowingD);
        section->setObjectName(QStringLiteral("section"));
        section->setFont(font1);
        section->setStyleSheet(QLatin1String("#section{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_10->addWidget(section);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_11 = new QLabel(BorrowingD);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("#label_11{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(label_11);

        instructor = new QLineEdit(BorrowingD);
        instructor->setObjectName(QStringLiteral("instructor"));
        instructor->setFont(font1);
        instructor->setStyleSheet(QLatin1String("#instructor{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_3->addWidget(instructor);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_9->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(BorrowingD);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("#label_8{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_5->addWidget(label_8);

        startDateTime = new QDateTimeEdit(BorrowingD);
        startDateTime->setObjectName(QStringLiteral("startDateTime"));
        startDateTime->setFont(font1);
        startDateTime->setStyleSheet(QLatin1String("#startDateTime{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_5->addWidget(startDateTime);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(BorrowingD);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("#label_7{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_6->addWidget(label_7);

        endDateTime = new QDateTimeEdit(BorrowingD);
        endDateTime->setObjectName(QStringLiteral("endDateTime"));
        endDateTime->setFont(font1);
        endDateTime->setStyleSheet(QLatin1String("#endDateTime{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_6->addWidget(endDateTime);


        verticalLayout_4->addLayout(horizontalLayout_6);

        hasEndTime = new QCheckBox(BorrowingD);
        hasEndTime->setObjectName(QStringLiteral("hasEndTime"));
        hasEndTime->setEnabled(true);
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        hasEndTime->setFont(font3);
        hasEndTime->setLayoutDirection(Qt::LeftToRight);
        hasEndTime->setAutoFillBackground(false);
        hasEndTime->setStyleSheet(QLatin1String("#hasEndTime{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        hasEndTime->setTristate(false);

        verticalLayout_4->addWidget(hasEndTime);


        horizontalLayout_7->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        Cancel = new QPushButton(BorrowingD);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setFont(font);
        Cancel->setStyleSheet(QLatin1String("#Cancel{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_8->addWidget(Cancel);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        Proceed = new QPushButton(BorrowingD);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font);
        Proceed->setStyleSheet(QLatin1String("#Proceed{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_8->addWidget(Proceed);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 3);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label = new QLabel(BorrowingD);
        label->setObjectName(QStringLiteral("label"));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label);


        gridLayout->addLayout(horizontalLayout_13, 0, 0, 1, 3);


        retranslateUi(BorrowingD);

        QMetaObject::connectSlotsByName(BorrowingD);
    } // setupUi

    void retranslateUi(QWidget *BorrowingD)
    {
        BorrowingD->setWindowTitle(QApplication::translate("BorrowingD", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowingD", "Enter the Student Name:     ", Q_NULLPTR));
        studentName->setText(QString());
        studentName->setPlaceholderText(QApplication::translate("BorrowingD", "Press ENTER to add the name", Q_NULLPTR));
        Add->setText(QApplication::translate("BorrowingD", "Add", Q_NULLPTR));
        Delete->setText(QApplication::translate("BorrowingD", "Delete", Q_NULLPTR));
        label_9->setText(QApplication::translate("BorrowingD", "Group Name:  ", Q_NULLPTR));
        label_10->setText(QApplication::translate("BorrowingD", "Subject:          ", Q_NULLPTR));
        label_12->setText(QApplication::translate("BorrowingD", "Section:          ", Q_NULLPTR));
        label_11->setText(QApplication::translate("BorrowingD", "Instructor:      ", Q_NULLPTR));
        label_8->setText(QApplication::translate("BorrowingD", "Start:", Q_NULLPTR));
        label_7->setText(QApplication::translate("BorrowingD", "End:", Q_NULLPTR));
        hasEndTime->setText(QApplication::translate("BorrowingD", "Has End Time", Q_NULLPTR));
        Cancel->setText(QApplication::translate("BorrowingD", "Cancel", Q_NULLPTR));
        Proceed->setText(QApplication::translate("BorrowingD", "Proceed", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowingD", "BORROWING DETAILS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowingD: public Ui_BorrowingD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGD_H
