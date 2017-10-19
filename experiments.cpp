#include "experiments.h"
#include "ui_experiments.h"

Experiments::Experiments(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Experiments)
{
    ui->setupUi(this);
    QTableWidgetItem *experimentHeader = new QTableWidgetItem("EXPERIMENTS");
    experimentHeader->setTextAlignment(Qt::AlignCenter);
    experimentHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    experimentHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->experimentsTable->setColumnCount(1);
    ui->experimentsTable->setHorizontalHeaderItem(0, experimentHeader);

    ui->experimentsTable->setColumnWidth(0, 300);

    ui->experimentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    QTableWidgetItem *equipmentNameHeader = new QTableWidgetItem("EQUIPMENT NAME");
    equipmentNameHeader->setTextAlignment(Qt::AlignCenter);
    equipmentNameHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    equipmentNameHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->listEquipments->setColumnCount(1);
    ui->listEquipments->setHorizontalHeaderItem(0, equipmentNameHeader);

    ui->listEquipments->setColumnWidth(0, 300);

    ui->listEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->experimentEquipments->setColumnCount(1);
    ui->experimentEquipments->setHorizontalHeaderItem(0, equipmentNameHeader);

    ui->experimentEquipments->setColumnWidth(0, 300);

    ui->experimentEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    installEventFilter(this);
}

Experiments::~Experiments()
{
    delete ui;
}

void Experiments::setSubjectName(const QString &value)
{
    subjectName = value;
    ui->subjectNameLabel->setText(subjectName);
}

void Experiments::display()
{
    ui->listEquipments->clearContents();
    ui->experimentEquipments->clearContents();
    ui->experimentsTable->clearContents();
    ui->experimentsTable->setRowCount(0);

    experiments = labLib->getSubjectExperiments(subjectName);

    for(int i = 0; i < experiments->size(); i++){
        QString subject = experiments->at(i)->name;

        ui->experimentsTable->setRowCount(ui->experimentsTable->rowCount() + 1);

        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->experimentsTable->setItem(ui->experimentsTable->rowCount() - 1, 0, subjectItem);
    }
}

void Experiments::showExperimentEquipments()
{
    ui->listEquipments->clearContents();
    ui->listEquipments->setRowCount(0);

    ui->experimentEquipments->clearContents();
    ui->experimentEquipments->setRowCount(0);

    int row = ui->experimentsTable->currentRow();
    QTableWidgetItem *item = ui->experimentsTable->item(row, 0);
    QString selectedExperiment = item->text();
    listEquipments = labLib->getEquipments();
    experimentEquipments = labLib->getExperimentEquipments(subjectName, selectedExperiment);
    for (int i = 0; i < listEquipments->size(); i++) {
        sameName = false;
        QString equipmentName = listEquipments->at(i)->name;
        for(int j = 0; j < experimentEquipments->size(); j++){
            QString experimentEquipmentName = experimentEquipments->at(j)->name;
            if (equipmentName == experimentEquipmentName){
                sameName = true;
                break;
            }
            else if(equipmentName != experimentEquipmentName){
                sameName = false;
            }
        }
        if (sameName == true) {
            ui->experimentEquipments->setRowCount(ui->experimentEquipments->rowCount() + 1);

            QTableWidgetItem *equipmentNameItem = new QTableWidgetItem(equipmentName);
            equipmentNameItem->setTextAlignment(Qt::AlignCenter);
            equipmentNameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->experimentEquipments->setItem(ui->experimentEquipments->rowCount() - 1, 0, equipmentNameItem);
        }
        else if (sameName == false) {
            ui->listEquipments->setRowCount(ui->listEquipments->rowCount() + 1);

            QTableWidgetItem *equipmentNameItem = new QTableWidgetItem(equipmentName);
            equipmentNameItem->setTextAlignment(Qt::AlignCenter);
            equipmentNameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, equipmentNameItem);
        }
    }
}

void Experiments::on_Back_clicked()
{
    ui->experimentEquipments->clearContents();
    ui->experimentEquipments->setRowCount(0);
    ui->experimentsTable->clearContents();
    ui->experimentsTable->setRowCount(0);
    ui->listEquipments->clearContents();
    ui->listEquipments->setRowCount(0);
    setExperimentName("");
    setSubjectName("");
    ui->experimentName->clear();
    stackWidget->setCurrentIndex(8);
}

