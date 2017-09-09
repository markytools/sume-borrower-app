/********************************************************************************
** Form generated from reading UI file 'anothersubject.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERSUBJECT_H
#define UI_ANOTHERSUBJECT_H

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

class Ui_AnotherSubject
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *AddButton_2;
    QPushButton *AddButton;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_10;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_9;
    QTableWidget *tableWidget_2;
    QPushButton *AddButton_3;
    QTableWidget *tableWidget_3;
    QPushButton *AddButton_4;
    QPushButton *AddButton_5;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AnotherSubject)
    {
        if (AnotherSubject->objectName().isEmpty())
            AnotherSubject->setObjectName(QStringLiteral("AnotherSubject"));
        AnotherSubject->resize(743, 502);
        gridLayout_2 = new QGridLayout(AnotherSubject);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(AnotherSubject);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(AnotherSubject);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(AnotherSubject);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(AnotherSubject);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        AddButton_2 = new QPushButton(AnotherSubject);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        AddButton_2->setFont(font);

        verticalLayout->addWidget(AddButton_2);

        AddButton = new QPushButton(AnotherSubject);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setFont(font);

        verticalLayout->addWidget(AddButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(AnotherSubject);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        label_5 = new QLabel(AnotherSubject);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_10 = new QLabel(AnotherSubject);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);

        tableWidget = new QTableWidget(AnotherSubject);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 5);

        label_7 = new QLabel(AnotherSubject);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_6 = new QLabel(AnotherSubject);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 1, 3, 1, 2);

        label_8 = new QLabel(AnotherSubject);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 2, 0, 1, 1);

        label_9 = new QLabel(AnotherSubject);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 2, 4, 1, 1);

        tableWidget_2 = new QTableWidget(AnotherSubject);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));

        gridLayout_2->addWidget(tableWidget_2, 3, 0, 2, 3);

        AddButton_3 = new QPushButton(AnotherSubject);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setFont(font);

        gridLayout_2->addWidget(AddButton_3, 3, 3, 1, 1);

        tableWidget_3 = new QTableWidget(AnotherSubject);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));

        gridLayout_2->addWidget(tableWidget_3, 3, 4, 2, 1);

        AddButton_4 = new QPushButton(AnotherSubject);
        AddButton_4->setObjectName(QStringLiteral("AddButton_4"));
        AddButton_4->setFont(font);

        gridLayout_2->addWidget(AddButton_4, 4, 3, 1, 1);

        AddButton_5 = new QPushButton(AnotherSubject);
        AddButton_5->setObjectName(QStringLiteral("AddButton_5"));
        AddButton_5->setFont(font);

        gridLayout_2->addWidget(AddButton_5, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(224, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 2, 1, 3);


        retranslateUi(AnotherSubject);

        QMetaObject::connectSlotsByName(AnotherSubject);
    } // setupUi

    void retranslateUi(QWidget *AnotherSubject)
    {
        AnotherSubject->setWindowTitle(QApplication::translate("AnotherSubject", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("AnotherSubject", "Name:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AnotherSubject", "No.", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("AnotherSubject", "Add Experiment", Q_NULLPTR));
        AddButton->setText(QApplication::translate("AnotherSubject", "Delete Experiment", Q_NULLPTR));
        label_4->setText(QApplication::translate("AnotherSubject", "SUBJECT:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AnotherSubject", "(subject_name)", Q_NULLPTR));
        label_10->setText(QApplication::translate("AnotherSubject", "EXPERIMENTS", Q_NULLPTR));
        label_7->setText(QApplication::translate("AnotherSubject", "EXPERIMENT:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AnotherSubject", "(currentlySelectedExperiment)", Q_NULLPTR));
        label_8->setText(QApplication::translate("AnotherSubject", "LIST OF EQUIPMENTS:", Q_NULLPTR));
        label_9->setText(QApplication::translate("AnotherSubject", "EXPERIMENT EQUIPMENTS:", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("AnotherSubject", ">>", Q_NULLPTR));
        AddButton_4->setText(QApplication::translate("AnotherSubject", "<<", Q_NULLPTR));
        AddButton_5->setText(QApplication::translate("AnotherSubject", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnotherSubject: public Ui_AnotherSubject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERSUBJECT_H
