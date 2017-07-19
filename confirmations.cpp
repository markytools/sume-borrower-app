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
