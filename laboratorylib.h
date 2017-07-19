#ifndef LABORATORYLIB_H
#define LABORATORYLIB_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <QVariant>
using namespace std;

class LaboratoryLib
{
private:
    QSqlDatabase db;
    QString commonError;
    QString sqlError;

public:
    LaboratoryLib();
    void initDatabase();
    void addEquipment(QString name, int qty, QString serial, QString property, QString status, QString location, QString remarks);
    void deleteEquipment(QString name);

    QSqlDatabase getDb() const;
    QString getCommonError() const;
    QString getSqlError() const;
};

#endif // LABORATORYLIB_H
