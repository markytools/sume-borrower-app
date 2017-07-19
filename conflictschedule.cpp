#include "conflictschedule.h"
#include "ui_conflictschedule.h"

ConflictSchedule::ConflictSchedule(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConflictSchedule)
{
    ui->setupUi(this);
}

ConflictSchedule::~ConflictSchedule()
{
    delete ui;
}
