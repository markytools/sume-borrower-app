#include "customqtui.h"

CustomQtUI::CustomQtUI()
{

}

CustomQtUI::CustomQtUI(QWidget *parent, QStackedWidget *stackWidget, LaboratoryLib *labLib)
{
    this->stackWidget = stackWidget;
    this->labLib = labLib;

    this->stackWidget->addWidget(parent);
}



/**
 * Helper function. Removes all layout items within the given @a layout
 * which either span the given @a row or @a column. If @a deleteWidgets
 * is true, all concerned child widgets become not only removed from the
 * layout, but also deleted.
 */
void CustomQtUI::remove(QGridLayout *layout, int row, int column, bool deleteWidgets)
{
    // We avoid usage of QGridLayout::itemAtPosition() here to improve performance.
    for (int i = layout->count() - 1; i >= 0; i--) {
        int r, c, rs, cs;
        layout->getItemPosition(i, &r, &c, &rs, &cs);
        if ((r <= row && r + rs - 1 >= row) || (c <= column && c + cs - 1 >= column)) {
            // This layout item is subject to deletion.
            QLayoutItem *item = layout->takeAt(i);
            if (deleteWidgets) {
                deleteChildWidgets(item);
            }
            delete item;
        }
    }
}

/**
 * Helper function. Deletes all child widgets of the given layout @a item.
 */
void CustomQtUI::deleteChildWidgets(QLayoutItem *item)
{
    if (item->layout()) {
        // Process all child items recursively.
        for (int i = 0; i < item->layout()->count(); i++) {
            deleteChildWidgets(item->layout()->itemAt(i));
        }
    }
    delete item->widget();
}


/**
 * Removes all layout items on the given @a row from the given grid
 * @a layout. If @a deleteWidgets is true, all concerned child widgets
 * become not only removed from the layout, but also deleted. Note that
 * this function doesn't actually remove the row itself from the grid
 * layout, as this isn't possible (i.e. the rowCount() and row indices
 * will stay the same after this function has been called).
 */
void CustomQtUI::removeRow(QGridLayout *&layout, int row, bool deleteWidgets){
    remove(layout, row, -1, deleteWidgets);
    layout->setRowMinimumHeight(row, 0);
    layout->setRowStretch(row, 0);
}

/**
 * Removes all layout items on the given @a column from the given grid
 * @a layout. If @a deleteWidgets is true, all concerned child widgets
 * become not only removed from the layout, but also deleted. Note that
 * this function doesn't actually remove the column itself from the grid
 * layout, as this isn't possible (i.e. the columnCount() and column
 * indices will stay the same after this function has been called).
 */
void CustomQtUI::removeColumn(QGridLayout *&layout, int column, bool deleteWidgets) {
    remove(layout, -1, column, deleteWidgets);
    layout->setColumnMinimumWidth(column, 0);
    layout->setColumnStretch(column, 0);
}
