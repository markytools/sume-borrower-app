#ifndef INFOPOPUP_H
#define INFOPOPUP_H

#include <QWidget>
#include <QMessageBox>
#include <customqtui.h>
#include "listborrowers.h"
namespace Ui {
class Infopopup;
}

class Infopopup : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Infopopup(QWidget *parent = 0);
    ~Infopopup();

    QVector<BorrowedEquipment *> *getBorrowedequipment() const;

    Borrower *getBorrower() const;

    void display(QString groupName, QString groupSubject, QString groupSection, QString groupInstructor, QString startTime, QString groupEndTime);

    void setGroupName(const QString &value);

    void setSubject(const QString &value);

    void setSection(const QString &value);

    void setInstructor(const QString &value);

private slots:
    void on_Back_clicked();

    void on_Delete_clicked();

private:
    Ui::Infopopup *ui;
    Borrower *borrower;
    QVector<BorrowedEquipment*> *borrowedequipment;
    QString groupName;
    QString subject;
    QString section;
    QString instructor;
};

#endif // INFOPOPUP_H
