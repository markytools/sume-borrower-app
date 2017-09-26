/********************************************************************************
** Form generated from reading UI file 'experiments.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERIMENTS_H
#define UI_EXPERIMENTS_H

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

class Ui_Experiments
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *rightToLeft;
    QTableWidget *listEquipments;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *addExperiment;
    QPushButton *deleteExperiment;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *subjectNameLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QTableWidget *experimentsTable;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *leftToRight;
    QLabel *experimentName;
    QPushButton *Back;
    QTableWidget *experimentEquipments;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Experiments)
    {
        if (Experiments->objectName().isEmpty())
            Experiments->setObjectName(QStringLiteral("Experiments"));
        Experiments->resize(743, 502);
        gridLayout_2 = new QGridLayout(Experiments);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 6, 2, 1, 3);

        label_8 = new QLabel(Experiments);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_7 = new QLabel(Experiments);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        rightToLeft = new QPushButton(Experiments);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        rightToLeft->setFont(font);

        gridLayout_2->addWidget(rightToLeft, 5, 3, 1, 1);

        listEquipments = new QTableWidget(Experiments);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));

        gridLayout_2->addWidget(listEquipments, 4, 0, 2, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Experiments);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Experiments);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        addExperiment = new QPushButton(Experiments);
        addExperiment->setObjectName(QStringLiteral("addExperiment"));
        addExperiment->setFont(font);

        verticalLayout->addWidget(addExperiment);

        deleteExperiment = new QPushButton(Experiments);
        deleteExperiment->setObjectName(QStringLiteral("deleteExperiment"));
        deleteExperiment->setFont(font);

        verticalLayout->addWidget(deleteExperiment);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Experiments);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_3->addWidget(label_4);

        subjectNameLabel = new QLabel(Experiments);
        subjectNameLabel->setObjectName(QStringLiteral("subjectNameLabel"));
        subjectNameLabel->setFont(font);

        horizontalLayout_3->addWidget(subjectNameLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_10 = new QLabel(Experiments);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        verticalLayout_2->addWidget(label_10);

        experimentsTable = new QTableWidget(Experiments);
        experimentsTable->setObjectName(QStringLiteral("experimentsTable"));

        verticalLayout_2->addWidget(experimentsTable);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 5);

        leftToRight = new QPushButton(Experiments);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font);

        gridLayout_2->addWidget(leftToRight, 4, 3, 1, 1);

        experimentName = new QLabel(Experiments);
        experimentName->setObjectName(QStringLiteral("experimentName"));
        experimentName->setFont(font);

        gridLayout_2->addWidget(experimentName, 1, 1, 1, 1);

        Back = new QPushButton(Experiments);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);

        gridLayout_2->addWidget(Back, 6, 0, 1, 1);

        experimentEquipments = new QTableWidget(Experiments);
        experimentEquipments->setObjectName(QStringLiteral("experimentEquipments"));

        gridLayout_2->addWidget(experimentEquipments, 4, 4, 2, 1);

        label_9 = new QLabel(Experiments);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 3, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(224, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 6, 1, 1, 1);


        retranslateUi(Experiments);

        QMetaObject::connectSlotsByName(Experiments);
    } // setupUi

    void retranslateUi(QWidget *Experiments)
    {
        Experiments->setWindowTitle(QApplication::translate("Experiments", "Form", Q_NULLPTR));
        label_8->setText(QApplication::translate("Experiments", "LIST OF EQUIPMENTS:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Experiments", "EXPERIMENT:", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Experiments", "<<", Q_NULLPTR));
        label_2->setText(QApplication::translate("Experiments", "Name:", Q_NULLPTR));
        addExperiment->setText(QApplication::translate("Experiments", "Add Experiment", Q_NULLPTR));
        deleteExperiment->setText(QApplication::translate("Experiments", "Delete Experiment", Q_NULLPTR));
        label_4->setText(QApplication::translate("Experiments", "SUBJECT:", Q_NULLPTR));
        subjectNameLabel->setText(QString());
        label_10->setText(QApplication::translate("Experiments", "EXPERIMENTS", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Experiments", ">>", Q_NULLPTR));
        experimentName->setText(QString());
        Back->setText(QApplication::translate("Experiments", "BACK", Q_NULLPTR));
        label_9->setText(QApplication::translate("Experiments", "EXPERIMENT EQUIPMENTS:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Experiments: public Ui_Experiments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTS_H
