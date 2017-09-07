#ifndef SUBJECTUI_H
#define SUBJECTUI_H

#include <QWidget>

namespace Ui {
class SubjectUI;
}

class SubjectUI : public QWidget
{
    Q_OBJECT

public:
    explicit SubjectUI(QWidget *parent = 0);
    ~SubjectUI();

private:
    Ui::SubjectUI *ui;
};

#endif // SUBJECTUI_H
