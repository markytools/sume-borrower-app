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
    QTableWidgetItem *borrowedHeader = new QTableWidgetItem("BORROWED");
    borrowedHeader->setTextAlignment(Qt::AlignCenter);
    borrowedHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    borrowedHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->listEquipments->setColumnCount(3);
    ui->listEquipments->setHorizontalHeaderItem(2, quantityHeader);
    ui->listEquipments->setHorizontalHeaderItem(1, nameHeader);
    ui->listEquipments->setHorizontalHeaderItem(0, borrowedHeader);

    ui->listEquipments->setColumnWidth(2, 100);
    ui->listEquipments->setColumnWidth(1, 180);
    ui->listEquipments->setColumnWidth(0, 120);


    ui->listEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->borrowEquipments->setColumnCount(2);
    ui->borrowEquipments->setHorizontalHeaderItem(0, borrowedHeader);
    ui->borrowEquipments->setHorizontalHeaderItem(1, nameHeader);

    ui->borrowEquipments->setColumnWidth(0, 130);
    ui->borrowEquipments->setColumnWidth(1, 250);

    ui->borrowEquipments->setSelectionBehavior(QAbstractItemView::SelectRows);

    QTableWidgetItem *experimentHeader = new QTableWidgetItem("EXPERIMENTS");
    experimentHeader->setTextAlignment(Qt::AlignCenter);
    experimentHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    experimentHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->ExperimentTableWidget->setColumnCount(1);
    ui->ExperimentTableWidget->setHorizontalHeaderItem(0, experimentHeader);

    ui->ExperimentTableWidget->setColumnWidth(0, 300);

    ui->ExperimentTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    QTableWidgetItem *subjectHeader = new QTableWidgetItem("SUBJECTS");
    subjectHeader->setTextAlignment(Qt::AlignCenter);
    subjectHeader->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    subjectHeader->setFont(QFont("helvetica", 12, QFont::Bold));

    ui->SubjectsTableWidget->setColumnCount(1);
    ui->SubjectsTableWidget->setHorizontalHeaderItem(0, subjectHeader);

    ui->SubjectsTableWidget->setColumnWidth(0, 300);

    ui->SubjectsTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

}

Borrowers::~Borrowers()
{
    delete ui;
}

void Borrowers::on_Back_clicked()
{
    delete borrowerdata;
    stackWidget->setCurrentIndex(3);
}

void Borrowers::setBorrower(Borrower *&value)
{
    borrower = value;
}

void Borrowers::reverseUpdateListEquipments()
{
    ui->listEquipments->clearContents();

    QVector<Equipment *> *equipments = borrowerdata->getEquipment();

    ui->listEquipments->setRowCount(0);

    for(int row = 0; row < equipments->size(); row++)
    {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;
        int borrowed = equipment->borrowed;

        QString filter = ui->searchEdit->text();
        if (filter != "") {
            if (ifStringHasSubstring(filter.toStdString(), "@")) {
                string stringbefore = getStringBeforeOrAfter(filter.toStdString(), '@', true);
                string stringafter = getStringBeforeOrAfter(filter.toStdString(), '@', false);
                if (!isEmptyOrWhiteSpace(stringbefore) && !isEmptyOrWhiteSpace(stringafter)) {
                    QVector<Equipment*> *experimentEquipments = labLib->getExperimentEquipments(
                                QString::fromStdString(stringbefore).toUpper(), QString::fromStdString(stringafter).toUpper());
                    if (experimentEquipments->size() != 0) {
                        for (int i = 0; i < experimentEquipments->size(); i++) {
                            Equipment *expEquip = experimentEquipments->at(i);
                            if (expEquip->name == name) {

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

                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);

                                break;
                            }
                        }
                    }
                    else {
                        if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                        }
                    }
                }
                else {
                    if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                    }
                }
            }
            else {
                if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                }
            }
        }
        else {
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

            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
        }
    }
}

void Borrowers::reverseUpdateBorrowItems(int previousRow)
{
    ui->borrowEquipments->clearContents();

    ui->borrowEquipments->setRowCount(0);

    QVector<BorrowedEquipment*> *borrowedEquipments = borrowerdata->getBorrowedequipment();
    for(int row = 0; row < borrowedEquipments->size(); row++)
    {
        BorrowedEquipment *borrowItem = borrowedEquipments->at(row);

        int borrowed = borrowItem->toBorrow;
        QString name = borrowItem->equipmentName;

        ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() + 1);
/*      cout << borrowedEquipments->size() << endl;
        cout << borrowed << endl << name.toStdString() << endl;
*/
        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        if(borrowItem->toBorrow != 0){
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, borrowedItem);
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
        }
        else if(borrowItem->toBorrow == 0){
            ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() - 1);
        }
    }

    ui->borrowEquipments->selectRow(previousRow);
}

