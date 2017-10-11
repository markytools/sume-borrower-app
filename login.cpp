#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_login_clicked()
{
    stackWidget->setCurrentIndex(2);
}

void LogIn::on_changepass_clicked()
{
    stackWidget->setCurrentIndex(11);
}
