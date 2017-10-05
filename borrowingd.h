#ifndef BORROWINGD_H
#define BORROWINGD_H

#include <QWidget>
#include <QTimer>
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

protected:
    bool eventFilter(QObject* obj, QEvent* event);

private slots:
    void on_Cancel_clicked();

    void on_Add_clicked();

    void on_Delete_clicked();

    void on_Proceed_clicked();

    void updateStartAndEndTimes();
    void hasEndTimeStateChanged(int state);

private:
    QVector<Equipment *> *equipment;
    QVector<Student *> *students;
//    Borrower *borrower;
    Ui::BorrowingD *ui;
};

#endif // BORROWINGD_H
