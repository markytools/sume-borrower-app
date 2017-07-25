#include "sumeborrower.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SUMEBorrower w;
    w.setMinimumWidth(1200);
    w.setMinimumHeight(600);
    w.show();

    return a.exec();
}
