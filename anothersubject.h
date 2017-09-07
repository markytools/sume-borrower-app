#ifndef ANOTHERSUBJECT_H
#define ANOTHERSUBJECT_H

#include <QWidget>

namespace Ui {
class AnotherSubject;
}

class AnotherSubject : public QWidget
{
    Q_OBJECT

public:
    explicit AnotherSubject(QWidget *parent = 0);
    ~AnotherSubject();

private:
    Ui::AnotherSubject *ui;
};

#endif // ANOTHERSUBJECT_H
