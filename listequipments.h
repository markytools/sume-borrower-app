#ifndef LISTEQUIPMENTS_H
#define LISTEQUIPMENTS_H

#include <QWidget>

namespace Ui {
class ListEquipments;
}

class ListEquipments : public QWidget
{
    Q_OBJECT

public:
    explicit ListEquipments(QWidget *parent = 0);
    ~ListEquipments();

private:
    Ui::ListEquipments *ui;
};

#endif // LISTEQUIPMENTS_H
