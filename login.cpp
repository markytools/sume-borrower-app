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
    QString username = labLib->getUserId();
    QString password = labLib->getPassword();
    QString user_input = ui->user_input->text();
    QString password_input = ui->password_input->text();

    if(username == user_input && password == password_input){
        ui->user_input->clear();
        ui->password_input->clear();
        stackWidget->setCurrentIndex(2);
    } else {
        labLib->showErrorMessageBox(false, "Error", "Username or password is incorrect. Please also check if caps lock is on.");
    }
}

void LogIn::on_changepass_clicked()
{
    stackWidget->setCurrentIndex(11);
}
