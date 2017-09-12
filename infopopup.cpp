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

void Infopopup::display(QString groupName, QString groupSubject, QString groupSection)
{
    QTableWidgetItem *equipmentNameHeader = new QTableWidgetItem("EQUIPMENT NAME");
    equipmentNameHeader->setTextAlignment(Qt::AlignCenter);
    equipmentNameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    equipmentNameHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *quantityHeader = new QTableWidgetItem("QTY BORROWED");
    quantityHeader->setTextAlignment(Qt::AlignCenter);
    quantityHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    quantityHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *studentsHeader = new QTableWidgetItem("STUDENTS");
    studentsHeader->setTextAlignment(Qt::AlignCenter);
    studentsHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    studentsHeader->setFont(QFont("helvetica", 12, QFont::Bold));


    ui->borrowedEquipmentTable->setColumnCount(2);
    ui->borrowedEquipmentTable->setHorizontalHeaderItem(0, equipmentNameHeader);
    ui->borrowedEquipmentTable->setHorizontalHeaderItem(1, quantityHeader);

    ui->borrowedEquipmentTable->setColumnWidth(0, 300);
    ui->borrowedEquipmentTable->setColumnWidth(1, 300);

    ui->borrowedEquipmentTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->borrowedEquipmentTable->setRowCount(0);

    ui->membersTable->setColumnCount(1);
    ui->membersTable->setHorizontalHeaderItem(0, studentsHeader);

    ui->membersTable->setColumnWidth(0, 150);

    ui->membersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->membersTable->setRowCount(0);

    QVector<BorrowedEquipment*> *borrowedEquipments = labLib->getBorrowedEquipments(groupName, groupSubject, groupSection);
    QVector<Student*> *students = labLib->getStudents(groupName, groupSubject, groupSection);

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

        ui->borrowedEquipmentTable->setItem(ui->borrowedEquipmentTable->rowCount() - 1, 0, equipmentNameItem);
        ui->borrowedEquipmentTable->setItem(ui->borrowedEquipmentTable->rowCount() - 1, 1, borrowedQuantityItem);
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
}

QVector<BorrowedEquipment *> *Infopopup::getBorrowedequipment() const
{
    return borrowedequipment;
}
