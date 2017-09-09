#include "subjectui.h"
#include "ui_subjectui.h"

SubjectUI::SubjectUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectUI)
{
    ui->setupUi(this);
}

SubjectUI::~SubjectUI()
{
    delete ui;
}
