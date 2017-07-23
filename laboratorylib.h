#ifndef LABORATORYLIB_H
#define LABORATORYLIB_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <QVariant>
#include <QVector>
#include <QDateTime>
#include "utils.h"
using namespace std;

class Equipment {

private:


public:
    Equipment();
    int borrowed;
    int quantity;
    QString name;
    QString serial;
    QString property;
    QString status;
    QString location;
    QString remarks;

    QString toString() const;
};
//query.exec("CREATE TABLE borrower (id INTEGER PRIMARY KEY, name TEXT, subject TEXT, section TEXT, start DATETIME, end DATETIME)");
class Borrower {

public:
    QString name;
    QString subject;
    QString section;
    QDateTime start;
    QDateTime end;
};

class Student {

public:
    QString name;
};

class LaboratoryLib
{
private:
    QSqlDatabase db;
    QString result;
    QString sqlError;
    Equipment equipment;
    QVector<Equipment*> *sa;
    Equipment* equip;

public:
    LaboratoryLib();
    void initDatabase();
    void addEquipment(QString name, int qty, QString serial, QString property, QString status, QString location, QString remarks);
    //Edit equipment with name 'name'
    void editEquipment(QString name, int qty, QString serial, QString property, QString status, QString location, QString remarks);
    void deleteEquipment(QString name);
    void deleteAllEquipments();
    void borrowEquipment(QString name); //Should only be called once
    void returnEquipment(QString name); //Should only be called once
    Equipment *getEquipment(QString name) const;
    QVector<Equipment*> *getEquipments() const;

    void addBorrower(QString name, QString subject, QString section, QDateTime start, QDateTime end, QVector<Student*> *students);

    QSqlDatabase getDb() const;
    QString getResult() const;
    QString getSqlError() const;
    void setSqlError(const QString &value);
};

#endif // LABORATORYLIB_H
