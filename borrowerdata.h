#ifndef BORROWERDATA_H
#define BORROWERDATA_H

#include <QWidget>
#include <QVector>
#include <QDateTime>
#include "studentdetails.h"
#include "laboratorylib.h"
class BorrowerData
{
public:
    BorrowerData();
    void reverseBorrowEquipmentOnce(QString equipmentName);
    void reverseUpdateBorrowEquipment(QString borrowedEquipmentName);
    void borrowEquipmentOnce(QString equipmentName);
    void updateBorrowEquipment(QString borrowedEquipmentName);
    void confirm();
    void clearData();
    void setEquipment(QVector<Equipment *> *value);
    QVector<Equipment *> *getEquipment() const;

    QVector<BorrowedEquipment *> *getBorrowedequipment() const;

    void setBorrowedequipment(QVector<BorrowedEquipment *> *value);

    void setStudent(QVector<Student *> *value);

    void setName(const QString &value);

    void setSubject(const QString &value);

    void setSection(const QString &value);

    void setStart(const QDateTime &value);

    void setEnd(const QDateTime &value);

    void setInstructor(const QString &value);

    QVector<Student *> *getStudent() const;

    QString getName() const;

    QString getSubject() const;

    QString getSection() const;

    QDateTime getStart() const;

    QDateTime getEnd() const;

    QString getInstructor() const;

private:
    QVector<Equipment*> *equipments;
    QVector<Borrower*> *borrower;
    QVector<BorrowedEquipment*> *borrowedequipment;
    QVector<Student*> *student;
    QString name;
    QString subject;
    QString section;
    QString instructor;
    QDateTime start;
    QDateTime end;
};

#endif // BORROWERDATA_H
