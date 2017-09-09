#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <QWidget>

namespace Ui {
class Experiments;
}

class Experiments : public QWidget
{
    Q_OBJECT

public:
    explicit Experiments(QWidget *parent = 0);
    ~Experiments();

private:
    Ui::Experiments *ui;
};

#endif // EXPERIMENTS_H
