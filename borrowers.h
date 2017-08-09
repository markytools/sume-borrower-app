#ifndef BORROWERS_H
#define BORROWERS_H

#include <QWidget>
#include <customqtui.h>
#include "confirmations.h"
#include "borrowitems.h"
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

    void setBorrower(Borrower *value);

    void updateBorrowItems(bool equipmentEnlisted);
private slots:
    void on_Back_clicked();

    void on_leftToRight_clicked();

private:

    QVector<BorrowItems *> *borrowItems;
    QVector<Student *> *students;
    Borrower *borrower;
    Ui::Borrowers *ui;
};

#endif // BORROWERS_H
