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
    ui->listWidget->addItem(ui->studentName->text());
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
    QVector<Student*> *students = new QVector<Student*>();
    for(int i = 0; i < ui->listWidget->count(); ++i)
    {
        Student *student = new Student(ui->listWidget->item(i)->text());
        students->push_front(student);
    }

    QString name = ui->groupName->text();
    QString section = ui->section->text();
    QString subject = ui->subject->text();
    QDateTime start = ui->startDateTime->dateTime();
    QDateTime end = ui->endDateTime->dateTime();
    stackWidget->setCurrentIndex(6);

//    Borrower *borrower = new Borrower(name, section, subject, start, end);
//    setBorrower(borrower);
    Borrowers *borrowers = (Borrowers*)(stackWidget->widget(6));
    BorrowerData *borrowerdata = new BorrowerData();
    borrowerdata->setStudent(students);
    borrowerdata->setName(name);
    borrowerdata->setSection(section);
    borrowerdata->setSubject(subject);
    borrowerdata->setStart(start);
    borrowerdata->setEnd(end);
    borrowers->setStudents(students);
    borrowers->setBorrowerdata(borrowerdata);
    borrowers->display();
//    cout << name.toStdString() << endl;
}

void BorrowingD::setStudents(QVector<Student *> *value)
{
    students = value;
}

void BorrowingD::setEquipment(QVector<Equipment *> *value)
{
    equipment = value;
}

//void BorrowingD::setBorrower(Borrower *value)
//{
//    borrower = value;
//}
