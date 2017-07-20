#include "homedisplay.h"
#include "ui_homedisplay.h"

HomeDisplay::HomeDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeDisplay)
{
    ui->setupUi(this);
}

HomeDisplay::~HomeDisplay()
{
    delete ui;
}
