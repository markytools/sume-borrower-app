#ifndef LISTBORROWERS_H
#define LISTBORROWERS_H

#include <QWidget>

namespace Ui {
class ListBorrowers;
}

class ListBorrowers : public QWidget
{
    Q_OBJECT

public:
    explicit ListBorrowers(QWidget *parent = 0);
    ~ListBorrowers();

private:
    Ui::ListBorrowers *ui;
};

#endif // LISTBORROWERS_H
