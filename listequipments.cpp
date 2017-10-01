#include "listequipments.h"
#include "ui_listequipments.h"

ListEquipments::ListEquipments(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListEquipments)
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
    QTableWidgetItem *serialHeader = new QTableWidgetItem("SERIAL TAG");
    serialHeader->setTextAlignment(Qt::AlignCenter);
    serialHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    serialHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *propertyHeader = new QTableWidgetItem("EQUIPMENT PROPERTY");
    propertyHeader->setTextAlignment(Qt::AlignCenter);
    propertyHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    propertyHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *statusHeader = new QTableWidgetItem("OPERATIONAL STATUS");
    statusHeader->setTextAlignment(Qt::AlignCenter);
    statusHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    statusHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *locationHeader = new QTableWidgetItem("LOCATION");
    locationHeader->setTextAlignment(Qt::AlignCenter);
    locationHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    locationHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *remarksHeader = new QTableWidgetItem("REMARKS");
    remarksHeader->setTextAlignment(Qt::AlignCenter);
    remarksHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    remarksHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *borrowedHeader = new QTableWidgetItem("TIMES BORROWED");
    borrowedHeader->setTextAlignment(Qt::AlignCenter);
    borrowedHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    borrowedHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->equipmentTable->setColumnCount(8);
    ui->equipmentTable->setHorizontalHeaderItem(0, quantityHeader);
    ui->equipmentTable->setHorizontalHeaderItem(1, nameHeader);
    ui->equipmentTable->setHorizontalHeaderItem(2, borrowedHeader);
    ui->equipmentTable->setHorizontalHeaderItem(3, serialHeader);
    ui->equipmentTable->setHorizontalHeaderItem(4, propertyHeader);
    ui->equipmentTable->setHorizontalHeaderItem(5, statusHeader);
    ui->equipmentTable->setHorizontalHeaderItem(6, locationHeader);
    ui->equipmentTable->setHorizontalHeaderItem(7, remarksHeader);

    ui->equipmentTable->setColumnWidth(0, 150);
    ui->equipmentTable->setColumnWidth(1, 300);
    ui->equipmentTable->setColumnWidth(2, 250);
    ui->equipmentTable->setColumnWidth(3, 300);
    ui->equipmentTable->setColumnWidth(4, 300);
    ui->equipmentTable->setColumnWidth(5, 300);
    ui->equipmentTable->setColumnWidth(6, 300);
    ui->equipmentTable->setColumnWidth(7, 250);

    ui->equipmentTable->setSelectionBehavior(QAbstractItemView::SelectRows);

//    connect(ui->equipmentTable->selectionModel(),&QItemSelectionModel::selectionChanged,[=]() {//with lambda
//        if (ui->equipmentTable->selectionModel()->selectedRows().size() > 2) {
//            QList<QModelIndex> lst = ui->equipmentTable->selectionModel()->selectedRows();
//            ui->equipmentTable->selectionModel()->select(lst.first(), QItemSelectionModel::Deselect);
//        }
//    });


    QVector<Equipment*> *equipments = labLib->getEquipments();
    ui->equipmentTable->setRowCount(0);

    for(int row = 0; row < equipments->size(); row++)
    {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;
        QString serial = equipment->serial;
        QString property = equipment->property;
        QString status = equipment->status;
        QString location = equipment->location;
        QString remarks = equipment->remarks;
        int borrowed = equipment->borrowed;

        ui->equipmentTable->setRowCount(ui->equipmentTable->rowCount() + 1);

        QTableWidgetItem *quantityItem = new QTableWidgetItem(QString::number(quantity));
        quantityItem->setTextAlignment(Qt::AlignCenter);
        quantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *serialItem = new QTableWidgetItem(serial);
        serialItem->setTextAlignment(Qt::AlignCenter);
        serialItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *propertyItem = new QTableWidgetItem(property);
        propertyItem->setTextAlignment(Qt::AlignCenter);
        propertyItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *statusItem = new QTableWidgetItem(status);
        statusItem->setTextAlignment(Qt::AlignCenter);
        statusItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *locationItem = new QTableWidgetItem(location);
        locationItem->setTextAlignment(Qt::AlignCenter);
        locationItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *remarksItem = new QTableWidgetItem(remarks);
        remarksItem->setTextAlignment(Qt::AlignCenter);
        remarksItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 0, quantityItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 1, nameItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 2, borrowedItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 3, serialItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 4, propertyItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 5, statusItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 6, locationItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 7, remarksItem);
    }
}

