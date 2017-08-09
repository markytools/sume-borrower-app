#include "borrowers.h"
#include "ui_borrowers.h"

Borrowers::Borrowers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Borrowers)
{
    ui->setupUi(this);

    QTableWidgetItem *quantityHeader = new QTableWidgetItem("QUANTITY");
    quantityHeader->setTextAlignment(Qt::AlignCenter);
    quantityHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    quantityHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *nameHeader = new QTableWidgetItem("EQUIPMENT NAME");
    nameHeader->setTextAlignment(Qt::AlignCenter);
    nameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    nameHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->listEquipments->setColumnCount(2);
    ui->listEquipments->setHorizontalHeaderItem(0, quantityHeader);
    ui->listEquipments->setHorizontalHeaderItem(1, nameHeader);

    ui->listEquipments->setColumnWidth(0, 150);
    ui->listEquipments->setColumnWidth(1, 300);

    ui->listEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->borrowEquipments->setColumnCount(2);
    ui->borrowEquipments->setHorizontalHeaderItem(0, quantityHeader);
    ui->borrowEquipments->setHorizontalHeaderItem(1, nameHeader);

    ui->borrowEquipments->setColumnWidth(0, 150);
    ui->borrowEquipments->setColumnWidth(1, 300);

    ui->borrowEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    QVector<Equipment*> *equipments = labLib->getEquipments();
    ui->borrowEquipments->setRowCount(0);

    for(int row = 0; row < equipments->size(); row++)
    {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;

        ui->listEquipments->setRowCount(ui->listEquipments->rowCount() + 1);

        QTableWidgetItem *quantityItem = new QTableWidgetItem(QString::number(quantity));
        quantityItem->setTextAlignment(Qt::AlignCenter);
        quantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, quantityItem);
        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
    }
}

Borrowers::~Borrowers()
{
    delete ui;
}

void Borrowers::on_Back_clicked()
{
    stackWidget->setCurrentIndex(5);
}

void Borrowers::setBorrower(Borrower *value)
{
    borrower = value;
}

void Borrowers::setStudents(QVector<Student *> *value)
{
    students = value;
}

void Borrowers::on_leftToRight_clicked()
{
    ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() + 1);

    int quantity = 1;
    QString name = "Test";
    QTableWidgetItem *quantityItem = new QTableWidgetItem(QString::number(quantity));
    quantityItem->setTextAlignment(Qt::AlignCenter);
    quantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    QTableWidgetItem *nameItem = new QTableWidgetItem(name);
    nameItem->setTextAlignment(Qt::AlignCenter);
    nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

    ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, quantityItem);
    ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
}
