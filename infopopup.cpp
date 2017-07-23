#include "infopopup.h"
#include "ui_infopopup.h"

Infopopup::Infopopup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Infopopup)
{
    ui->setupUi(this);
}

Infopopup::~Infopopup()
{
    delete ui;
}
