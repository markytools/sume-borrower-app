#ifndef INFOPOPUP_H
#define INFOPOPUP_H

#include <QWidget>
#include <QMessageBox>
#include <customqtui.h>
#include "listborrowers.h"
#include <QCheckBox>
#include <QSignalMapper>
namespace Ui {
class Infopopup;
}

class BorrowedEquipmentData : public QObject {

public:
    QString borrowerName;
    QString subject;
    QString section;
    QString instructor;
    QString equipmentName;
    QCheckBox *returned;
    BorrowedEquipmentData();
    BorrowedEquipmentData(QString borrowerName, QString subject, QString section, QString instructor, QString equipmentName, QCheckBox *&returned);
};

class Infopopup : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Infopopup(QWidget *parent = 0);
    ~Infopopup();

    Borrower *getBorrower() const;

    void display(QString groupName, QString groupSubject, QString groupSection, QString groupInstructor, QString startTime, QString groupEndTime, int hasEndTime);

    void setGroupName(const QString &value);

    void setSubject(const QString &value);

    void setSection(const QString &value);

    void setInstructor(const QString &value);

private slots:
    void on_Back_clicked();

    void on_Delete_clicked();

    void setReturnedCheckBox(QObject *borrowedEquipmentData);

    void on_exportToExcel_clicked();

private:
    Ui::Infopopup *ui;
    Borrower *borrower;
//    QVector<BorrowedEquipment*> *borrowedequipment;
    QVector<QCheckBox*> *returnedCheckBoxes;
    QString groupName;
    QString subject;
    QString section;
    QString instructor;
    QString start;
    QString end;
    int hasEndTime;
    QString currentSelectedEquipmentName;
    QVector<Student*> *students;
    QVector<BorrowedEquipment*> *borrowedEquipments;

    bool allEquipmentsReturned();
};

#endif // INFOPOPUP_H