void Borrowers::updateBorrowItems()
{
/*    for (int i = 0; i < students->size(); i++){
        cout << students->at(i)->name.toStdString() << endl;
    }
    cout << borrower->name.toStdString() << endl << borrower->section.toStdString() << endl << borrower->subject.toStdString() << endl;
    cout << borrower->start.toString("MMM-dd-yyyy hh:mm").toStdString() << endl << borrower->end.toString("MMM-dd-yyyy hh:mm").toStdString() << endl;
*/
    ui->borrowEquipments->clearContents();

    ui->borrowEquipments->setRowCount(0);

    QVector<BorrowedEquipment*> *borrowedEquipments = borrowerdata->getBorrowedequipment();
    for(int row = 0; row < borrowedEquipments->size(); row++)
    {
        BorrowedEquipment *borrowItem = borrowedEquipments->at(row);

        int borrowed = borrowItem->toBorrow;
        QString name = borrowItem->equipmentName;

        ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() + 1);
/*      cout << borrowedEquipments->size() << endl;
        cout << borrowed << endl << name.toStdString() << endl;
*/
        QTableWidgetItem *borrowedItem = new QTableWidgetItem(QString::number(borrowed));
        borrowedItem->setTextAlignment(Qt::AlignCenter);
        borrowedItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTableWidgetItem *nameItem = new QTableWidgetItem(name);
        nameItem->setTextAlignment(Qt::AlignCenter);
        nameItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        if (borrowItem->toBorrow != 0){
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 0, borrowedItem);
            ui->borrowEquipments->setItem(ui->borrowEquipments->rowCount() - 1, 1, nameItem);
        }
        else if(borrowItem->toBorrow == 0){
            ui->borrowEquipments->setRowCount(ui->borrowEquipments->rowCount() - 1);
        }
    }
}

void Borrowers::updateListEquipments(int previousRow)
{
    ui->listEquipments->clearContents();

    QVector<Equipment *> *equipments = borrowerdata->getEquipment();

    ui->listEquipments->setRowCount(0);

//    string stringbefore = getStringBefore(ui->searchEdit->text().toStdString(), '@');
//    cout << "value: " << stringbefore << endl;

    for(int row = 0; row < equipments->size(); row++) {
        Equipment *equipment = equipments->at(row);

        int quantity = equipment->quantity;
        QString name = equipment->name;
        int borrowed = equipment->borrowed;

        QString filter = ui->searchEdit->text();
        if (filter != "") {
            if (ifStringHasSubstring(filter.toStdString(), "@")) {
                string stringbefore = getStringBeforeOrAfter(filter.toStdString(), '@', true);
                string stringafter = getStringBeforeOrAfter(filter.toStdString(), '@', false);
                if (!isEmptyOrWhiteSpace(stringbefore) && !isEmptyOrWhiteSpace(stringafter)) {
                    QVector<Equipment*> *experimentEquipments = labLib->getExperimentEquipments(
                                QString::fromStdString(stringbefore).toUpper(), QString::fromStdString(stringafter).toUpper());
                    if (experimentEquipments->size() != 0) {
                        for (int i = 0; i < experimentEquipments->size(); i++) {
                            Equipment *expEquip = experimentEquipments->at(i);
                            if (expEquip->name == name) {

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

                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                                ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);

                                break;
                            }
                        }
                    }
                    else {
                        if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                        }
                    }
                }
                else {
                    if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                    }
                }
            }
            else {
                if (ifStringHasSubstring(name.toUpper().toStdString(), filter.toUpper().toStdString())) {
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

                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
                    ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
                }
            }
        }
        else {
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

            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
            ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
        }
    }

    if (previousRow != -1) ui->listEquipments->selectRow(previousRow);
}

void Borrowers::display()
{
    borrowerdata->setEquipment(labLib->getEquipments());

    QVector<Equipment *> *equipments = borrowerdata->getEquipment();

    ui->borrowEquipments->setRowCount(0);
    ui->listEquipments->setRowCount(0);

    for(int row = 0; row < equipments->size(); row++) {
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

        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 2, quantityItem);
        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 1, nameItem);
        ui->listEquipments->setItem(ui->listEquipments->rowCount() - 1, 0, borrowedItem);
    }
}

void Borrowers::setStudents(QVector<Student *> *value)
{
    students = value;
}

void Borrowers::on_leftToRight_clicked()
{
    if (ui->listEquipments->selectionModel()->selectedRows().size() == 0) {
        labLib->showErrorMessageBox(false, "Error", "No rows selected!");
        return;
    }

    if(ui->listEquipments->item(ui->listEquipments->currentRow(), 0)->text().toInt() == ui->listEquipments->item(ui->listEquipments->currentRow(), 2)->text().toInt()){

    }
    else{
        borrowerdata->borrowEquipmentOnce(ui->listEquipments->item(ui->listEquipments->currentRow(), 1)->text());
        borrowerdata->updateBorrowEquipment(ui->listEquipments->item(ui->listEquipments->currentRow(), 1)->text());
        int previousCurrentRow = ui->listEquipments->currentRow();
        updateListEquipments(previousCurrentRow);
        updateBorrowItems();
    }
}

