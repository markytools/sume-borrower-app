#include "borrowitems.h"

BorrowItems::BorrowItems(QString name, int borrowed, int quantity)
{
    this->name = name;
    this->borrowed = borrowed;
    this->quantity = quantity;
}
