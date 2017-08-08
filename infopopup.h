#ifndef INFOPOPUP_H
#define INFOPOPUP_H

#include <QWidget>
#include "customqtui.h"

namespace Ui {
class Infopopup;
}

class Infopopup : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Infopopup(QWidget *parent = 0);
    ~Infopopup();

private slots:
    void on_Back_clicked();

private:
    Ui::Infopopup *ui;
};

#endif // INFOPOPUP_H
