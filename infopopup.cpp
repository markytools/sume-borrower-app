#include "infopopup.h"
#include "ui_infopopup.h"

Infopopup::Infopopup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Infopopup)
{
    ui->setupUi(this);
    ui->groupName->setReadOnly(true);
    ui->subject->setReadOnly(true);
    ui->section->setReadOnly(true);
    ui->instructor->setReadOnly(true);
    ui->startTime->setReadOnly(true);
    ui->endTime->setReadOnly(true);
    returnedCheckBoxes = new QVector<QCheckBox*>();
}

Infopopup::~Infopopup()
{
    delete ui;
}

void Infopopup::on_Back_clicked()
{
    stackWidget->setCurrentIndex(3);
}

void Infopopup::setSection(const QString &value)
{
    section = value;
}

void Infopopup::setSubject(const QString &value)
{
    subject = value;
}

void Infopopup::setGroupName(const QString &value)
{
    groupName = value;
}

Borrower *Infopopup::getBorrower() const
{
    return borrower;
}

void Infopopup::display(QString groupName, QString groupSubject, QString groupSection, QString groupInstructor,
                        QString groupStartTime, QString groupEndTime, int hasEndTime)
{
    this->groupName = groupName;
    this->subject = groupSubject;
    this->section = groupSection;
    this->instructor = groupInstructor;
    this->start = groupStartTime;
    this->end = groupEndTime;
    this->hasEndTime = hasEndTime;

    returnedCheckBoxes->clear();

    QTableWidgetItem *equipmentNameHeader = new QTableWidgetItem("EQUIPMENT NAME");
    equipmentNameHeader->setTextAlignment(Qt::AlignCenter);
    equipmentNameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    equipmentNameHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *quantityHeader = new QTableWidgetItem("BORROWED");
    quantityHeader->setTextAlignment(Qt::AlignCenter);
    quantityHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    quantityHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *returnedHeader = new QTableWidgetItem("RETURNED");
    returnedHeader->setTextAlignment(Qt::AlignCenter);
    returnedHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    returnedHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *studentsHeader = new QTableWidgetItem("STUDENTS");
    studentsHeader->setTextAlignment(Qt::AlignCenter);
    studentsHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    studentsHeader->setFont(QFont("helvetica", 12, QFont::Bold));


    ui->borrowedEquipmentTable->setColumnCount(3);
    ui->borrowedEquipmentTable->setHorizontalHeaderItem(0, equipmentNameHeader);
    ui->borrowedEquipmentTable->setHorizontalHeaderItem(1, quantityHeader);
    ui->borrowedEquipmentTable->setHorizontalHeaderItem(2, returnedHeader);

    ui->borrowedEquipmentTable->setColumnWidth(0, 200);
    ui->borrowedEquipmentTable->setColumnWidth(1, 150);
    ui->borrowedEquipmentTable->setColumnWidth(2, 120);

    ui->borrowedEquipmentTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->borrowedEquipmentTable->setRowCount(0);

    ui->membersTable->setColumnCount(1);
    ui->membersTable->setHorizontalHeaderItem(0, studentsHeader);

    ui->membersTable->setColumnWidth(0, 250);

    ui->membersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->membersTable->setRowCount(0);

    this->borrowedEquipments = labLib->getBorrowedEquipments(groupName, groupSubject, groupSection, groupInstructor);
    this->students = labLib->getStudents(groupName, groupSubject, groupSection, groupInstructor);

    bool allReturned = true;
    for(int row = 0; row < borrowedEquipments->size(); row++)
    {
        BorrowedEquipment *borrowedequipment = borrowedEquipments->at(row);

        QString equipmentName = borrowedequipment->equipmentName;
        int borrowedQuantity = borrowedequipment->toBorrow;

        ui->borrowedEquipmentTable->setRowCount(ui->borrowedEquipmentTable->rowCount() + 1);

        QTableWidgetItem *equipmentNameItem = new QTableWidgetItem(equipmentName);
        equipmentNameItem->setTextAlignment(Qt::AlignCenter);
        equipmentNameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *borrowedQuantityItem = new QTableWidgetItem(QString::number(borrowedQuantity));
        borrowedQuantityItem->setTextAlignment(Qt::AlignCenter);
        borrowedQuantityItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);


        QCheckBox *returnedCB = new QCheckBox(this);
        returnedCB->setObjectName("returned" + equipmentName);
        int returned = labLib->isBorrowedEquipmentReturned(groupName, groupSubject, groupSection, groupInstructor, equipmentName);
        if (returned) {
            returnedCB->setChecked(true);
        }
        else {
            returnedCB->setChecked(false);
            allReturned = false;
        }

        QSignalMapper *mapper = new QSignalMapper(this);
        connect(returnedCB, SIGNAL(released()), mapper, SLOT(map()));
        BorrowedEquipmentData *dateData = new BorrowedEquipmentData(groupName, groupSubject, groupSection, groupInstructor,
                                                                    equipmentName, returnedCB);
        mapper->setMapping(returnedCB, dateData);
        connect(mapper, SIGNAL(mapped(QObject*)), this, SLOT(setReturnedCheckBox(QObject*)));

        QWidget* pWidget = new QWidget();
        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(returnedCB);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);

        returnedCheckBoxes->push_front(returnedCB);


        ui->borrowedEquipmentTable->setItem(ui->borrowedEquipmentTable->rowCount() - 1, 0, equipmentNameItem);
        ui->borrowedEquipmentTable->setItem(ui->borrowedEquipmentTable->rowCount() - 1, 1, borrowedQuantityItem);
        ui->borrowedEquipmentTable->setCellWidget(ui->borrowedEquipmentTable->rowCount() - 1, 2, pWidget);
    }

    for(int row = 0; row < students->size(); row++)
    {
        Student *student = students->at(row);

        QString studentName = student->name;

        ui->membersTable->setRowCount(ui->membersTable->rowCount() + 1);

        QTableWidgetItem *studentNameItem = new QTableWidgetItem(studentName);
        studentNameItem->setTextAlignment(Qt::AlignCenter);
        studentNameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->membersTable->setItem(ui->membersTable->rowCount() - 1, 0, studentNameItem);
    }
    ui->groupName->setText(groupName);
    ui->subject->setText(groupSubject);
    ui->section->setText(groupSection);
    ui->instructor->setText(groupInstructor);
    ui->startTime->setText(groupStartTime);
    if (hasEndTime == 1) ui->endTime->setText(groupEndTime);
    else ui->endTime->setText("");

    if (allReturned) {
        ui->itemsReturned->setStyleSheet("font-weight: bold; color: #00e616;");
        ui->itemsReturned->setText("All items have been returned.");
    }
    else {
        ui->itemsReturned->setStyleSheet("font-weight: bold; color: #ff0000;");
        ui->itemsReturned->setText("Some of the equipments have not been returned yet!");
    }

    if (allReturned) ui->Delete->setDisabled(false);
    else ui->Delete->setDisabled(true);
}

