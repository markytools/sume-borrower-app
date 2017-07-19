#ifndef EQUIPMENTL_H
#define EQUIPMENTL_H

#include <QWidget>

namespace Ui {
class EquipmentL;
}

class EquipmentL : public QWidget
{
    Q_OBJECT

public:
    explicit EquipmentL(QWidget *parent = 0);
    ~EquipmentL();

private:
    Ui::EquipmentL *ui;
};

#endif // EQUIPMENTL_H
