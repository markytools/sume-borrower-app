#include "anothersubject.h"
#include "ui_anothersubject.h"

AnotherSubject::AnotherSubject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnotherSubject)
{
    ui->setupUi(this);
}

AnotherSubject::~AnotherSubject()
{
    delete ui;
}
