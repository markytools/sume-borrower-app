#ifndef LISTBORROWERS_H
#define LISTBORROWERS_H

#include <QWidget>
#include "customqtui.h"
#include <QMessageBox>
#include "infopopup.h"
#include "borrowingd.h"
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

    QSize sizeHint();

private slots:
    void on_Back_clicked();

    void on_Info_clicked();

    void on_AddButton_clicked();

//    void on_Delete_clicked();

private:
    Ui::ListBorrowers *ui;
};

#endif // LISTBORROWERS_H
