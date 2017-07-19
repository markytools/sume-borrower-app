#include "borrowers.h"
#include "ui_borrowers.h"

Borrowers::Borrowers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Borrowers)
{
    ui->setupUi(this);
}

Borrowers::~Borrowers()
{
    delete ui;
}

void Borrowers::on_BorrowBotton_clicked()
{
    stackWidget->setCurrentIndex(1);

}
