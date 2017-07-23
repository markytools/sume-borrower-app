#ifndef CUSTOMQTUI_H
#define CUSTOMQTUI_H

#include <QWidget>
#include <QStackedWidget>
#include <QGridLayout>
#include "laboratorylib.h"

class CustomQtUI
{   
protected:
    void remove(QGridLayout *layout, int row, int column, bool deleteWidgets);
    void deleteChildWidgets(QLayoutItem *item);
    void removeRow(QGridLayout *&layout, int row, bool deleteWidgets);
    void removeColumn(QGridLayout *&layout, int column, bool deleteWidgets);

public:
    CustomQtUI();
    CustomQtUI(QWidget *parent, QStackedWidget *stackWidget, LaboratoryLib *labLib);
    QStackedWidget *stackWidget;
    LaboratoryLib *labLib;
};

#endif // CUSTOMQTUI_H
