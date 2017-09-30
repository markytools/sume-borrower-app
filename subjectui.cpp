#include "subjectui.h"
#include "ui_subjectui.h"

SubjectUI::SubjectUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubjectUI)
{
    ui->setupUi(this);
    QTableWidgetItem *subjectHeader = new QTableWidgetItem("SUBJECTS");
    subjectHeader->setTextAlignment(Qt::AlignCenter);
    subjectHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    subjectHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderItem(0, subjectHeader);

    ui->tableWidget->setColumnWidth(0, 400);

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    updateSubjects();
}

SubjectUI::~SubjectUI()
{
    delete ui;
}

void SubjectUI::on_addSubject_clicked()
{
    if(!ui->lineEdit->text().isEmpty()){
        labLib->addSubject(ui->lineEdit->text().toUpper());
        updateSubjects();
        ui->lineEdit->clear();
    }
}

void SubjectUI::updateSubjects()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    subjects = labLib->getSubjects();

    for(int i = 0; i < subjects->size(); i++){
        QString subject = subjects->at(i)->name;

        ui->tableWidget->setRowCount(ui->tableWidget->rowCount() + 1);

        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, 0, subjectItem);
    }
}

void SubjectUI::on_deleteSubject_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Subject", "Are you sure you want to delete this subject?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        if(ui->tableWidget->selectedItems().size() != 0)
        {
            int row = ui->tableWidget->currentRow();

            QTableWidgetItem *item = ui->tableWidget->item(row, 0);
            QString selectedSubject = item->text();
            labLib->deleteSubject(selectedSubject);
            updateSubjects();
        }
    }
}

void SubjectUI::on_Back_clicked()
{
    stackWidget->setCurrentIndex(2);
}

void SubjectUI::on_editSubject_clicked()
{
    if (ui->tableWidget->selectionModel()->selectedRows().size() == 0) {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No subjects selected!");
        messageBox.setFixedSize(500,200);
        return;
    }
    else {
        int row = ui->tableWidget->currentRow();

        QTableWidgetItem *item = ui->tableWidget->item(row, 0);
        QString selectedSubject = item->text();


        Experiments *experiments = (Experiments*)(stackWidget->widget(9));
        experiments->resetFields();
        experiments->setSubjectName(selectedSubject);
        experiments->display();
        stackWidget->setCurrentIndex(9);
    }
}
