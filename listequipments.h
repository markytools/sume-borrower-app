#ifndef LISTEQUIPMENTS_H
#define LISTEQUIPMENTS_H

#include <QWidget>
#include <QMessageBox>
#include "customqtui.h"
#include "information.h"
namespace Ui {
class ListEquipments;
}

class ListEquipments : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit ListEquipments(QWidget *parent = 0);
    void updateEquipments();
    ~ListEquipments();

private slots:
    void on_AddButton_clicked();

    void on_EditButton_clicked();

    void on_RemoveButton_clicked();

    void on_RemoveAllButton_clicked();


    void on_Back_clicked();

private:
    Ui::ListEquipments *ui;
};

#endif // LISTEQUIPMENTS_H
