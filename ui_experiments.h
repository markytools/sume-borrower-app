/********************************************************************************
** Form generated from reading UI file 'experiments.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *addExperiment;
    QPushButton *deleteExperiment;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *experimentName;
    QLabel *label_8;
    QTableWidget *listEquipments;
    QLineEdit *searchEdit;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *leftToRight;
    QPushButton *rightToLeft;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_11;
    QTableWidget *experimentEquipments;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *subjectNameLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QTableWidget *experimentsTable;

    void setupUi(QWidget *Experiments)
    {
        if (Experiments->objectName().isEmpty())
            Experiments->setObjectName(QStringLiteral("Experiments"));
        Experiments->resize(1088, 487);
        Experiments->setMinimumSize(QSize(1088, 487));
        gridLayout_2 = new QGridLayout(Experiments);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Experiments);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(Experiments);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7);

        experimentName = new QLabel(Experiments);
        experimentName->setObjectName(QStringLiteral("experimentName"));
        experimentName->setFont(font);

        horizontalLayout_2->addWidget(experimentName);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_8 = new QLabel(Experiments);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_4->addWidget(label_8);

        listEquipments = new QTableWidget(Experiments);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));

        verticalLayout_4->addWidget(listEquipments);

        searchEdit = new QLineEdit(Experiments);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        verticalLayout_4->addWidget(searchEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        leftToRight = new QPushButton(Experiments);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font);

        verticalLayout_5->addWidget(leftToRight);

        rightToLeft = new QPushButton(Experiments);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        rightToLeft->setFont(font);

        verticalLayout_5->addWidget(rightToLeft);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(Experiments);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        verticalLayout_3->addWidget(label_9);

        label_11 = new QLabel(Experiments);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);

        verticalLayout_3->addWidget(label_11);

        experimentEquipments = new QTableWidget(Experiments);
        experimentEquipments->setObjectName(QStringLiteral("experimentEquipments"));

        verticalLayout_3->addWidget(experimentEquipments);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(224, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 2, 1);

        Back = new QPushButton(Experiments);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font);

        gridLayout_2->addWidget(Back, 2, 0, 3, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 2);


        retranslateUi(Experiments);

        QMetaObject::connectSlotsByName(Experiments);
    } // setupUi

    void retranslateUi(QWidget *Experiments)
    {
        Experiments->setWindowTitle(QApplication::translate("Experiments", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("Experiments", "Name:", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Experiments", "Press ENTER to add experiment name", Q_NULLPTR));
        addExperiment->setText(QApplication::translate("Experiments", "ADD EXPERIMENT", Q_NULLPTR));
        deleteExperiment->setText(QApplication::translate("Experiments", "DELETE EXPERIMENT", Q_NULLPTR));
        label_7->setText(QApplication::translate("Experiments", "EXPERIMENT:", Q_NULLPTR));
        experimentName->setText(QString());
        label_8->setText(QApplication::translate("Experiments", "LIST OF EQUIPMENTS:", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("Experiments", "Type keyword here to search equipment or leave it blank to show all", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Experiments", ">>", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Experiments", "<<", Q_NULLPTR));
        label_9->setText(QString());
        label_11->setText(QApplication::translate("Experiments", "EXPERIMENT EQUIPMENTS:", Q_NULLPTR));
        Back->setText(QApplication::translate("Experiments", "BACK", Q_NULLPTR));
        label_4->setText(QApplication::translate("Experiments", "SUBJECT:", Q_NULLPTR));
        subjectNameLabel->setText(QString());
        label_10->setText(QApplication::translate("Experiments", "EXPERIMENTS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Experiments: public Ui_Experiments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTS_H