ListEquipments::~ListEquipments()
{
    delete ui;
}

void ListEquipments::on_AddButton_clicked()
{
    Information *information = (Information*)(stackWidget->widget(1));
    information->setAddMode(true);
    stackWidget->setCurrentIndex(1);
}

void ListEquipments::on_EditButton_clicked()
{
    if(ui->equipmentTable->selectedItems().size() != 0)
    {
        int row = ui->equipmentTable->currentRow();
        QTableWidgetItem *item = ui->equipmentTable->item(row, 1);
        QTableWidgetItem *timeBorrowedItem = ui->equipmentTable->item(row, 2);
        QString selectedName = item->text();
        int timesBorrowed = timeBorrowedItem->text().toInt();

        if (timesBorrowed > 0) {
            labLib->showErrorMessageBox(false, "Request Error", "You cannot edit an equipment when it is borrowed");
            return;
        }

        Information *information = (Information*)(stackWidget->widget(1));
        information->setAddMode(false);
        information->edit(selectedName);
        stackWidget->setCurrentIndex(1);
    }
}

void ListEquipments::on_RemoveButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove Equipment", "Are you sure you want to remove equipment?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        if(ui->equipmentTable->selectedItems().size() != 0)
        {
            int row = ui->equipmentTable->currentRow();

            QTableWidgetItem *item = ui->equipmentTable->item(row, 1);
            QTableWidgetItem *timeBorrowedItem = ui->equipmentTable->item(row, 2);
            QString selectedName = item->text();
            int timesBorrowed = timeBorrowedItem->text().toInt();
            if (timesBorrowed > 0) {
                labLib->showErrorMessageBox(false, "Request Error", "You cannot remove an equipment when it is borrowed");
                return;
            }

            labLib->deleteEquipment(selectedName);
            updateEquipments();
        }
    }
}

void ListEquipments::on_RemoveAllButton_clicked()
{
    for (int i = 0; i < ui->equipmentTable->rowCount(); i++) {
        QTableWidgetItem *timeBorrowedItem = ui->equipmentTable->item(i, 2);
        int timesBorrowed = timeBorrowedItem->text().toInt();
        if (timesBorrowed > 0) {
            labLib->showErrorMessageBox(false, "Request Error", "Some equipments are currently being borrowed");
            return;
        }
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove All Equipments", "Are you sure you want to remove all equipments?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        labLib->deleteAllEquipments();
        updateEquipments();
    }
}

void ListEquipments::updateEquipments()
{
    QVector<Equipment*> *equipments = labLib->getEquipments();
    ui->equipmentTable->setRowCount(0);

    for(int row = 0; row < equipments->size(); row++)
    {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;
        QString serial = equipment->serial;
        QString property = equipment->property;
        QString status = equipment->status;
        QString location = equipment->location;
        QString remarks = equipment->remarks;
        int borrowed = equipment->borrowed;

        ui->equipmentTable->setRowCount(ui->equipmentTable->rowCount() + 1);

        QTableWidgetItem *quantityItem = new QTableWidgetItem(QString::number(quantity));
        quantityItem->setTextAlignment(Qt::AlignCenter);
        quantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *serialItem = new QTableWidgetItem(serial);
        serialItem->setTextAlignment(Qt::AlignCenter);
        serialItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *propertyItem = new QTableWidgetItem(property);
        propertyItem->setTextAlignment(Qt::AlignCenter);
        propertyItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *statusItem = new QTableWidgetItem(status);
        statusItem->setTextAlignment(Qt::AlignCenter);
        statusItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *locationItem = new QTableWidgetItem(location);
        locationItem->setTextAlignment(Qt::AlignCenter);
        locationItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *remarksItem = new QTableWidgetItem(remarks);
        remarksItem->setTextAlignment(Qt::AlignCenter);
        remarksItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 0, quantityItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 1, nameItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 2, borrowedItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 3, serialItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 4, propertyItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 5, statusItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 6, locationItem);
        ui->equipmentTable->setItem(ui->equipmentTable->rowCount() - 1, 7, remarksItem);
    }
}

void ListEquipments::on_Back_clicked()
{
    stackWidget->setCurrentIndex(2);
}
