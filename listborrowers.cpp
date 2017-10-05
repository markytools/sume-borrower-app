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
    QTableWidgetItem *instructorHeader = new QTableWidgetItem("INSTRUCTOR");
    instructorHeader->setTextAlignment(Qt::AlignCenter);
    instructorHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    instructorHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *startHeader = new QTableWidgetItem("START");
    startHeader->setTextAlignment(Qt::AlignCenter);
    startHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    startHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *endHeader = new QTableWidgetItem("END");
    endHeader->setTextAlignment(Qt::AlignCenter);
    endHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    endHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->borrowersTable->setColumnCount(6);
    ui->borrowersTable->setHorizontalHeaderItem(0, nameHeader);
    ui->borrowersTable->setHorizontalHeaderItem(1, subjectHeader);
    ui->borrowersTable->setHorizontalHeaderItem(2, sectionHeader);
    ui->borrowersTable->setHorizontalHeaderItem(3, instructorHeader);
    ui->borrowersTable->setHorizontalHeaderItem(4, startHeader);
    ui->borrowersTable->setHorizontalHeaderItem(5, endHeader);

    ui->borrowersTable->setColumnWidth(0, 200);
    ui->borrowersTable->setColumnWidth(1, 200);
    ui->borrowersTable->setColumnWidth(2, 100);
    ui->borrowersTable->setColumnWidth(3, 200);
    ui->borrowersTable->setColumnWidth(4, 150);
    ui->borrowersTable->setColumnWidth(5, 150);

    ui->borrowersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    QVector<Borrower*> *borrowers = labLib->getBorrowers();
    ui->borrowersTable->setRowCount(0);

    for(int row = 0; row < borrowers->size(); row++)
    {
        Borrower *borrower = borrowers->at(row);

        QString name = borrower->name;
        QString subject = borrower->subject;
        QString section = borrower->section;
        QString instructor = borrower->instructor;
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
        QTableWidgetItem *instructorItem = new QTableWidgetItem(instructor);
        instructorItem->setTextAlignment(Qt::AlignCenter);
        instructorItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *startItem = new QTableWidgetItem(start.toString("yyyy-MM-dd hh:mm:ss AP"));
        startItem->setTextAlignment(Qt::AlignCenter);
        startItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *endItem = new QTableWidgetItem(end.toString("yyyy-MM-dd hh:mm:ss AP"));
        endItem->setTextAlignment(Qt::AlignCenter);
        endItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, nameItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 1, subjectItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 2, sectionItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 3, instructorItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 4, startItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 5, endItem);
    }
}

ListBorrowers::~ListBorrowers()
{
    delete ui;
}

QSize ListBorrowers::sizeHint()
{
    return minimumSize();
}

