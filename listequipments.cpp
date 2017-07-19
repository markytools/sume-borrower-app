#include "listequipments.h"
#include "ui_listequipments.h"

ListEquipments::ListEquipments(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListEquipments)
{
    ui->setupUi(this);
}

ListEquipments::~ListEquipments()
{
    delete ui;
}
