/********************************************************************************
** Form generated from reading UI file 'borrowers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWERS_H
#define UI_BORROWERS_H

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

class Ui_Borrowers
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTableWidget *borrowEquipments;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QPushButton *rightToLeft;
    QSpacerItem *verticalSpacer;
    QPushButton *leftToRight;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QTableWidget *SubjectsTableWidget;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QTableWidget *ExperimentTableWidget;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Back_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *listEquipments;
    QLineEdit *searchEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *Proceed;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *Borrowers)
    {
        if (Borrowers->objectName().isEmpty())
            Borrowers->setObjectName(QStringLiteral("Borrowers"));
        Borrowers->resize(1028, 600);
        Borrowers->setMinimumSize(QSize(800, 600));
        Borrowers->setStyleSheet(QLatin1String("#Borrowers{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout = new QGridLayout(Borrowers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Borrowers);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("#label_3{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        borrowEquipments = new QTableWidget(Borrowers);
        borrowEquipments->setObjectName(QStringLiteral("borrowEquipments"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(10);
        borrowEquipments->setFont(font1);

        verticalLayout_3->addWidget(borrowEquipments);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(verticalLayout_3, 4, 4, 3, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rightToLeft = new QPushButton(Borrowers);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        rightToLeft->setFont(font2);
        rightToLeft->setStyleSheet(QLatin1String("#rightToLeft{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout->addWidget(rightToLeft);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        leftToRight = new QPushButton(Borrowers);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font2);
        leftToRight->setStyleSheet(QLatin1String("#leftToRight{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout->addWidget(leftToRight);


        gridLayout->addLayout(verticalLayout, 5, 2, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(450, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(Borrowers);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("#label_5{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        SubjectsTableWidget = new QTableWidget(Borrowers);
        SubjectsTableWidget->setObjectName(QStringLiteral("SubjectsTableWidget"));
        SubjectsTableWidget->setFont(font1);
        SubjectsTableWidget->setAlternatingRowColors(false);
        SubjectsTableWidget->setTextElideMode(Qt::ElideLeft);

        verticalLayout_4->addWidget(SubjectsTableWidget);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_9 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(Borrowers);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("#label_6{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        ExperimentTableWidget = new QTableWidget(Borrowers);
        ExperimentTableWidget->setObjectName(QStringLiteral("ExperimentTableWidget"));
        ExperimentTableWidget->setFont(font1);

        verticalLayout_5->addWidget(ExperimentTableWidget);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 5);

        horizontalSpacer_4 = new QSpacerItem(450, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 4, 1, 1);

        Back_2 = new QPushButton(Borrowers);
        Back_2->setObjectName(QStringLiteral("Back_2"));
        Back_2->setFont(font);
        Back_2->setStyleSheet(QLatin1String("#Back_2{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        gridLayout->addWidget(Back_2, 3, 2, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(Borrowers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listEquipments = new QTableWidget(Borrowers);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));
        listEquipments->setFont(font1);

        verticalLayout_2->addWidget(listEquipments);

        searchEdit = new QLineEdit(Borrowers);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));
        searchEdit->setStyleSheet(QLatin1String("#searchEdit{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        verticalLayout_2->addWidget(searchEdit);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 3, 2);

        label_4 = new QLabel(Borrowers);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(8);
        font3.setBold(false);
        font3.setWeight(50);
        label_4->setFont(font3);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(700, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Back = new QPushButton(Borrowers);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);
        Back->setStyleSheet(QLatin1String("#Back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_2->addWidget(Back);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        Proceed = new QPushButton(Borrowers);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font);
        Proceed->setStyleSheet(QLatin1String("#Proceed{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_2->addWidget(Proceed);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_2, 7, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Borrowers);
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

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);


        retranslateUi(Borrowers);
        QObject::connect(SubjectsTableWidget, SIGNAL(cellClicked(int,int)), ExperimentTableWidget, SLOT(clearSelection()));
        QObject::connect(SubjectsTableWidget, SIGNAL(cellClicked(int,int)), ExperimentTableWidget, SLOT(clearContents()));
        QObject::connect(listEquipments, SIGNAL(cellClicked(int,int)), ExperimentTableWidget, SLOT(clearSelection()));
        QObject::connect(listEquipments, SIGNAL(cellClicked(int,int)), SubjectsTableWidget, SLOT(clearSelection()));

        QMetaObject::connectSlotsByName(Borrowers);
    } // setupUi

    void retranslateUi(QWidget *Borrowers)
    {
        Borrowers->setWindowTitle(QApplication::translate("Borrowers", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Borrowers", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Borrowers", "<<", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Borrowers", ">>", Q_NULLPTR));
        label_5->setText(QApplication::translate("Borrowers", "SUBJECTS", Q_NULLPTR));
        label_6->setText(QApplication::translate("Borrowers", "EXPERIMENTS", Q_NULLPTR));
        Back_2->setText(QApplication::translate("Borrowers", "Add Filter", Q_NULLPTR));
        label_2->setText(QApplication::translate("Borrowers", "LIST OF EQUIPMENTS", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("Borrowers", "Type keyword here to search equipment or leave it blank to show all", Q_NULLPTR));
        label_4->setText(QApplication::translate("Borrowers", "USE THIS BUTTON TO FILTER OUT THE LIST OF EQUIPMENTS FOR A SPECIFIC EXPERIMENT", Q_NULLPTR));
        Back->setText(QApplication::translate("Borrowers", "Back", Q_NULLPTR));
        Proceed->setText(QApplication::translate("Borrowers", "Proceed", Q_NULLPTR));
        label->setText(QApplication::translate("Borrowers", "BORROW EQUIPMENT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Borrowers: public Ui_Borrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H