void ListBorrowers::updateBorrowers()
{
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
    QTableWidgetItem *instructorHeader = new QTableWidgetItem("INSTRUCTOR");
    instructorHeader->setTextAlignment(Qt::AlignCenter);
    instructorHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    instructorHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *startHeader = new QTableWidgetItem("START");
    startHeader->setTextAlignment(Qt::AlignCenter);
    startHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    startHeader->setFont(QFont("helvetica", 12, QFont::Bold));
    QTableWidgetItem *endHeader = new QTableWidgetItem("END");
    endHeader->setTextAlignment(Qt::AlignCenter);
    endHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    endHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->borrowersTable->setColumnCount(6);
    ui->borrowersTable->setHorizontalHeaderItem(0, nameHeader);
    ui->borrowersTable->setHorizontalHeaderItem(1, subjectHeader);
    ui->borrowersTable->setHorizontalHeaderItem(2, sectionHeader);
    ui->borrowersTable->setHorizontalHeaderItem(3, instructorHeader);
    ui->borrowersTable->setHorizontalHeaderItem(4, startHeader);
    ui->borrowersTable->setHorizontalHeaderItem(5, endHeader);

    ui->borrowersTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    QVector<Borrower*> *borrowers = labLib->getBorrowers();
    ui->borrowersTable->setRowCount(0);

    for(int row = 0; row < borrowers->size(); row++)
    {
        Borrower *borrower = borrowers->at(row);

        QString name = borrower->name;
        QString subject = borrower->subject;
        QString section = borrower->section;
        QString instructor = borrower->instructor;
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
        QTableWidgetItem *instructorItem = new QTableWidgetItem(instructor);
        instructorItem->setTextAlignment(Qt::AlignCenter);
        instructorItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *startItem = new QTableWidgetItem(start.toString("yyyy-MM-dd hh:mm:ss AP"));
        startItem->setTextAlignment(Qt::AlignCenter);
        startItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *endItem = new QTableWidgetItem(end.toString("yyyy-MM-dd hh:mm:ss AP"));
        endItem->setTextAlignment(Qt::AlignCenter);
        endItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 0, nameItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 1, subjectItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 2, sectionItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 3, instructorItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 4, startItem);
        ui->borrowersTable->setItem(ui->borrowersTable->rowCount() - 1, 5, endItem);
    }
}

void ListBorrowers::on_Back_clicked()
{
    stackWidget->setCurrentIndex(2);
}

void ListBorrowers::on_Info_clicked()
{
    if(ui->borrowersTable->selectedItems().size() != 0){
        Infopopup *infopopup = (Infopopup*)(stackWidget->widget(4));
        int row = ui->borrowersTable->currentRow();
        QTableWidgetItem *name = ui->borrowersTable->item(row, 0);
        QTableWidgetItem *subject = ui->borrowersTable->item(row, 1);
        QTableWidgetItem *section = ui->borrowersTable->item(row, 2);
        QTableWidgetItem *instructor = ui->borrowersTable->item(row, 3);
        QTableWidgetItem *startTime = ui->borrowersTable->item(row, 4);
        QTableWidgetItem *endTime = ui->borrowersTable->item(row, 5);
        QString selectedName = name->text();
        QString selectedSubject = subject->text();
        QString selectedSection = section->text();
        QString selectedInstructor = instructor->text();
        QString selectedStartTime = startTime->text();
        QString selectedEndTime = endTime->text();
        int hasEndTime = labLib->hasEndTime(selectedName, selectedSubject, selectedSection, selectedInstructor);
        infopopup->display(selectedName,selectedSubject,selectedSection,selectedInstructor,selectedStartTime,selectedEndTime, hasEndTime);
        stackWidget->setCurrentIndex(4);
    }
    else {
        labLib->showErrorMessageBox(false, "No Borrower Select", "Select a borrower from the table");
    }
}

void ListBorrowers::on_AddButton_clicked()
{
    BorrowingD *borrowingD = (BorrowingD*)(stackWidget->widget(5));
    borrowingD->resetFields();
    stackWidget->setCurrentIndex(5);

}

//void ListBorrowers::on_Delete_clicked()
//{
//    QMessageBox::StandardButton reply;
//    reply = QMessageBox::question(this, "Delete Borrowers", "Are you sure you want to delete borrowers?", QMessageBox::Yes|QMessageBox::No);
//    if(reply == QMessageBox::Yes)
//    {
//        if(ui->borrowersTable->selectedItems().size() != 0)
//        {
//            int row = ui->borrowersTable->currentRow();

//            QTableWidgetItem *name = ui->borrowersTable->item(row, 0);
//            QTableWidgetItem *subject = ui->borrowersTable->item(row, 1);
//            QTableWidgetItem *section = ui->borrowersTable->item(row, 2);
//            QString selectedName = name->text();
//            QString selectedSubject = subject->text();
//            QString selectedSection = section->text();
//            labLib->deleteBorrower(selectedName,selectedSubject,selectedSection);
//            updateBorrowers();
//        }
//    }
//}
