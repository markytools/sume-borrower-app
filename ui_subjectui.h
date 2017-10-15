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
    QSpacerItem *horizontalSpacer;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *editSubject;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *deleteSubject;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit;
    QPushButton *addSubject;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *SubjectUI)
    {
        if (SubjectUI->objectName().isEmpty())
            SubjectUI->setObjectName(QStringLiteral("SubjectUI"));
        SubjectUI->resize(720, 600);
        SubjectUI->setMinimumSize(QSize(180, 600));
        gridLayout = new QGridLayout(SubjectUI);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(SubjectUI);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("#label{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(SubjectUI);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(10);
        tableWidget->setFont(font1);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Back = new QPushButton(SubjectUI);
        Back->setObjectName(QStringLiteral("Back"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        Back->setFont(font2);
        Back->setStyleSheet(QLatin1String("#Back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(Back);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        editSubject = new QPushButton(SubjectUI);
        editSubject->setObjectName(QStringLiteral("editSubject"));
        editSubject->setFont(font2);
        editSubject->setStyleSheet(QLatin1String("#editSubject{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(editSubject);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        deleteSubject = new QPushButton(SubjectUI);
        deleteSubject->setObjectName(QStringLiteral("deleteSubject"));
        deleteSubject->setFont(font2);
        deleteSubject->setStyleSheet(QLatin1String("#deleteSubject{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(deleteSubject);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineEdit = new QLineEdit(SubjectUI);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(8);
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QLatin1String("#lineEdit{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(lineEdit);

        addSubject = new QPushButton(SubjectUI);
        addSubject->setObjectName(QStringLiteral("addSubject"));
        addSubject->setFont(font2);
        addSubject->setStyleSheet(QLatin1String("#addSubject{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout->addWidget(addSubject);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SubjectUI);

        QMetaObject::connectSlotsByName(SubjectUI);
    } // setupUi

    void retranslateUi(QWidget *SubjectUI)
    {
        SubjectUI->setWindowTitle(QApplication::translate("SubjectUI", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SubjectUI", "SUBJECTS", Q_NULLPTR));
        Back->setText(QApplication::translate("SubjectUI", "Back", Q_NULLPTR));
        editSubject->setText(QApplication::translate("SubjectUI", "Edit Subject", Q_NULLPTR));
        deleteSubject->setText(QApplication::translate("SubjectUI", "Delete Subject", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("SubjectUI", "Press ENTER to add subject", Q_NULLPTR));
        addSubject->setText(QApplication::translate("SubjectUI", "Add Subject", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubjectUI: public Ui_SubjectUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBJECTUI_H
