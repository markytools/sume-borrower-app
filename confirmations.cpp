#include "confirmations.h"
#include "ui_confirmations.h"

Confirmations::Confirmations(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Confirmations)
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

    ui->borrowEquipment->setColumnCount(2);
    ui->borrowEquipment->setHorizontalHeaderItem(0, quantityHeader);
    ui->borrowEquipment->setHorizontalHeaderItem(1, nameHeader);

    ui->borrowEquipment->setColumnWidth(0, 150);
    ui->borrowEquipment->setColumnWidth(1, 300);

    ui->borrowEquipment->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Confirmations::~Confirmations()
{
    delete ui;
}

void Confirmations::setBorrowerdata(BorrowerData *value)
{
    borrowerdata = value;
}

void Confirmations::display()
{
    ui->borrowEquipment->setRowCount(0);

    filteredBorrowedEquipments = new QVector<BorrowedEquipment*>();

    for(int i = 0; i < borrowerdata->getBorrowedequipment()->size(); i++){


        int toBorrow = borrowerdata->getBorrowedequipment()->at(i)->toBorrow;
        QString name = borrowerdata->getBorrowedequipment()->at(i)->equipmentName;


        if(toBorrow != 0){

            ui->borrowEquipment->setRowCount(ui->borrowEquipment->rowCount() + 1);

            filteredBorrowedEquipments->push_front(borrowerdata->getBorrowedequipment()->at(i));

//            cout << toBorrow << endl << name.toStdString() << endl;

//            cout << ui->borrowEquipment->rowCount() << endl;

            QTableWidgetItem *toBorrowItem = new QTableWidgetItem(QString::number(toBorrow));
            toBorrowItem->setTextAlignment(Qt::AlignCenter);
            toBorrowItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            QTableWidgetItem *nameItem = new QTableWidgetItem(name);
            nameItem->setTextAlignment(Qt::AlignCenter);
            nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->borrowEquipment->setItem(ui->borrowEquipment->rowCount() - 1, 0, toBorrowItem);
            ui->borrowEquipment->setItem(ui->borrowEquipment->rowCount() - 1, 1, nameItem);

        }
        else{

        }
//        cout << name.toStdString() << endl << toBorrow << endl;
    }
//    cout << borrowerdata->getName().toStdString() << endl << borrowerdata->getSection().toStdString() << endl
//         << borrowerdata->getStart().toString("MMM-dd-yyyy hh:mm").toStdString() << endl << borrowerdata->getEnd().toString("MMM-dd-yyyy hh:mm").toStdString() << endl;
//    for(int i = 0; i < borrowerdata->getStudent()->size(); i++){
//        cout << borrowerdata->getStudent()->at(i)->name.toStdString() << endl;
//    }
//    cout << filteredBorrowedEquipments->size() << endl;
//    for(int i = 0; i < filteredBorrowedEquipments->size(); i++){
//        cout << filteredBorrowedEquipments->at(i)->equipmentName.toStdString() << endl
//             << filteredBorrowedEquipments->at(i)->quantity << endl;
//    }
}

void Confirmations::on_Proceed_clicked()
{
    labLib->addBorrower(borrowerdata->getName().toUpper(), borrowerdata->getSubject().toUpper(), borrowerdata->getSection().toUpper(), borrowerdata->getStart(), borrowerdata->getEnd(), borrowerdata->getStudent(), filteredBorrowedEquipments);
    ListBorrowers *listborrowers = (ListBorrowers*)(stackWidget->widget(3));
    listborrowers->updateBorrowers();
    stackWidget->setCurrentIndex(3);
//    cout << labLib->getSqlError().toStdString() << endl;
    //    stackWidget->setCurrentIndex(3);
}

void Confirmations::on_Cancel_clicked()
{
    delete borrowerdata;
    stackWidget->setCurrentIndex(3);
}
