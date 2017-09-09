#include "information.h"
#include "ui_information.h"

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    ui->quantityLine->setValidator(new QIntValidator);
}

void Information::edit(QString name)
{
    Equipment *equipment = labLib->getEquipment(name);
    ui->nameLine->setText(name);
    ui->nameLine->setReadOnly(true);
    ui->quantityLine->setText(QString::number(equipment->quantity));
    ui->serialLine->setText(equipment->serial);
    ui->locationLine->setText(equipment->location);
    ui->propertyLine->setText(equipment->property);
    ui->statusLine->setText(equipment->status);
    ui->remarksLine->setText(equipment->remarks);
    updateEquipments();
}

Information::~Information()
{
    delete ui;
}

void Information::on_BackButton_clicked()
{
    ui->nameLine->clear();
    ui->quantityLine->clear();
    ui->serialLine->clear();
    ui->propertyLine->clear();
    ui->statusLine->clear();
    ui->remarksLine->clear();
    stackWidget->setCurrentIndex(0);
}

void Information::on_OKButton_clicked()
{
    if(addMode == true)
    {
        labLib->addEquipment(ui->nameLine->text().toUpper(), ui->quantityLine->text().toInt(), ui->serialLine->text().toUpper(), ui->propertyLine->text().toUpper(), ui->statusLine->text().toUpper(), ui->locationLine->text().toUpper(), ui->remarksLine->text().toUpper());
        ui->nameLine->clear();
        ui->quantityLine->clear();
        ui->serialLine->clear();
        ui->propertyLine->clear();
        ui->statusLine->clear();
        ui->locationLine->clear();
        ui->remarksLine->clear();
        stackWidget->setCurrentIndex(0);
        updateEquipments();
    }
    if(addMode == false)
    {
        labLib->editEquipment(ui->nameLine->text().toUpper(), ui->quantityLine->text().toInt(), ui->serialLine->text().toUpper(), ui->propertyLine->text().toUpper(), ui->statusLine->text().toUpper(), ui->locationLine->text().toUpper(), ui->remarksLine->text().toUpper());
        ui->nameLine->clear();
        ui->quantityLine->clear();
        ui->serialLine->clear();
        ui->propertyLine->clear();
        ui->locationLine->clear();
        ui->statusLine->clear();
        ui->remarksLine->clear();
        stackWidget->setCurrentIndex(0);
        updateEquipments();
    }
}

void Information::setAddMode(bool value)
{
    addMode = value;
    ui->nameLine->setReadOnly(!value);
}

void Information::updateEquipments()
{
    ListEquipments *listequipments = (ListEquipments*)(stackWidget->widget(0));
    listequipments->updateEquipments();
}
