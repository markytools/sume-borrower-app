#ifndef CONFIRMATIONS_H
#define CONFIRMATIONS_H

#include <QWidget>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <customqtui.h>
#include "borrowerdata.h"
#include "listborrowers.h"
namespace Ui {
class Confirmations;
}

class Confirmations : public QWidget,public CustomQtUI
{
    Q_OBJECT

public:
    explicit Confirmations(QWidget *parent = 0);
    ~Confirmations();


    void setBorrowerdata(BorrowerData *value);

    void display();

private slots:
    void on_Proceed_clicked();

    void on_Cancel_clicked();

private:
    QVector<BorrowedEquipment*> *filteredBorrowedEquipments;
    BorrowerData *borrowerdata;
    Ui::Confirmations *ui;
};

#endif // CONFIRMATIONS_H
