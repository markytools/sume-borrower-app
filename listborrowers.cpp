#include "listborrowers.h"
#include "ui_listborrowers.h"

ListBorrowers::ListBorrowers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListBorrowers)
{
    ui->setupUi(this);
}

ListBorrowers::~ListBorrowers()
{
    delete ui;
}
