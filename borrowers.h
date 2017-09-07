#ifndef BORROWERS_H
#define BORROWERS_H

#include <QWidget>
#include <QMessageBox>
#include <customqtui.h>
#include "confirmations.h"
#include "borrowerdata.h"
namespace Ui {
class Borrowers;
}

class Borrowers : public QWidget,public CustomQtUI
{
    Q_OBJECT

public:
    explicit Borrowers(QWidget *parent = 0);
    ~Borrowers();

    void setStudents(QVector<Student *> *value);

    void setBorrower(Borrower *&value);

    void reverseUpdateListEquipments();

    void reverseUpdateBorrowItems(int previousRow);

    void updateBorrowItems();

    void updateListEquipments(int previousRow);

//    void setBorrowerData(QVector<BorrowerData *> *value);

    void display();

    void setBorrowerdata(BorrowerData *value);

private slots:
    void on_Back_clicked();

    void on_leftToRight_clicked();

    void on_rightToLeft_clicked();

    void on_Proceed_clicked();

private:
    BorrowerData *borrowerdata;
    QVector<BorrowedEquipment *> *borrowItems;
    QVector<Student *> *students;
    Borrower *borrower;
    Ui::Borrowers *ui;
};

#endif // BORROWERS_H
