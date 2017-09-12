#ifndef INFOPOPUP_H
#define INFOPOPUP_H

#include <QWidget>
#include "customqtui.h"

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

    void display(QString groupName, QString groupSubject, QString groupSection);

    void setGroupName(const QString &value);

    void setSubject(const QString &value);

    void setSection(const QString &value);

private slots:
    void on_Back_clicked();

private:
    Ui::Infopopup *ui;
    Borrower *borrower;
    QVector<BorrowedEquipment*> *borrowedequipment;
    QString groupName;
    QString subject;
    QString section;
};

#endif // INFOPOPUP_H