void Experiments::updateExperiments()
{
    ui->experimentsTable->clearContents();
    ui->experimentsTable->setRowCount(0);

    experiments = labLib->getSubjectExperiments(subjectName);

    for (int i = 0; i < experiments->size(); i++) {
        QString subject = experiments->at(i)->name;

        ui->experimentsTable->setRowCount(ui->experimentsTable->rowCount() + 1);

        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->experimentsTable->setItem(ui->experimentsTable->rowCount() - 1, 0, subjectItem);
    }
}

void Experiments::on_addExperiment_clicked()
{
    if(!ui->lineEdit->text().isEmpty()){
        for (int row = 0; row < ui->experimentsTable->rowCount(); row++){
            QString experimentName = ui->experimentsTable->item(row, 0)->text();
            if (ui->lineEdit->text().toUpper() == experimentName.toUpper()) {
                labLib->showErrorMessageBox(false, "Duplicate Error", "Experiment name already exists");
                return;
            }
        }
        labLib->addExperiment(subjectName, ui->lineEdit->text().toUpper());
        updateExperiments();
        ui->lineEdit->text().clear();
        ui->lineEdit->clear();
    }
}

void Experiments::on_deleteExperiment_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete Experiment", "Are you sure you want to delete this experiment?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        if(ui->experimentsTable->selectedItems().size() != 0)
        {
            int row = ui->experimentsTable->currentRow();

            QTableWidgetItem *item = ui->experimentsTable->item(row, 0);
            QString selectedExperiment = item->text();
            labLib->deleteExperiment(subjectName, selectedExperiment);
            updateExperiments();
        }
    }
}

void Experiments::on_experimentsTable_cellClicked(int row, int column)
{
    if (row >= 0) {
        ui->experimentName->setText(ui->experimentsTable->item(row, column)->text());
        setExperimentName(ui->experimentsTable->item(row, column)->text());
        showExperimentEquipments();
    }

    ui->searchEdit->clear();
}

void Experiments::on_experimentsTable_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    if (currentRow >= 0) {
        ui->experimentName->setText(ui->experimentsTable->item(currentRow, currentColumn)->text());
        setExperimentName(ui->experimentsTable->item(currentRow, currentColumn)->text());
        showExperimentEquipments();
    }

    ui->searchEdit->clear();
}

void Experiments::on_leftToRight_clicked()
{
    cout << "agaa" << endl;
    if (ui->listEquipments->selectionModel()->selectedRows().size() == 0){
        cout << "agaw" << endl;
        QMessageBox messageBox;
        cout << "aghsaa" << endl;
        messageBox.critical(0,"Error","No rows selected!");
        cout << "aghsaa" << endl;
        messageBox.setFixedSize(500,200);
        cout << "ahsgaa" << endl;
        return;
    }

    else{
        int equipmentRow = ui->listEquipments->currentRow();
        cout << "ahsshsgaa" << endl;

        QTableWidgetItem *equipment = ui->listEquipments->item(equipmentRow, 0);
        cout << "aghhshaa" << endl;
        QString selectEquipment = equipment->text();
        cout << "agafhhsa" << endl;

        labLib->addEquipmentToExperiment(subjectName, experimentName, selectEquipment);
        cout << "agahha" << endl;
        showExperimentEquipments();
        cout << "ahegaa" << endl;
    }
}

void Experiments::on_rightToLeft_clicked()
{
    if (ui->experimentEquipments->selectionModel()->selectedRows().size() == 0) {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","No rows selected!");
        messageBox.setFixedSize(500,200);
        return;
    }
    else {
        int equipmentRow = ui->experimentEquipments->currentRow();

        QTableWidgetItem *equipment = ui->experimentEquipments->item(equipmentRow, 0);
        QString selectEquipment = equipment->text();

        labLib->removeEquipmentFromExperiment(subjectName, experimentName, selectEquipment);
        showExperimentEquipments();
    }
}

void Experiments::setExperimentName(const QString &value)
{
    experimentName = value;
}

void Experiments::resetFields()
{
    ui->experimentEquipments->clearContents();
    ui->listEquipments->clearContents();
    ui->experimentsTable->clearContents();
    ui->lineEdit->clear();
}

bool Experiments::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type()==QEvent::KeyPress) {
        QKeyEvent* key = static_cast<QKeyEvent*>(event);
        if ((key->key()==Qt::Key_Enter) || (key->key()==Qt::Key_Return)) {
            if (!labLib->isErrorMsgBoxVisible()) {
                if (ui->lineEdit->hasFocus()) {
                    on_addExperiment_clicked();
                }
            }
        }
        else {
            return QObject::eventFilter(obj, event);
        }
        return true;
    } else {
        return QObject::eventFilter(obj, event);
    }
    return false;
}

void Experiments::on_searchEdit_textChanged(const QString &text)
{

}
