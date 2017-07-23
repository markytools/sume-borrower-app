#ifndef BORROWERS_H
#define BORROWERS_H

#include <QWidget>
#include <customqtui.h>

namespace Ui {
class Borrowers;
}

class Borrowers : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Borrowers(QWidget *parent = 0);
    ~Borrowers();

private slots:
    void on_BorrowBotton_clicked();

private:
    Ui::Borrowers *ui;
};

#endif // BORROWERS_H
