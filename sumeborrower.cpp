#include "sumeborrower.h"
#include "ui_sumeborrower.h"

SUMEBorrower::SUMEBorrower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SUMEBorrower)
{
    ui->setupUi(this);

    //initialize database
    LaboratoryLib *labLib = new LaboratoryLib();
    labLib->initDatabase();
    stackWidget = new QStackedWidget();
//    Borrowers *borrowers = new Borrowers(this);
//    borrowers->stackWidget = stackWidget;
//    Confirmations *confirmations = new Confirmations(this);
//    confirmations->stackWidget = stackWidget;
    ListEquipments *listequipments = new ListEquipments(this);
    listequipments->stackWidget = stackWidget;
    listequipments->labLib = labLib;
    Information *information = new Information(this);
    information->stackWidget = stackWidget;
//    stackWidget->addWidget(borrowers);
//    stackWidget->addWidget(confirmations);
    stackWidget->addWidget(listequipments); // Index 0
    stackWidget->addWidget(information); // Index 1

    setCentralWidget(stackWidget);

    stackWidget->setCurrentIndex(0);









//  TEST BY MARK VINCENT TY
//  DO NOT TOUCH
//    Student *student1 = new Student("may");
//    Student *student2 = new Student("april");
//    Student *student3 = new Student("june");
//    QVector<Student*> *students = new QVector<Student*>();
//    students->push_front(student1);
//    students->push_front(student2);
//    students->push_front(student3);

//    BorrowedEquipment *borrowed_equip1 = new BorrowedEquipment("SAF", 15);
//    BorrowedEquipment *borrowed_equip2 = new BorrowedEquipment("ASF", 3);
//    QVector<BorrowedEquipment*> *borrowed_equips = new QVector<BorrowedEquipment*>();
//    borrowed_equips->push_front(borrowed_equip1);
//    borrowed_equips->push_front(borrowed_equip2);

//    labLib->addBorrower("group 1", "CPE 43", "A", QDateTime::currentDateTime(), QDateTime::currentDateTime(), students, borrowed_equips);


//    QVector<BorrowedEquipment*> *borrowed_equips = labLib->getBorrowedEquipments("group 1", "CPE 43", "A");
//    for (int i = 0; i < borrowed_equips->size(); i++) {
//        BorrowedEquipment* borrowedEquip = borrowed_equips->at(i);
//        cout << "Equip Name: " << borrowedEquip->equipmentName.toStdString() << endl;
//        cout << "Quantity: " << borrowedEquip->quantity << endl;
//    }

//    QVector<Borrower*> *borrowers = labLib->getBorrowers();
//    for (int i = 0; i < borrowers->size(); i++) {
//        Borrower* borrower = borrowers->at(i);
//        cout << "Name: " << borrower->name.toStdString() << endl;
//        cout << "Subject: " << borrower->subject.toStdString() << endl;
//        cout << "Section: " << borrower->section.toStdString() << endl;
//        cout << "Start: " << borrower->start.toString().toStdString() << endl;
//        cout << "End: " << borrower->end.toString().toStdString() << endl;
//    }



//
}

SUMEBorrower::~SUMEBorrower()
{
    delete ui;
}
