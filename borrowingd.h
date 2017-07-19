#ifndef BORROWINGD_H
#define BORROWINGD_H

#include <QWidget>
#include <customqtui.h>
namespace Ui {
class BorrowingD;
}

class BorrowingD : public QWidget,public CustomQtUI
{
    Q_OBJECT

public:
    explicit BorrowingD(QWidget *parent = 0);
    ~BorrowingD();

private:
    Ui::BorrowingD *ui;
};

#endif // BORROWINGD_H
