#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPaintEvent;

class Widget : public QWidget {

    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
};

#endif // WIDGET_H