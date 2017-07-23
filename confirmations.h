#ifndef CONFIRMATIONS_H
#define CONFIRMATIONS_H

#include <QWidget>
#include <customqtui.h>

namespace Ui {
class Confirmations;
}

class Confirmations : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Confirmations(QWidget *parent = 0);
    ~Confirmations();

private:
    Ui::Confirmations *ui;
};

#endif // CONFIRMATIONS_H
