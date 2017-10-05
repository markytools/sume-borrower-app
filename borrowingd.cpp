#include "borrowingd.h"
#include "ui_borrowingd.h"

BorrowingD::BorrowingD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BorrowingD)
{
    ui->setupUi(this);

    ui->startDateTime->setReadOnly(true);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateStartAndEndTimes()));
    timer->start(200);


    QCheckBox *hasEndTime = ui->hasEndTime;
    connect(hasEndTime, SIGNAL(stateChanged(int)), this, SLOT(hasEndTimeStateChanged(int)));
    hasEndTime->setChecked(false);
    ui->endDateTime->setDisabled(true);

    installEventFilter(this);
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
//        if (ui->listWidget->count() >= 14) {
//            labLib->showErrorMessageBox(false, "List Full","You can only have a limited amount of students");
//            return;
//        }

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
            ui->listWidget->scrollToBottom();
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
        labLib->showErrorMessageBox(false, "No student", "Must have at least one student");
        return;
    }
    if (ui->groupName->text().isEmpty()) {
        labLib->showErrorMessageBox(false, "Information lacking", "Enter a borrower/group name");
        return;
    }
    if (ui->subject->text().isEmpty()) {
        labLib->showErrorMessageBox(false, "Information lacking", "Enter a subject");
        return;
    }
    if (ui->section->text().isEmpty()) {
        labLib->showErrorMessageBox(false, "Information lacking", "Enter a section");
        return;
    }
    if (ui->instructor->text().isEmpty()) {
        labLib->showErrorMessageBox(false, "Information lacking", "Enter an instructor");
        return;
    }
    if (ui->hasEndTime->isChecked() && ui->endDateTime->dateTime() <= QDateTime::currentDateTime()) {
        labLib->showErrorMessageBox(false, "Invalid data", "End time should not be less than start time");
        return;
    }

    QVector<Student*> *students = new QVector<Student*>();
    for (int i = 0; i < ui->listWidget->count(); ++i) {
        Student *student = new Student(ui->listWidget->item(i)->text());
        students->push_front(student);
    }

    QString name = ui->groupName->text();
    QString section = ui->section->text();
    QString subject = ui->subject->text();
    QString instructor = ui->instructor->text();
    QDateTime start = ui->startDateTime->dateTime();
    QDateTime end = ui->endDateTime->dateTime();
    int hasEndTime = (ui->hasEndTime->isChecked()) ? 1 : 0;

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
    borrowerdata->setHasEndTime(hasEndTime);
    borrowers->setStudents(students);
    borrowers->setBorrowerdata(borrowerdata);
    borrowers->display();

    stackWidget->setCurrentIndex(6);
    //    cout << name.toStdString() << endl;
}

void BorrowingD::updateStartAndEndTimes()
{
    ui->startDateTime->setDateTime(QDateTime::currentDateTime());
//    if (ui->endDateTime->dateTime() < ui->startDateTime->dateTime()) ui->endDateTime->setDateTime(QDateTime::currentDateTime());
}

void BorrowingD::hasEndTimeStateChanged(int state)
{
    if (state == Qt::Checked) {
        ui->endDateTime->setDisabled(false);
    }
    else if (state == Qt::Unchecked) {
        ui->endDateTime->setDisabled(true);
    }
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

    ui->studentName->setFocus();
    ui->hasEndTime->setChecked(false);
    ui->endDateTime->setDisabled(true);
}

bool BorrowingD::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type()==QEvent::KeyPress) {
        QKeyEvent* key = static_cast<QKeyEvent*>(event);
        if ((key->key()==Qt::Key_Enter) || (key->key()==Qt::Key_Return)) {
            if (ui->studentName->hasFocus() && !labLib->isErrorMsgBoxVisible()) {
                on_Add_clicked();
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

void BorrowingD::setEquipment(QVector<Equipment *> *value)
{
    equipment = value;
}

//void BorrowingD::setBorrower(Borrower *value)
//{
//    borrower = value;
//}
