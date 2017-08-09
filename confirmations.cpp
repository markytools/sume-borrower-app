#include "confirmations.h"
#include "ui_confirmations.h"

Confirmations::Confirmations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirmations)
{
    ui->setupUi(this);
}

Confirmations::~Confirmations()
{
    delete ui;
}

void Confirmations::setEquipment(QVector<Equipment *> *value)
{
    equipment = value;
}

void Confirmations::setStudents(QVector<Student *> *value)
{
    students = value;
}

void Confirmations::setBorrower(Borrower *value)
{
    borrower = value;
}
