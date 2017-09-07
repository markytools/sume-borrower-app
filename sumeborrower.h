#ifndef SUMEBORROWER_H
#define SUMEBORROWER_H

#include <QMainWindow>
#include "laboratorylib.h"
#include <QStackedWidget>
#include "borrowers.h"
#include "confirmations.h"
#include "laboratorylib.h"
#include "listequipments.h"
#include "information.h"
#include "homedisplay.h"
#include "listborrowers.h"
#include "infopopup.h"
#include "borrowingd.h"
#include "borrowers.h"
#include <QVector>
namespace Ui {
class SUMEBorrower;
}

class SUMEBorrower : public QMainWindow
{
    Q_OBJECT

public:
    explicit SUMEBorrower(QWidget *parent = 0);
    ~SUMEBorrower();

private:
    Ui::SUMEBorrower *ui;
    QStackedWidget *stackWidget;
};

#endif // SUMEBORROWER_H
