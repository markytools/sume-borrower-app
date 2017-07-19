#ifndef CONFLICTSCHEDULE_H
#define CONFLICTSCHEDULE_H

#include <QWidget>

namespace Ui {
class ConflictSchedule;
}

class ConflictSchedule : public QWidget
{
    Q_OBJECT

public:
    explicit ConflictSchedule(QWidget *parent = 0);
    ~ConflictSchedule();

private:
    Ui::ConflictSchedule *ui;
};

#endif // CONFLICTSCHEDULE_H
