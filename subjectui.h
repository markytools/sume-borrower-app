#ifndef SUBJECTUI_H
#define SUBJECTUI_H

#include <QWidget>
#include <QMessageBox>
#include "customqtui.h"
#include "experiments.h"
namespace Ui {
class SubjectUI;
}

class SubjectUI : public QWidget, public CustomQtUI
{
    Q_OBJECT

public:
    explicit SubjectUI(QWidget *parent = 0);
    ~SubjectUI();

    void updateSubjects();

private slots:
    void on_addSubject_clicked();

    void on_deleteSubject_clicked();

    void on_Back_clicked();

    void on_editSubject_clicked();

private:
    QVector<Subject*> *subjects;
    Ui::SubjectUI *ui;
};

#endif // SUBJECTUI_H
