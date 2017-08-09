#include "borrowers.h"
#include "ui_borrowers.h"

Borrowers::Borrowers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Borrowers)
{
    ui->setupUi(this);
    borrowItems = new QVector<BorrowItems*>();
//    borrowItems->push_front(new BorrowItems("Test", 1, 1));
    QTableWidgetItem *quantityHeader = new QTableWidgetItem("QUANTITY");
    quantityHeader->setTextAlignment(Qt::AlignCenter);
    quantityHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    quantityHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *nameHeader = new QTableWidgetItem("EQUIPMENT NAME");
    nameHeader->setTextAlignment(Qt::AlignCenter);
    nameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    nameHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *borrowedHeader = new QTableWidgetItem("BORROWED");
    borrowedHeader->setTextAlignment(Qt::AlignCenter);
    borrowedHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    borrowedHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->listEquipments->setColumnCount(3);
    ui->listEquipments->setHorizontalHeaderItem(0, quantityHeader);
    ui->listEquipments->setHorizontalHeaderItem(1, nameHeader);
    ui->listEquipments->setHorizontalHeaderItem(2, borrowedHeader);

    ui->listEquipments->setColumnWidth(0, 150);
    ui->listEquipments->setColumnWidth(1, 300);
    ui->listEquipments->setColumnWidth(2, 150);


    ui->listEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->borrowEquipments->setColumnCount(2);
    ui->borrowEquipments->setHorizontalHeaderItem(0, borrowedHeader);
    ui->borrowEquipments->setHorizontalHeaderItem(1, nameHeader);

    ui->borrowEquipments->setColumnWidth(0, 150);
    ui->borrowEquipments->setColumnWidth(1, 300);

    ui->borrowEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    QVector<Equipment*> *equipments = labLib->getEquipments();

    ui->borrowEquipments->setRowCount(0);

    for(int row = 0; row < borrowItems->size(); row++)
    {
        BorrowItems *borrowItem = borrowItems->at(row);

        int borrowed = borrowItem->borrowed;
        QString name = borrowItem->name;

        ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() + 1);

        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, borrowedItem);
        ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
    }

    for(int row = 0; row < equipments->size(); row++)
    {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;
        int borrowed = equipment->borrowed;

        ui->listEquipments->setRowCount(ui->listEquipments->rowCount() + 1);

        QTableWidgetItem *quantityItem = new QTableWidgetItem(QString::number(quantity));
        quantityItem->setTextAlignment(Qt::AlignCenter);
        quantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, quantityItem);
        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, borrowedItem);
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

void Borrowers::updateBorrowItems(bool equipmentEnlisted)
{
    ui->borrowEquipments->clearContents();

    if(equipmentEnlisted){
        for(int row = 0; row < borrowItems->size(); row++)
        {
            BorrowItems *borrowItem = borrowItems->at(row);

            int borrowed = borrowItem->borrowed;
            QString name = borrowItem->name;

            ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount());

            QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
            borrowedItem->setTextAlignment(Qt::AlignCenter);
            borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            QTableWidgetItem *nameItem = new QTableWidgetItem(name);
            nameItem->setTextAlignment(Qt::AlignCenter);
            nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, borrowedItem);
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
        }
    }

    else{
        for(int row = 0; row < borrowItems->size(); row++)
        {
            BorrowItems *borrowItem = borrowItems->at(row);

            int borrowed = borrowItem->borrowed;
            QString name = borrowItem->name;

            ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() + 1);

            QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
            borrowedItem->setTextAlignment(Qt::AlignCenter);
            borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            QTableWidgetItem *nameItem = new QTableWidgetItem(name);
            nameItem->setTextAlignment(Qt::AlignCenter);
            nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, borrowedItem);
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
        }
    }
}

void Borrowers::setStudents(QVector<Student *> *value)
{
    students = value;
}

void Borrowers::on_leftToRight_clicked()
{
    int row = ui->listEquipments->currentRow();
    bool equipmentEnlisted = false;

    for (int i = 0; i < borrowItems->size(); i++){
        BorrowItems *item = borrowItems->at(i);
        if(item->name == ui->listEquipments->item(row, 1)->text()){
            equipmentEnlisted = true;
            item->borrowed = item->borrowed + 1;
            break;
        }
    }
    if(equipmentEnlisted){

    }
    else{
        QString borrowName = ui->listEquipments->item(row, 1)->text();
        int borrowQuantity = ui->listEquipments->item(row, 0)->text().toInt();
        int borrowBorrowed = 1;
        borrowItems->push_front(new BorrowItems(borrowName, borrowBorrowed, borrowQuantity));
    }
    updateBorrowItems(equipmentEnlisted);
}
