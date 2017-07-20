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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowingD
{
public:
    QLabel *label_2;
    QCalendarWidget *calendarWidget;
    QTableWidget *tableWidget;
    QTimeEdit *timeEdit;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QTimeEdit *timeEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *BorrowingD)
    {
        if (BorrowingD->objectName().isEmpty())
            BorrowingD->setObjectName(QStringLiteral("BorrowingD"));
        BorrowingD->resize(686, 438);
        BorrowingD->setMinimumSize(QSize(686, 438));
        label_2 = new QLabel(BorrowingD);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 156, 16));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        calendarWidget = new QCalendarWidget(BorrowingD);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(360, 120, 312, 183));
        tableWidget = new QTableWidget(BorrowingD);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 120, 256, 192));
        timeEdit = new QTimeEdit(BorrowingD);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(390, 340, 71, 20));
        label = new QLabel(BorrowingD);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 30, 241, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_6 = new QLabel(BorrowingD);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 310, 37, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI Black"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_5 = new QLabel(BorrowingD);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 90, 119, 17));
        label_5->setFont(font2);
        timeEdit_2 = new QTimeEdit(BorrowingD);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(550, 340, 71, 20));
        pushButton = new QPushButton(BorrowingD);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 400, 75, 25));
        pushButton->setFont(font2);
        lineEdit = new QLineEdit(BorrowingD);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 90, 133, 20));
        label_7 = new QLabel(BorrowingD);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(490, 340, 32, 17));
        label_7->setFont(font2);
        pushButton_2 = new QPushButton(BorrowingD);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 400, 75, 25));
        pushButton_2->setFont(font2);
        label_8 = new QLabel(BorrowingD);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(330, 340, 46, 17));
        label_8->setFont(font2);
        pushButton_3 = new QPushButton(BorrowingD);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 320, 75, 25));
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(BorrowingD);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 320, 75, 25));
        pushButton_4->setFont(font2);

        retranslateUi(BorrowingD);

        QMetaObject::connectSlotsByName(BorrowingD);
    } // setupUi

    void retranslateUi(QWidget *BorrowingD)
    {
        BorrowingD->setWindowTitle(QApplication::translate("BorrowingD", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("BorrowingD", "ENTER THE STUDENT NAME:", Q_NULLPTR));
        label->setText(QApplication::translate("BorrowingD", "BORROWING DETAILS:", Q_NULLPTR));
        label_6->setText(QApplication::translate("BorrowingD", "TIME:", Q_NULLPTR));
        label_5->setText(QApplication::translate("BorrowingD", "SCHEDULED DATE:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("BorrowingD", "PROCEED", Q_NULLPTR));
        label_7->setText(QApplication::translate("BorrowingD", "END:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("BorrowingD", "CANCEL", Q_NULLPTR));
        label_8->setText(QApplication::translate("BorrowingD", "START:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("BorrowingD", "ADD", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("BorrowingD", "DELETE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BorrowingD: public Ui_BorrowingD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWINGD_H
