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
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *addExperiment;
    QPushButton *deleteExperiment;
    QSpacerItem *horizontalSpacer_5;
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
    QSpacerItem *verticalSpacer_6;
    QPushButton *rightToLeft;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QLabel *label_11;
    QTableWidget *experimentEquipments;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *subjectNameLabel;
    QLabel *label_10;
    QTableWidget *experimentsTable;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *Back;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Experiments)
    {
        if (Experiments->objectName().isEmpty())
            Experiments->setObjectName(QStringLiteral("Experiments"));
        Experiments->resize(1089, 600);
        Experiments->setMinimumSize(QSize(800, 600));
        Experiments->setStyleSheet(QLatin1String("#Experiments{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        gridLayout_2 = new QGridLayout(Experiments);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Experiments);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Experiments);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font1.setPointSize(8);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QLatin1String("#lineEdit{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        addExperiment = new QPushButton(Experiments);
        addExperiment->setObjectName(QStringLiteral("addExperiment"));
        addExperiment->setFont(font);
        addExperiment->setStyleSheet(QLatin1String("#addExperiment{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_7->addWidget(addExperiment);

        deleteExperiment = new QPushButton(Experiments);
        deleteExperiment->setObjectName(QStringLiteral("deleteExperiment"));
        deleteExperiment->setFont(font);
        deleteExperiment->setStyleSheet(QLatin1String("#deleteExperiment{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_7->addWidget(deleteExperiment);


        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalSpacer_5 = new QSpacerItem(300, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

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
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("#label_7{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        experimentName = new QLabel(Experiments);
        experimentName->setObjectName(QStringLiteral("experimentName"));
        experimentName->setFont(font);
        experimentName->setStyleSheet(QLatin1String("#experimentName{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(experimentName);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_8 = new QLabel(Experiments);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        label_8->setStyleSheet(QLatin1String("#label_8{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);

        listEquipments = new QTableWidget(Experiments);
        listEquipments->setObjectName(QStringLiteral("listEquipments"));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Gothic Std B"));
        font3.setPointSize(10);
        listEquipments->setFont(font3);

        verticalLayout_4->addWidget(listEquipments);

        searchEdit = new QLineEdit(Experiments);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));
        searchEdit->setFont(font1);
        searchEdit->setStyleSheet(QLatin1String("#searchEdit{\n"
"background-color:white;\n"
"color: #eb4444;\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-color: #eb4444;\n"
"border-radius: 3px;\n"
"}"));

        verticalLayout_4->addWidget(searchEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        leftToRight = new QPushButton(Experiments);
        leftToRight->setObjectName(QStringLiteral("leftToRight"));
        leftToRight->setFont(font2);
        leftToRight->setStyleSheet(QLatin1String("#leftToRight{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_5->addWidget(leftToRight);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        rightToLeft = new QPushButton(Experiments);
        rightToLeft->setObjectName(QStringLiteral("rightToLeft"));
        rightToLeft->setFont(font2);
        rightToLeft->setStyleSheet(QLatin1String("#rightToLeft{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        verticalLayout_5->addWidget(rightToLeft);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(Experiments);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font4;
        font4.setFamily(QStringLiteral("Segoe UI Black"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_9->setFont(font4);

        verticalLayout_3->addWidget(label_9);

        label_11 = new QLabel(Experiments);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QLatin1String("#label_11{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_11);

        experimentEquipments = new QTableWidget(Experiments);
        experimentEquipments->setObjectName(QStringLiteral("experimentEquipments"));
        experimentEquipments->setFont(font3);

        verticalLayout_3->addWidget(experimentEquipments);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_4->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Experiments);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("#label_4{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        subjectNameLabel = new QLabel(Experiments);
        subjectNameLabel->setObjectName(QStringLiteral("subjectNameLabel"));
        subjectNameLabel->setFont(font);
        subjectNameLabel->setStyleSheet(QLatin1String("#subjectNameLabel{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(subjectNameLabel);


        verticalLayout_2->addLayout(horizontalLayout_3);

        label_10 = new QLabel(Experiments);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QLatin1String("#label_10{\n"
"background-color:transparent;\n"
"color: #eb4444;\n"
"background:none;\n"
"border:none;\n"
"}"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_10);

        experimentsTable = new QTableWidget(Experiments);
        experimentsTable->setObjectName(QStringLiteral("experimentsTable"));
        experimentsTable->setFont(font3);

        verticalLayout_2->addWidget(experimentsTable);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(450, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        Back = new QPushButton(Experiments);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setFont(font4);
        Back->setStyleSheet(QLatin1String("#Back{\n"
"background-color: #eb4444;\n"
"color: white;\n"
"border-style: outset;\n"
"border-radius: 3px;\n"
"padding: 3px;\n"
"}"));

        horizontalLayout_5->addWidget(Back);

        horizontalSpacer_2 = new QSpacerItem(450, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 3);


        retranslateUi(Experiments);

        QMetaObject::connectSlotsByName(Experiments);
    } // setupUi

    void retranslateUi(QWidget *Experiments)
    {
        Experiments->setWindowTitle(QApplication::translate("Experiments", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("Experiments", "Name:   ", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Experiments", "Press ENTER to add experiment name", Q_NULLPTR));
        addExperiment->setText(QApplication::translate("Experiments", "Add Experiment", Q_NULLPTR));
        deleteExperiment->setText(QApplication::translate("Experiments", "Delete Experiment", Q_NULLPTR));
        label_7->setText(QApplication::translate("Experiments", "EXPERIMENT:", Q_NULLPTR));
        experimentName->setText(QString());
        label_8->setText(QApplication::translate("Experiments", "LIST OF EQUIPMENTS", Q_NULLPTR));
        searchEdit->setPlaceholderText(QApplication::translate("Experiments", "Type keyword here to search equipment or leave it blank to show all", Q_NULLPTR));
        leftToRight->setText(QApplication::translate("Experiments", ">>", Q_NULLPTR));
        rightToLeft->setText(QApplication::translate("Experiments", "<<", Q_NULLPTR));
        label_9->setText(QString());
        label_11->setText(QApplication::translate("Experiments", "EXPERIMENT EQUIPMENTS", Q_NULLPTR));
        label_4->setText(QApplication::translate("Experiments", "SUBJECT:", Q_NULLPTR));
        subjectNameLabel->setText(QString());
        label_10->setText(QApplication::translate("Experiments", "EXPERIMENTS", Q_NULLPTR));
        Back->setText(QApplication::translate("Experiments", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Experiments: public Ui_Experiments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTS_H
