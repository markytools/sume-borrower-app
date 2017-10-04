#include "borrowerdata.h"

BorrowerData::BorrowerData()
{
    borrowedequipment = new QVector<BorrowedEquipment *>;
}

void BorrowerData::reverseUpdateBorrowEquipment(QString borrowedEquipmentName)
{
    for (int i = 0; i < borrowedequipment->size(); i++){
        BorrowedEquipment *equipment = borrowedequipment->at(i);
        if(equipment->equipmentName == borrowedEquipmentName){
            equipment->toBorrow = equipment->toBorrow - 1;
            break;
        }
    }
}

void BorrowerData::reverseBorrowEquipmentOnce(QString equipmentName)
{
    for (int i = 0; i < equipments->size(); i++){
        Equipment *equipment = equipments->at(i);
        if(equipment->name == equipmentName){
            equipment->borrowed = equipment->borrowed - 1;
            break;
        }
    }
}

void BorrowerData::borrowEquipmentOnce(QString equipmentName)
{
    for (int i = 0; i < equipments->size(); i++){
        Equipment *equipment = equipments->at(i);
        if(equipment->name == equipmentName){
            equipment->borrowed = equipment->borrowed + 1;
            break;
        }
    }
}

void BorrowerData::updateBorrowEquipment(QString borrowedEquipmentName)
{
    for (int i = 0; i < borrowedequipment->size(); i++){
        BorrowedEquipment *equipment = borrowedequipment->at(i);
        if(equipment->equipmentName == borrowedEquipmentName){
            equipment->toBorrow = equipment->toBorrow + 1;
            break;
        }
    }
}

void BorrowerData::clearData()
{
    borrower->clear();
    borrowedequipment->clear();
    student->clear();
    name.clear();
    subject.clear();
    section.clear();
    start.currentDateTime();
    end.currentDateTime();
}

void BorrowerData::setEquipment(QVector<Equipment *> *value)
{
    borrowedequipment->clear();
    equipments = value;
    for(int i = 0; i < equipments->size(); i++){
        BorrowedEquipment *blankborrowedequipment = new BorrowedEquipment(equipments->at(i)->name, 0, 0);
        borrowedequipment->push_front(blankborrowedequipment);
    }
}

QVector<Equipment *> *BorrowerData::getEquipment() const
{
    return equipments;
}

QVector<BorrowedEquipment *> *BorrowerData::getBorrowedequipment() const
{
    return borrowedequipment;
}

void BorrowerData::setBorrowedequipment(QVector<BorrowedEquipment *> *value)
{
    borrowedequipment = value;
}

void BorrowerData::setStudent(QVector<Student *> *value)
{
    student = value;
}

void BorrowerData::setName(const QString &value)
{
    name = value;
}

void BorrowerData::setSubject(const QString &value)
{
    subject = value;
}

void BorrowerData::setSection(const QString &value)
{
    section = value;
}

void BorrowerData::setStart(const QDateTime &value)
{
    start = value;
}

void BorrowerData::setEnd(const QDateTime &value)
{
    end = value;
}

QVector<Student *> *BorrowerData::getStudent() const
{
    return student;
}

QString BorrowerData::getName() const
{
    return name;
}

QString BorrowerData::getSubject() const
{
    return subject;
}

QString BorrowerData::getSection() const
{
    return section;
}

QDateTime BorrowerData::getStart() const
{
    return start;
}

QDateTime BorrowerData::getEnd() const
{
    return end;
}

QString BorrowerData::getInstructor() const
{
    return instructor;
}

void BorrowerData::setInstructor(const QString &value)
{
    instructor = value;
}
