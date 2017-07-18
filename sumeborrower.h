#ifndef SUMEBORROWER_H
#define SUMEBORROWER_H

#include <QMainWindow>
#include "laboratorylib.h"

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
};

#endif // SUMEBORROWER_H
