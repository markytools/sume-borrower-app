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
    stackWidget = new StackedWidget();
    stackWidget->setAutoResize(true);
//    Borrowers *borrowers = new Borrowers(this);
//    borrowers->stackWidget = stackWidget;
//    Confirmations *confirmations = new Confirmations(this);
//    confirmations->stackWidget = stackWidget;
    ListEquipments *listequipments = new ListEquipments(this);
    listequipments->stackWidget = stackWidget;
    listequipments->labLib = labLib;
    Information *information = new Information(this);
    information->stackWidget = stackWidget;
    information->labLib = labLib;
    HomeDisplay *homedisplay = new HomeDisplay(this);
    homedisplay->stackWidget = stackWidget;
    homedisplay->labLib = labLib;
    ListBorrowers *listborrowers = new ListBorrowers(this);
    listborrowers->stackWidget = stackWidget;
    listborrowers->labLib = labLib;
    Infopopup *infopopup = new Infopopup(this);
    infopopup->stackWidget = stackWidget;
    infopopup->labLib = labLib;
    BorrowingD *borrowingd = new BorrowingD(this);
    borrowingd->stackWidget = stackWidget;
    borrowingd->labLib = labLib;
    Borrowers *borrowers = new Borrowers(this);
    borrowers->stackWidget = stackWidget;
    borrowers->labLib = labLib;
    Confirmations *confirmations = new Confirmations(this);
    confirmations->stackWidget = stackWidget;
    confirmations->labLib = labLib;
    SubjectUI *subjectui = new SubjectUI(this);
    subjectui->stackWidget = stackWidget;
    subjectui->labLib = labLib;
    Experiments *experiments = new Experiments(this);
    experiments->stackWidget = stackWidget;
    experiments->labLib = labLib;
//    stackWidget->addWidget(borrowers);
//    stackWidget->addWidget(confirmations);

    stackWidget->addWidget(listequipments); // Index 0
    stackWidget->addWidget(information); // Index 1
    stackWidget->addWidget(homedisplay); // Index 2
    stackWidget->addWidget(listborrowers); //Index 3
    stackWidget->addWidget(infopopup); //Index 4
    stackWidget->addWidget(borrowingd); //Index 5
    stackWidget->addWidget(borrowers); //Index 6
    stackWidget->addWidget(confirmations); //Index 7
    stackWidget->addWidget(subjectui); //Index 8
    stackWidget->addWidget(experiments); //Index 9
    setCentralWidget(stackWidget);


    stackWidget->setCurrentIndex(2);










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


//    labLib->deleteAllEquipments();
//
}

SUMEBorrower::~SUMEBorrower()
{
    delete ui;
}
