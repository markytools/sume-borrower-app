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
    Borrowers *borrowers = new Borrowers(this);
    borrowers->stackWidget = stackWidget;
    Confirmations *confirmations = new Confirmations(this);
    confirmations->stackWidget = stackWidget;

    stackWidget->addWidget(borrowers);
    stackWidget->addWidget(confirmations);

    setCentralWidget(stackWidget);

    stackWidget->setCurrentIndex(0);

    QVector<Equipment*> *equipments = labLib->getEquipments();
    for (int i = 0; i < equipments->size(); i++) {
        Equipment* equipment = equipments->at(i);
        cout << equipment->toString().toStdString() << endl;
    }
}

SUMEBorrower::~SUMEBorrower()
{
    delete ui;
}
