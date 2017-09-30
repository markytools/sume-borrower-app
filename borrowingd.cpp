#include "borrowingd.h"
#include "ui_borrowingd.h"

BorrowingD::BorrowingD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowingD)
{
    ui->setupUi(this);
}

BorrowingD::~BorrowingD()
{
    delete ui;
}

void BorrowingD::on_Cancel_clicked()
{
    stackWidget->setCurrentIndex(3);
}

void BorrowingD::on_Add_clicked()
{
    if (!ui->studentName->text().isEmpty()) {
        bool hasName = false;
        for (int i = 0; i < ui->listWidget->count(); ++i) {
            QString name = ui->listWidget->item(i)->text();
            if (name.toUpper() == ui->studentName->text().toUpper()) {
                hasName = true;
                break;
            }
        }

        if (!hasName) {
            ui->listWidget->addItem(ui->studentName->text().toUpper());
            ui->studentName->clear();
            ui->studentName->setFocus();
        }
        else {
            labLib->showErrorMessageBox(false, "Duplicate Error","You cannot have duplicate student names!");
        }
    }
}

void BorrowingD::on_Delete_clicked()
{
    QList<QListWidgetItem*> items = ui->listWidget->selectedItems();
    foreach(QListWidgetItem * item, items)
    {
        delete ui->listWidget->takeItem(ui->listWidget->row(item));
    }
}

void BorrowingD::on_Proceed_clicked()
{
    if (ui->listWidget->count() <= 0) {
        QMessageBox messageBox;
        messageBox.critical(0,"No student","Must have at least one student");
        messageBox.setFixedSize(500,200);
        return;
    }

    QVector<Student*> *students = new QVector<Student*>();
    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        Student *student = new Student(ui->listWidget->item(i)->text());
        students->push_front(student);
    }

    QString name = ui->groupName->text();
    QString section = ui->section->text();
    QString subject = ui->subject->text();
    QString instructor = ui->instructor->text();
    QDateTime start = ui->startDateTime->dateTime();
    QDateTime end = ui->endDateTime->dateTime();

//    Borrower *borrower = new Borrower(name, section, subject, start, end);
//    setBorrower(borrower);
    Borrowers *borrowers = (Borrowers*)(stackWidget->widget(6));
    borrowers->resetFields();

    BorrowerData *borrowerdata = new BorrowerData();
    borrowerdata->setStudent(students);
    borrowerdata->setName(name);
    borrowerdata->setSection(section);
    borrowerdata->setSubject(subject);
    borrowerdata->setInstructor(instructor);
    borrowerdata->setStart(start);
    borrowerdata->setEnd(end);
    borrowers->setStudents(students);
    borrowers->setBorrowerdata(borrowerdata);
    borrowers->display();

    stackWidget->setCurrentIndex(6);
//    cout << name.toStdString() << endl;
}

void BorrowingD::setStudents(QVector<Student *> *value)
{
    students = value;
}

void BorrowingD::resetFields()
{
    ui->studentName->clear();
    ui->listWidget->clear();
    ui->groupName->clear();
    ui->subject->clear();
    ui->section->clear();
    ui->instructor->clear();
    ui->startDateTime->setDateTime(QDateTime::currentDateTime());
    ui->endDateTime->setDateTime(QDateTime::currentDateTime());
}

void BorrowingD::setEquipment(QVector<Equipment *> *value)
{
    equipment = value;
}

//void BorrowingD::setBorrower(Borrower *value)
//{
//    borrower = value;
//}
