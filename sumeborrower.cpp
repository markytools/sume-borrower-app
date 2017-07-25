#include "sumeborrower.h"
#include "ui_sumeborrower.h"

SUMEBorrower::SUMEBorrower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SUMEBorrower)
{
    ui->setupUi(this);

    //initialize database
    LaboratoryLib *labLib = new LaboratoryLib();
    labLib->initDatabase();
    stackWidget = new QStackedWidget();
//    Borrowers *borrowers = new Borrowers(this);
//    borrowers->stackWidget = stackWidget;
//    Confirmations *confirmations = new Confirmations(this);
//    confirmations->stackWidget = stackWidget;
    ListEquipments *listequipments = new ListEquipments(this);
    listequipments->stackWidget = stackWidget;
    listequipments->labLib = labLib;
    Information *information = new Information(this);
    information->stackWidget = stackWidget;
//    stackWidget->addWidget(borrowers);
//    stackWidget->addWidget(confirmations);
    stackWidget->addWidget(listequipments); // Index 0
    stackWidget->addWidget(information); // Index 1

    setCentralWidget(stackWidget);

    stackWidget->setCurrentIndex(0);
}

SUMEBorrower::~SUMEBorrower()
{
    delete ui;
}
