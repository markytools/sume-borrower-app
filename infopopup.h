#ifndef INFOPOPUP_H
#define INFOPOPUP_H

#include <QWidget>

namespace Ui {
class Infopopup;
}

class Infopopup : public QWidget
{
    Q_OBJECT

public:
    explicit Infopopup(QWidget *parent = 0);
    ~Infopopup();

private:
    Ui::Infopopup *ui;
};

#endif // INFOPOPUP_H
