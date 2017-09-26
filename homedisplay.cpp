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

void HomeDisplay::on_Borrowing_clicked()
{
    stackWidget->setCurrentIndex(3);
}

void HomeDisplay::on_Equipments_clicked()
{
    stackWidget->setCurrentIndex(0);
}

void HomeDisplay::on_Subjects_clicked()
{
    stackWidget->setCurrentIndex(8);
}
