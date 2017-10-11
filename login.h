#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "customqtui.h"
namespace Ui {
class LogIn;
}

class LogIn : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    ~LogIn();

private slots:
    void on_login_clicked();

    void on_changepass_clicked();

private:
    Ui::LogIn *ui;
};

#endif // LOGIN_H
