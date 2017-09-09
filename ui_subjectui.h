/********************************************************************************
** Form generated from reading UI file 'subjectui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBJECTUI_H
#define UI_SUBJECTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectUI
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton_2;
    QPushButton *AddButton_4;
    QPushButton *AddButton;
    QPushButton *AddButton_3;

    void setupUi(QWidget *SubjectUI)
    {
        if (SubjectUI->objectName().isEmpty())
            SubjectUI->setObjectName(QStringLiteral("SubjectUI"));
        SubjectUI->resize(733, 494);
        gridLayout = new QGridLayout(SubjectUI);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SubjectUI);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(SubjectUI);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        tableWidget = new QTableWidget(SubjectUI);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        AddButton_2 = new QPushButton(SubjectUI);
        AddButton_2->setObjectName(QStringLiteral("AddButton_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        AddButton_2->setFont(font1);

        horizontalLayout->addWidget(AddButton_2);

        AddButton_4 = new QPushButton(SubjectUI);
        AddButton_4->setObjectName(QStringLiteral("AddButton_4"));
        AddButton_4->setFont(font1);

        horizontalLayout->addWidget(AddButton_4);

        AddButton = new QPushButton(SubjectUI);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setFont(font1);

        horizontalLayout->addWidget(AddButton);

        AddButton_3 = new QPushButton(SubjectUI);
        AddButton_3->setObjectName(QStringLiteral("AddButton_3"));
        AddButton_3->setFont(font1);

        horizontalLayout->addWidget(AddButton_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(SubjectUI);

        QMetaObject::connectSlotsByName(SubjectUI);
    } // setupUi

    void retranslateUi(QWidget *SubjectUI)
    {
        SubjectUI->setWindowTitle(QApplication::translate("SubjectUI", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SubjectUI", "SUBJECT:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SubjectUI", "(subject_name)", Q_NULLPTR));
        AddButton_2->setText(QApplication::translate("SubjectUI", "New Subject", Q_NULLPTR));
        AddButton_4->setText(QApplication::translate("SubjectUI", "Edit Subject", Q_NULLPTR));
        AddButton->setText(QApplication::translate("SubjectUI", "Delete Subject", Q_NULLPTR));
        AddButton_3->setText(QApplication::translate("SubjectUI", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectUI: public Ui_SubjectUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTUI_H
