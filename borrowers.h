#ifndef BORROWERS_H
#define BORROWERS_H

#include <QWidget>
#include <QMessageBox>
#include <customqtui.h>
#include "confirmations.h"
#include "borrowerdata.h"
#include "utils.h"
namespace Ui {
class Borrowers;
}

class Borrowers : public QWidget,public CustomQtUI
{
    Q_OBJECT

public:
    explicit Borrowers(QWidget *parent = 0);
    ~Borrowers();

    void setStudents(QVector<Student *> *value);

    void setBorrower(Borrower *&value);

    void reverseUpdateListEquipments();

    void reverseUpdateBorrowItems(int previousRow);

    void updateBorrowItems();

    void updateListEquipments(int previousRow);

//    void setBorrowerData(QVector<BorrowerData *> *value);

    void display();

    void setBorrowerdata(BorrowerData *value);

    void showExperiments();

    void showSubjects();

    void resetFields();

    void setSubjectName(const QString &value);

    void setExperimentName(const QString &value);

private slots:
    void on_Back_clicked();

    void on_leftToRight_clicked();

    void on_rightToLeft_clicked();

    void on_Proceed_clicked();

    void on_searchEdit_textChanged(const QString &text);

    void on_SubjectsTableWidget_cellClicked(int row, int column);

    void on_SubjectsTableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_ExperimentTableWidget_cellClicked(int row, int column);

    void on_ExperimentTableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_Back_2_clicked();

private:
    QString experimentName;
    QString subjectName;
    QVector <Subject *> *subjects;
    QVector <Experiment *> *experiments;
    BorrowerData *borrowerdata;
    QVector<BorrowedEquipment *> *borrowItems;
    QVector<Student *> *students;
    Borrower *borrower;
    Ui::Borrowers *ui;
};

#endif // BORROWERS_H
