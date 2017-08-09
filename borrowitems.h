#ifndef BORROWITEMS_H
#define BORROWITEMS_H

#include <QWidget>
class BorrowItems
{
public:
    BorrowItems(QString name, int borrowed, int quantity);
    QString name;
    int borrowed;
    int quantity;
};

#endif // BORROWITEMS_H
