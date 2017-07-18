#include "sumeborrower.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SUMEBorrower w;
    w.show();

    return a.exec();
}
