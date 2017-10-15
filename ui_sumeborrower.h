/********************************************************************************
** Form generated from reading UI file 'sumeborrower.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMEBORROWER_H
#define UI_SUMEBORROWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SUMEBorrower
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SUMEBorrower)
    {
        if (SUMEBorrower->objectName().isEmpty())
            SUMEBorrower->setObjectName(QStringLiteral("SUMEBorrower"));
        SUMEBorrower->resize(400, 300);
        SUMEBorrower->setStyleSheet(QLatin1String("#SUMEBorrower{\n"
"background-color:white;\n"
"background:none;\n"
"border:none;\n"
"}"));
        centralWidget = new QWidget(SUMEBorrower);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SUMEBorrower->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SUMEBorrower);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        SUMEBorrower->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SUMEBorrower);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SUMEBorrower->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SUMEBorrower);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SUMEBorrower->setStatusBar(statusBar);

        retranslateUi(SUMEBorrower);

        QMetaObject::connectSlotsByName(SUMEBorrower);
    } // setupUi

    void retranslateUi(QMainWindow *SUMEBorrower)
    {
        SUMEBorrower->setWindowTitle(QApplication::translate("SUMEBorrower", "SUMEBorrower", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SUMEBorrower: public Ui_SUMEBorrower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMEBORROWER_H
