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
}

SUMEBorrower::~SUMEBorrower()
{
    delete ui;
}
