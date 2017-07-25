#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include "customqtui.h"
#include "listequipments.h"
namespace Ui {
class Information;
}

class Information : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = 0);
    void edit(QString name);
    ~Information();

    void setAddMode(bool value);

    void updateEquipments();

private slots:
    void on_BackButton_clicked();

    void on_OKButton_clicked();

private:
    Ui::Information *ui;
    bool addMode = false;
};

#endif // INFORMATION_H
