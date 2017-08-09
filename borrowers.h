#ifndef BORROWERS_H
#define BORROWERS_H

#include <QWidget>
#include <customqtui.h>
#include "confirmations.h"
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

private slots:
    void on_Back_clicked();

    void on_leftToRight_clicked();

private:
    QVector<Student *> *students;
    Borrower *borrower;
    Ui::Borrowers *ui;
};

#endif // BORROWERS_H
