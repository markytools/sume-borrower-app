#ifndef STACKEDWIDGET_H
#define STACKEDWIDGET_H
#include <QList>
#include <QWidget>
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>
#include <QVBoxLayout>

class StackedWidget : public QWidget
{
    Q_OBJECT

    public:
        StackedWidget(QWidget * = 0, Qt::WindowFlags = 0);

        void addWidget(QWidget *);
        int count();
        QWidget * currentWidget();

        void setAutoResize(bool yes);

        QSize sizeHint();
        QWidget *widget(int i) const;

    protected:
        void showCurrentWidget();

    private:
        bool auto_resize;
        int curr_index;
        QList<QWidget *> widgets;
        QVBoxLayout * layout;

    public slots:
        void setCurrentIndex(int);
};


#endif // STACKEDWIDGET_H
