/********************************************************************************
** Form generated from reading UI file 'subjectui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubjectUI
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addSubject;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *editSubject;
    QPushButton *deleteSubject;
    QPushButton *Back;

    void setupUi(QWidget *SubjectUI)
    {
        if (SubjectUI->objectName().isEmpty())
            SubjectUI->setObjectName(QStringLiteral("SubjectUI"));
        SubjectUI->resize(733, 487);
        SubjectUI->setMinimumSize(QSize(733, 487));
        gridLayout = new QGridLayout(SubjectUI);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SubjectUI);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(SubjectUI);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addSubject = new QPushButton(SubjectUI);
        addSubject->setObjectName(QStringLiteral("addSubject"));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        addSubject->setFont(font1);

        horizontalLayout->addWidget(addSubject);

        lineEdit = new QLineEdit(SubjectUI);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        editSubject = new QPushButton(SubjectUI);
        editSubject->setObjectName(QStringLiteral("editSubject"));
        editSubject->setFont(font1);

        horizontalLayout->addWidget(editSubject);

        deleteSubject = new QPushButton(SubjectUI);
        deleteSubject->setObjectName(QStringLiteral("deleteSubject"));
        deleteSubject->setFont(font1);

        horizontalLayout->addWidget(deleteSubject);

        Back = new QPushButton(SubjectUI);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font1);

        horizontalLayout->addWidget(Back);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SubjectUI);

        QMetaObject::connectSlotsByName(SubjectUI);
    } // setupUi

    void retranslateUi(QWidget *SubjectUI)
    {
        SubjectUI->setWindowTitle(QApplication::translate("SubjectUI", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SubjectUI", "SUBJECTS", Q_NULLPTR));
        addSubject->setText(QApplication::translate("SubjectUI", "ADD SUBJECT", Q_NULLPTR));
        editSubject->setText(QApplication::translate("SubjectUI", "EDIT SUBJECT", Q_NULLPTR));
        deleteSubject->setText(QApplication::translate("SubjectUI", "DELETE SUBJECT", Q_NULLPTR));
        Back->setText(QApplication::translate("SubjectUI", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectUI: public Ui_SubjectUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTUI_H
