#ifndef LABORATORYLIB_H
#define LABORATORYLIB_H

#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include <QVariant>
#include <QVector>
#include <QDebug>
#include <QDateTime>
#include "utils.h"
#include <QtXlsx>
#include <QMessageBox>
using namespace std;

const QString DATETIMEFORMAT = "yyyy-MM-dd HH:mm:ss";

class Subject {

public:
    Subject(QString name);
    QString name;
};

class Experiment {

public:
    Experiment(QString name);
    QString name;
};

class BorrowedEquipment {

public:
    BorrowedEquipment(QString equipmentName, int toBorrow, int returned);
    QString equipmentName;
    int toBorrow;
    int returned = 0;
};

class Equipment {

private:


public:
    Equipment();
    Equipment(QString name, QString serial, QString property, QString status, QString location, QString remarks, int quantity, int borrowed);
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
    Borrower(QString name, QString subject, QString section, QString instructor, QDateTime start, QDateTime end, int hasEndTime);
    QString name;
    QString subject;
    QString section;
    QString instructor;
    QDateTime start;
    QDateTime end;
    int hasEndTime = 0;
};

class Student {

public:
    Student(QString name);
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
    QMessageBox messageBox;

//    const QString blankNoTableExcelLocation;
    const QString blankTableExcelLocation = "release/";

public:
    LaboratoryLib();
    void initDatabase();

    void addSubject(QString name);
    void addExperiment(QString subjectName, QString experimentName);
    void addEquipmentToExperiment(QString subjectName, QString experimentName, QString equipmentName);
    void removeEquipmentFromExperiment(QString subjectName, QString experimentName, QString equipmentName);
    void deleteExperiment(QString subjectName, QString experimentName);
    void deleteSubject(QString subjectName);
    QVector<Subject*> *getSubjects();
    QVector<Experiment*> *getSubjectExperiments(QString subjectName);
    QVector<Equipment*> *getExperimentEquipments(QString subjectName, QString experimentName);

    //Equipments must be valid!
    void addEquipment(QString name, int qty, QString serial, QString property, QString status, QString location, QString remarks);
    //Edit equipment with name 'name'
    void editEquipment(QString name, int qty, QString serial, QString property, QString status, QString location, QString remarks);
    void deleteEquipment(QString name);
    void deleteAllEquipments();
    void borrowEquipment(QString name); //Should only be called once
    void returnEquipment(QString name); //Should only be called once
    Equipment *getEquipment(QString name) const;
    QVector<Equipment*> *getEquipments() const;

    void addBorrower(QString name, QString subject, QString section, QString instructor, QDateTime start, QDateTime end, int hasEndTime,
                     QVector<Student*> *students, QVector<BorrowedEquipment *> *borrowed_equip);
    void deleteBorrower(QString name, QString subject, QString section, QString instructor); //*
    void setBorrowedEquipmentReturn(QString borrowerName, QString subject, QString section, QString instructor,
                                    QString equipmentName, int returned);
    int isBorrowedEquipmentReturned(QString borrowerName, QString subject, QString section, QString instructor, QString equipmentName);
    int setHasEndTime(QString borrowerName, QString subject, QString section, QString instructor, int hasEndTime);
    int hasEndTime(QString borrowerName, QString subject, QString section, QString instructor);
    QVector<BorrowedEquipment *> *getBorrowedEquipments(QString borrowerName, QString subject, QString section, QString instructor);
    QVector<Borrower *> *getBorrowers();
    QVector<Student *> *getStudents(QString borrowerName, QString subject, QString section, QString instructor);

    QSqlDatabase getDb() const;
    QString getResult() const;
    QString getSqlError() const;
    void setSqlError(const QString &value);

    bool showErrorMessageBox(bool assert, QString title, QString message); //If assert is false, QMessageBox will show up
    bool isErrorMsgBoxVisible();

    //also automatically opens file
    void exportAllDataBorrowerToExcel(QString name, QString subject, QString section, QString instructor, QString start, QString end, int hasEndTime,
                               QVector<Student*> *students, QVector<BorrowedEquipment*> *borrowedEquipments);
};

#endif // LABORATORYLIB_H
