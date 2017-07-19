#include "borrowingd.h"
#include "ui_borrowingd.h"

BorrowingD::BorrowingD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowingD)
{
    ui->setupUi(this);
}

BorrowingD::~BorrowingD()
{
    delete ui;
}
