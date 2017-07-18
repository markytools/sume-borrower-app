#ifndef LABORATORYLIB_H
#define LABORATORYLIB_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

class LaboratoryLib
{

public:
    LaboratoryLib();
    void initDatabase();
};

#endif // LABORATORYLIB_H
