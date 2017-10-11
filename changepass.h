#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QWidget>
#include "customqtui.h"
namespace Ui {
class changePass;
}

class changePass : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit changePass(QWidget *parent = 0);
    ~changePass();

private slots:
    void on_back_clicked();

private:
    Ui::changePass *ui;
};

#endif // CHANGEPASS_H
