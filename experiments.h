#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <QWidget>
#include "customqtui.h"
#include <QMessageBox>
namespace Ui {
class Experiments;
}

class Experiments : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit Experiments(QWidget *parent = 0);
    ~Experiments();

    void setSubjectName(const QString &value);

    void display();

    void showExperimentEquipments();

    void setExperimentName(const QString &value);

    void resetFields();

protected:
    bool eventFilter(QObject* obj, QEvent* event);

private slots:
    void on_Back_clicked();

    void updateExperiments();

    void on_addExperiment_clicked();

    void on_deleteExperiment_clicked();

    void on_experimentsTable_cellClicked(int row, int column);

    void on_experimentsTable_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

    void on_leftToRight_clicked();

    void on_rightToLeft_clicked();

    void on_searchEdit_textChanged(const QString &text);

private:
    QVector<Equipment*> *listEquipments;
    QVector<Equipment*> *experimentEquipments;
    QVector<Experiment*> *experiments;
    QString subjectName;
    QString experimentName;
    Ui::Experiments *ui;
    bool sameName = false;
};

#endif // EXPERIMENTS_H
