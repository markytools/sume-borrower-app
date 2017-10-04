#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QWidget>

namespace Ui {
class changePass;
}

class changePass : public QWidget
{
    Q_OBJECT

public:
    explicit changePass(QWidget *parent = 0);
    ~changePass();

private:
    Ui::changePass *ui;
};

#endif // CHANGEPASS_H
