#ifndef BORROWINGD_H
#define BORROWINGD_H

#include <QWidget>
#include <customqtui.h>
#include "borrowers.h"
namespace Ui {
class BorrowingD;
}

class BorrowingD : public QWidget,public CustomQtUI
{
    Q_OBJECT

public:
    explicit BorrowingD(QWidget *parent = 0);
    ~BorrowingD();

    void setEquipment(QVector<Equipment *> *value);

    void setStudents(QVector<Student *> *value);

    void resetFields();

private slots:
    void on_Cancel_clicked();

    void on_Add_clicked();

    void on_Delete_clicked();

    void on_Proceed_clicked();

private:
    QVector<Equipment *> *equipment;
    QVector<Student *> *students;
//    Borrower *borrower;
    Ui::BorrowingD *ui;
};

#endif // BORROWINGD_H
