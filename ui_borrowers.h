/********************************************************************************
** Form generated from reading UI file 'borrowers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QPushButton *leftToRight;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QTableWidget *SubjectsTableWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QTableWidget *ExperimentTableWidget;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Back;
    QPushButton *Proceed;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Back_2;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *listEquipments;
    QLineEdit *searchEdit;

    void setupUi(QWidget *Borrowers)
    {
        if (Borrowers->objectName().isEmpty())
            Borrowers->setObjectName(QStringLiteral("Borrowers"));
        Borrowers->resize(1024, 487);
        Borrowers->setMinimumSize(QSize(1024, 487));
        gridLayout = new QGridLayout(Borrowers);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Borrowers);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        borrowEquipments = new QTableWidget(Borrowers);
        borrowEquipments->setObjectName(QStringLiteral("borrowEquipments"));

        verticalLayout_3->addWidget(borrowEquipments);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_6);


        gridLayout->addLayout(verticalLayout_3, 3, 4, 3, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rightToLeft = new QPushButton(Borrowers);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        rightToLeft->setFont(font);

        verticalLayout->addWidget(rightToLeft);

        leftToRight = new QPushButton(Borrowers);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font);

        verticalLayout->addWidget(leftToRight);


        gridLayout->addLayout(verticalLayout, 4, 2, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 47, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 2, 1, 2);

        label = new QLabel(Borrowers);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(237, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(Borrowers);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        SubjectsTableWidget = new QTableWidget(Borrowers);
        SubjectsTableWidget->setObjectName(QStringLiteral("SubjectsTableWidget"));

        verticalLayout_4->addWidget(SubjectsTableWidget);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(Borrowers);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        ExperimentTableWidget = new QTableWidget(Borrowers);
        ExperimentTableWidget->setObjectName(QStringLiteral("ExperimentTableWidget"));

        verticalLayout_5->addWidget(ExperimentTableWidget);


        horizontalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 5);

        horizontalSpacer_3 = new QSpacerItem(437, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Back = new QPushButton(Borrowers);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);

        horizontalLayout_2->addWidget(Back);

        Proceed = new QPushButton(Borrowers);
        Proceed->setObjectName(QStringLiteral("Proceed"));
        Proceed->setFont(font);

        horizontalLayout_2->addWidget(Proceed);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        Back_2 = new QPushButton(Borrowers);
        Back_2->setObjectName(QStringLiteral("Back_2"));
        Back_2->setFont(font);

        gridLayout->addWidget(Back_2, 2, 2, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(587, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 6, 1, 1, 4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(Borrowers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        listEquipments = new QTableWidget(Borrowers);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));

        verticalLayout_2->addWidget(listEquipments);

        searchEdit = new QLineEdit(Borrowers);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        verticalLayout_2->addWidget(searchEdit);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 3, 2);


        retranslateUi(Borrowers);

        QMetaObject::connectSlotsByName(Borrowers);
    } // setupUi

    void retranslateUi(QWidget *Borrowers)
    {
        Borrowers->setWindowTitle(QApplication::translate("Borrowers", "Form", Q_NULLPTR));
        label_3->setText(QApplication::translate("Borrowers", "EQUIPMENTS TO BE BORROWED", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Borrowers", "<<", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Borrowers", ">>", Q_NULLPTR));
        label->setText(QApplication::translate("Borrowers", "BORROW EQUIPMENT", Q_NULLPTR));
        label_5->setText(QApplication::translate("Borrowers", "SUBJECTS", Q_NULLPTR));
        label_6->setText(QApplication::translate("Borrowers", "EXPERIMENTS", Q_NULLPTR));
        Back->setText(QApplication::translate("Borrowers", "BACK", Q_NULLPTR));
        Proceed->setText(QApplication::translate("Borrowers", "PROCEED", Q_NULLPTR));
        Back_2->setText(QApplication::translate("Borrowers", "FILTER", Q_NULLPTR));
        label_2->setText(QApplication::translate("Borrowers", "LIST OF EQUIPMENTS", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("Borrowers", "Type keyword here to search equipment or leave it blank to show all", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Borrowers: public Ui_Borrowers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWERS_H
