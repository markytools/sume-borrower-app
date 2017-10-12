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

void changePass::on_back_clicked()
{
    stackWidget->setCurrentIndex(10);
}

void changePass::on_submit_clicked()
{
    QString username = labLib->getUserId();
    QString oldpassword = labLib->getPassword();
    QString user_input = ui->user_input->text();
    QString oldpassword_input = ui->old_password->text();
    QString newpassword_input = ui->new_password->text();

    if(username == user_input && oldpassword == oldpassword_input){
        labLib->setPassword(newpassword_input);
        ui->user_input->clear();
        ui->old_password->clear();
        ui->new_password->clear();
        stackWidget->setCurrentIndex(10);
    } else {
        labLib->showErrorMessageBox(false, "Error", "Username or old password is incorrect. Please also check is caps lock is on.");
    }
}
