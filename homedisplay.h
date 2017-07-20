#ifndef HOMEDISPLAY_H
#define HOMEDISPLAY_H

#include <QWidget>

namespace Ui {
class HomeDisplay;
}

class HomeDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit HomeDisplay(QWidget *parent = 0);
    ~HomeDisplay();

private:
    Ui::HomeDisplay *ui;
};

#endif // HOMEDISPLAY_H