void Borrowers::on_rightToLeft_clicked()
{
    if (ui->borrowEquipments->selectionModel()->selectedRows().size() == 0) {
        labLib->showErrorMessageBox(false, "Error", "No rows selected!");
        return;
    }

    if(ui->borrowEquipments->rowCount() == 0){

    }
    else {
        borrowerdata->reverseBorrowEquipmentOnce(ui->borrowEquipments->item(ui->borrowEquipments->currentRow(), 1)->text());
        borrowerdata->reverseUpdateBorrowEquipment(ui->borrowEquipments->item(ui->borrowEquipments->currentRow(), 1)->text());
        int previousCurrentRow = ui->borrowEquipments->currentRow();
        reverseUpdateBorrowItems(previousCurrentRow);
        reverseUpdateListEquipments();
    }
}

void Borrowers::on_Proceed_clicked()
{
    if (ui->borrowEquipments->rowCount() <= 0) {
        labLib->showErrorMessageBox(false, "No Borrowed Equipments", "You have not set at least one borrowed equipment");
        return;
    }
    stackWidget->setCurrentIndex(7);
    Confirmations *confirmations = (Confirmations*)(stackWidget->widget(7));
    confirmations->setBorrowerdata(borrowerdata);
    confirmations->display();
}

void Borrowers::setBorrowerdata(BorrowerData *value)
{
    borrowerdata = value;
}

void Borrowers::showExperiments()
{
    cout << "Show Experiment " << 1 << endl;

    ui->ExperimentTableWidget->clearContents();

    cout << "Show Experiment " << 2 << endl;

    ui->ExperimentTableWidget->setRowCount(0);

    cout << "Show Experiment " << 3 << endl;
    experiments = labLib->getSubjectExperiments(subjectName);


    cout << "Show Experiment " << 4 << endl;
    ui->ExperimentTableWidget->clearSelection();
    ui->ExperimentTableWidget->clearContents();
    for (int i = 0; i < experiments->size(); i++) {
        QString experiment = experiments->at(i)->name;

        ui->ExperimentTableWidget->setRowCount(ui->ExperimentTableWidget->rowCount() + 1);

        QTableWidgetItem *experimentItem = new QTableWidgetItem(experiment);
        experimentItem->setTextAlignment(Qt::AlignCenter);
        experimentItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->ExperimentTableWidget->setItem(ui->ExperimentTableWidget->rowCount() - 1 , 0, experimentItem);
    }
}

void Borrowers::showSubjects()
{
    ui->SubjectsTableWidget->clearContents();
    ui->SubjectsTableWidget->setRowCount(0);

    subjects = labLib->getSubjects();

    for (int i = 0; i < subjects->size(); i++) {
        QString subject = subjects->at(i)->name;

        ui->SubjectsTableWidget->setRowCount(ui->SubjectsTableWidget->rowCount() + 1);

        QTableWidgetItem *subjectItem = new QTableWidgetItem(subject);
        subjectItem->setTextAlignment(Qt::AlignCenter);
        subjectItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->SubjectsTableWidget->setItem(ui->SubjectsTableWidget->rowCount() - 1, 0, subjectItem);
    }
}

void Borrowers::resetFields()
{
    ui->searchEdit->clear();
    ui->borrowEquipments->clearContents();
    ui->listEquipments->clearContents();
}

void Borrowers::on_searchEdit_textChanged(const QString &text)
{
    updateListEquipments(-1);
}

void Borrowers::setSubjectName(const QString &value)
{
    subjectName = value;
}

void Borrowers::on_SubjectsTableWidget_cellClicked(int row, int column)
{
    ui->searchEdit->text().clear();
    ui->searchEdit->clear();
    cout <<"Table Row"<< row << endl;
    cout <<"Table Row"<< column << endl;
    QTableWidgetItem *item = ui->SubjectsTableWidget->item(row, column);
    cout << "Item" << endl;
    QString name = item->text();
    cout << "Text" << endl;
    setSubjectName(name);
    cout << "Subject set" << endl;
    showExperiments();
    setExperimentName("");
    cout << "Showing experiments" << endl;
}

void Borrowers::on_SubjectsTableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    ui->searchEdit->text().clear();
    ui->searchEdit->clear();
    cout << currentRow << endl;
    cout << currentColumn << endl;
    QTableWidgetItem *item = ui->SubjectsTableWidget->item(currentRow, currentColumn);
    QString name = item->text();
    setSubjectName(name);
    setExperimentName("");
    showExperiments();
}

void Borrowers::on_ExperimentTableWidget_cellClicked(int row, int column)
{
    QTableWidgetItem *item = ui->ExperimentTableWidget->item(row, column);
    QString name = item->text();
    setExperimentName(name);
}

void Borrowers::on_ExperimentTableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    if (currentRow >= 0){
        QTableWidgetItem *item = ui->ExperimentTableWidget->item(currentRow, currentColumn);
        QString name = item->text();
        setExperimentName(name);
    }
}

void Borrowers::setExperimentName(const QString &value)
{
    experimentName = value;
}

void Borrowers::on_Back_2_clicked()
{
    ui->searchEdit->setText(subjectName + "@" + experimentName);
}