void Infopopup::on_Delete_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Borrowers", "Are you sure you want to delete borrowers?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        labLib->deleteBorrower(ui->groupName->text(),ui->subject->text(),ui->section->text(), ui->instructor->text());
        ListBorrowers *listborrowers = (ListBorrowers*)(stackWidget->widget(3));
        listborrowers->updateBorrowers();
        stackWidget->setCurrentIndex(3);
    }
}

void Infopopup::setReturnedCheckBox(QObject *borrowedEquipmentData)
{
    BorrowedEquipmentData *bEquipData = (BorrowedEquipmentData*)(borrowedEquipmentData);
    if (bEquipData->returned->isChecked()) {
        labLib->setBorrowedEquipmentReturn(bEquipData->borrowerName, bEquipData->subject, bEquipData->section,
                                           bEquipData->instructor, bEquipData->equipmentName, 1);
    }
    else {
        labLib->setBorrowedEquipmentReturn(bEquipData->borrowerName, bEquipData->subject, bEquipData->section,
                                           bEquipData->instructor, bEquipData->equipmentName, 0);
    }


   bool allReturned = allEquipmentsReturned();

   if (allReturned) ui->Delete->setDisabled(false);
   else ui->Delete->setDisabled(true);
}

bool Infopopup::allEquipmentsReturned()
{
    bool allReturned = true;
    for (int i = 0; i < returnedCheckBoxes->size(); i++) {
        if (!returnedCheckBoxes->at(i)->isChecked()) {
            allReturned = false;
            break;
        }
    }

    if (allReturned) {
        ui->itemsReturned->setStyleSheet("font-weight: bold; color: #00e616;");
        ui->itemsReturned->setText("All items have been returned.");
    }
    else {

        ui->itemsReturned->setStyleSheet("font-weight: bold; color: #ff0000;");
        ui->itemsReturned->setText("Some of the equipments have not been returned yet!");
    }

    return allReturned;
}

void Infopopup::setInstructor(const QString &value)
{
    instructor = value;
}

BorrowedEquipmentData::BorrowedEquipmentData()
{

}

BorrowedEquipmentData::BorrowedEquipmentData(QString borrowerName, QString subject, QString section, QString instructor, QString equipmentName, QCheckBox *&returned)
{
    this->borrowerName = borrowerName;
    this->subject = subject;
    this->section = section;
    this->instructor = instructor;
    this->equipmentName = equipmentName;
    this->returned = returned;
}

void Infopopup::on_exportToExcel_clicked()
{
    this->borrowedEquipments = labLib->getBorrowedEquipments(groupName, subject, section, instructor);
    this->students = labLib->getStudents(groupName, subject, section, instructor);
    labLib->exportAllDataBorrowerToExcel(groupName, subject, section, instructor, start, end, hasEndTime, students, borrowedEquipments);
}
