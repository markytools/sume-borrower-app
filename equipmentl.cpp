#include "equipmentl.h"
#include "ui_equipmentl.h"

EquipmentL::EquipmentL(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EquipmentL)
{
    ui->setupUi(this);
}

EquipmentL::~EquipmentL()
{
    delete ui;
}
