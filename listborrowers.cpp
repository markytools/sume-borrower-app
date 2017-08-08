#include "listborrowers.h"
#include "ui_listborrowers.h"

ListBorrowers::ListBorrowers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListBorrowers)
{
    ui->setupUi(this);

    QTableWidgetItem *nameHeader = new QTableWidgetItem("NAME");
    nameHeader->setTextAlignment(Qt::AlignCenter);
    nameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    nameHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *subjectHeader = new QTableWidgetItem("SUBJECT");
    subjectHeader->setTextAlignment(Qt::AlignCenter);
    subjectHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    subjectHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *sectionHeader = new QTableWidgetItem("SECTION");
    sectionHeader->setTextAlignment(Qt::AlignCenter);
    sectionHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    sectionHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *startHeader = new QTableWidgetItem("START");
    startHeader->setTextAlignment(Qt::AlignCenter);
    startHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    startHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *endHeader = new QTableWidgetItem("END");
    endHeader->setTextAlignment(Qt::AlignCenter);
    endHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    endHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->borrowersTable->setColumnCount(5);
    ui->borrowersTable->setHorizontalHeaderItem(0, nameHeader);
    ui->borrowersTable->setHorizontalHeaderItem(1, subjectHeader);
    ui->borrowersTable->setHorizontalHeaderItem(2, sectionHeader);
    ui->borrowersTable->setHorizontalHeaderItem(3, startHeader);
    ui->borrowersTable->setHorizontalHeaderItem(4, endHeader);

    ui->borrowersTable->setColumnWidth(0, 150);
    ui->borrowersTable->setColumnWidth(1, 300);
    ui->borrowersTable->setColumnWidth(2, 300);
    ui->borrowersTable->setColumnWidth(3, 300);
    ui->borrowersTable->setColumnWidth(4, 300);

    ui->borrowersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    QVector<Borrower*> *borrowers = labLib->getBorrowers();
    ui->borrowersTable->setRowCount(0);

    for(int row = 0; row < borrowers->size(); row++)
    {
        Borrower *borrower = borrowers->at(row);

        QString name = borrower->name;
        QString subject = borrower->subject;
        QString section = borrower->section;
        QDateTime start = borrower->start;
        QDateTime end = borrower->end;

        ui->borrowersTable->setRowCount(ui->borrowersTable->rowCount() + 1);

        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *sectionItem = new QTableWidgetItem(section);
        sectionItem->setTextAlignment(Qt::AlignCenter);
        sectionItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *startItem = new QTableWidgetItem(start.toString("yyyy-MM-dd HH:mm:ss"));
        startItem->setTextAlignment(Qt::AlignCenter);
        startItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *endItem = new QTableWidgetItem(end.toString("yyyy-MM-dd HH:mm:ss"));
        endItem->setTextAlignment(Qt::AlignCenter);
        endItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, nameItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 1, subjectItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 2, sectionItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 3, startItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 4, endItem);
    }
}

ListBorrowers::~ListBorrowers()
{
    delete ui;
}

void ListBorrowers::updateBorrowers()
{
    QVector<Borrower*> *borrowers = labLib->getBorrowers();
    ui->borrowersTable->setRowCount(0);

    for(int row = 0; row < borrowers->size(); row++)
    {
        Borrower *borrower = borrowers->at(row);

        QString name = borrower->name;
        QString subject = borrower->subject;
        QString section = borrower->section;
        QDateTime start = borrower->start;
        QDateTime end = borrower->end;

        ui->borrowersTable->setRowCount(ui->borrowersTable->rowCount() + 1);

        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *sectionItem = new QTableWidgetItem(section);
        sectionItem->setTextAlignment(Qt::AlignCenter);
        sectionItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *startItem = new QTableWidgetItem(start.toString("yyyy-MM-dd HH:mm:ss"));
        startItem->setTextAlignment(Qt::AlignCenter);
        startItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *endItem = new QTableWidgetItem(end.toString("yyyy-MM-dd HH:mm:ss"));
        endItem->setTextAlignment(Qt::AlignCenter);
        endItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, nameItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, subjectItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, sectionItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, startItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, endItem);
    }
}

void ListBorrowers::on_Back_clicked()
{
    stackWidget->setCurrentIndex(2);
}

void ListBorrowers::on_Info_clicked()
{
    stackWidget->setCurrentIndex(4);
}
