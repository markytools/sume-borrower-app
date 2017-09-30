#include "stackedwidget.h"
#include <QVBoxLayout>

StackedWidget::StackedWidget(QWidget * parent, Qt::WindowFlags f) : QWidget(parent, f), curr_index(0)
{
    layout = new QVBoxLayout(this);
}

int StackedWidget::count()
    { return widgets.count(); }

void StackedWidget::addWidget(QWidget * w)
    {
        widgets.append(w);
        layout->addWidget(w);
        showCurrentWidget();
    }

QWidget * StackedWidget::currentWidget()
{
    return widgets.at(curr_index);
}

void StackedWidget::setAutoResize(bool yes)
{
    auto_resize = yes;
}

void StackedWidget::setCurrentIndex(int i)
{
    curr_index = i;
    showCurrentWidget();


    QApplication* application = static_cast<QApplication *>(QApplication::instance());
//    QRect screenGeometry = application->desktop()->screenGeometry();
//    int x = (screenGeometry.width() - currentWidget()->width()) / 2;
//    int y = (screenGeometry.height() - currentWidget()->height()) / 2;
//    window()->move(x, y);

    adjustSize();
    window()->resize(width(), height());
    window()->move(application->desktop()->screen()->rect().center() - rect().center());
}

void StackedWidget::showCurrentWidget()
    {
        if (widgets.count() > 0)
        {
            foreach (QWidget * widget, widgets)
                widget->hide();

            widgets.at(curr_index)->show();
            updateGeometry();
        }
    }

QSize StackedWidget::sizeHint()
    {
        if (auto_resize
         && count() > 0)
            return currentWidget()->minimumSize();
        else
            return QWidget::sizeHint();
}

QWidget *StackedWidget::widget(int i) const
{
    return widgets.at(i);
}
