#include "changepass.h"
#include "ui_changepass.h"

changePass::changePass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changePass)
{
    ui->setupUi(this);
}

changePass::~changePass()
{
    delete ui;
}
