#ifndef LISTBORROWERS_H
#define LISTBORROWERS_H

#include <QWidget>
#include "customqtui.h"
namespace Ui {
class ListBorrowers;
}

class ListBorrowers : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit ListBorrowers(QWidget *parent = 0);
    void updateBorrowers();
    ~ListBorrowers();

private slots:
    void on_Back_clicked();

private:
    Ui::ListBorrowers *ui;
};

#endif // LISTBORROWERS_H
