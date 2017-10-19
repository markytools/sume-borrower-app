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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Infopopup
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QTableWidget *borrowedEquipmentTable;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QTableWidget *membersTable;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *exportToExcel;
    QLineEdit *itemsReturned;
    QPushButton *Delete;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *groupName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *subject;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *section;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *instructor;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *startTime;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *endTime;
    QPushButton *Back;

    void setupUi(QWidget *Infopopup)
    {
        if (Infopopup->objectName().isEmpty())
            Infopopup->setObjectName(QStringLiteral("Infopopup"));
        Infopopup->resize(926, 600);
        Infopopup->setMinimumSize(QSize(800, 600));
        Infopopup->setMaximumSize(QSize(16777215, 16777215));
        Infopopup->setStyleSheet(QLatin1String("#Infopopup{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(Infopopup);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(Infopopup);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout_6, 0, 0, 1, 4);

        horizontalSpacer_6 = new QSpacerItem(520, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(Infopopup);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("#label_7{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        borrowedEquipmentTable = new QTableWidget(Infopopup);
        borrowedEquipmentTable->setObjectName(QStringLiteral("borrowedEquipmentTable"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        borrowedEquipmentTable->setFont(font2);

        verticalLayout_3->addWidget(borrowedEquipmentTable);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_8 = new QLabel(Infopopup);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("#label_8{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        membersTable = new QTableWidget(Infopopup);
        membersTable->setObjectName(QStringLiteral("membersTable"));
        membersTable->setFont(font2);

        verticalLayout_4->addWidget(membersTable);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        exportToExcel = new QPushButton(Infopopup);
        exportToExcel->setObjectName(QStringLiteral("exportToExcel"));
        exportToExcel->setFont(font1);
        exportToExcel->setStyleSheet(QLatin1String("#exportToExcel{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_2->addWidget(exportToExcel);

        itemsReturned = new QLineEdit(Infopopup);
        itemsReturned->setObjectName(QStringLiteral("itemsReturned"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(8);
        itemsReturned->setFont(font3);
        itemsReturned->setStyleSheet(QLatin1String("#itemsReturned{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));
        itemsReturned->setAlignment(Qt::AlignCenter);
        itemsReturned->setReadOnly(true);

        verticalLayout_2->addWidget(itemsReturned);

        Delete = new QPushButton(Infopopup);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setFont(font1);
        Delete->setStyleSheet(QLatin1String("#Delete{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_2->addWidget(Delete);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(Infopopup);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("#label_6{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(label_6);

        groupName = new QLineEdit(Infopopup);
        groupName->setObjectName(QStringLiteral("groupName"));
        groupName->setFont(font3);
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
        label_5 = new QLabel(Infopopup);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("#label_5{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(label_5);

        subject = new QLineEdit(Infopopup);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setFont(font3);
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Infopopup);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(label_4);

        section = new QLineEdit(Infopopup);
        section->setObjectName(QStringLiteral("section"));
        section->setFont(font3);
        section->setStyleSheet(QLatin1String("#section{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_3->addWidget(section);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(Infopopup);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("#label_9{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_7->addWidget(label_9);

        instructor = new QLineEdit(Infopopup);
        instructor->setObjectName(QStringLiteral("instructor"));
        instructor->setFont(font3);
        instructor->setStyleSheet(QLatin1String("#instructor{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_7->addWidget(instructor);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_10 = new QLabel(Infopopup);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setStyleSheet(QLatin1String("#label_10{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_8->addWidget(label_10);

        startTime = new QLineEdit(Infopopup);
        startTime->setObjectName(QStringLiteral("startTime"));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Garamond Pro Bold"));
        font4.setPointSize(8);
        startTime->setFont(font4);
        startTime->setStyleSheet(QLatin1String("#startTime{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_8->addWidget(startTime);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(Infopopup);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        label_11->setStyleSheet(QLatin1String("#label_11{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_9->addWidget(label_11);

        endTime = new QLineEdit(Infopopup);
        endTime->setObjectName(QStringLiteral("endTime"));
        endTime->setFont(font3);
        endTime->setStyleSheet(QLatin1String("#endTime{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout_9->addWidget(endTime);


        verticalLayout->addLayout(horizontalLayout_9);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 1, 0, 1, 4);

        Back = new QPushButton(Infopopup);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font1);
        Back->setStyleSheet(QLatin1String("#Back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        gridLayout->addWidget(Back, 2, 1, 1, 1);


        retranslateUi(Infopopup);

        QMetaObject::connectSlotsByName(Infopopup);
    } // setupUi

    void retranslateUi(QWidget *Infopopup)
    {
        Infopopup->setWindowTitle(QApplication::translate("Infopopup", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Infopopup", "INFORMATION", Q_NULLPTR));
        label_7->setText(QApplication::translate("Infopopup", "EQUIPMENTS", Q_NULLPTR));
        label_8->setText(QApplication::translate("Infopopup", "MEMBERS", Q_NULLPTR));
        exportToExcel->setText(QApplication::translate("Infopopup", "Export To Excel", Q_NULLPTR));
        Delete->setText(QApplication::translate("Infopopup", "Delete Borrower", Q_NULLPTR));
        label_6->setText(QApplication::translate("Infopopup", "Group Name:      ", Q_NULLPTR));
        label_5->setText(QApplication::translate("Infopopup", "Subject:             ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Infopopup", "Section:             ", Q_NULLPTR));
        label_9->setText(QApplication::translate("Infopopup", "Instructor:         ", Q_NULLPTR));
        label_10->setText(QApplication::translate("Infopopup", "Start Time:        ", Q_NULLPTR));
        label_11->setText(QApplication::translate("Infopopup", "End Time:          ", Q_NULLPTR));
        Back->setText(QApplication::translate("Infopopup", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Infopopup: public Ui_Infopopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOPOPUP_H
