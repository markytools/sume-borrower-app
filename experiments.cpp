#include "experiments.h"
#include "ui_experiments.h"

Experiments::Experiments(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Experiments)
{
    ui->setupUi(this);
}

Experiments::~Experiments()
{
    delete ui;
}
