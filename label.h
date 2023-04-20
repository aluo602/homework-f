//2021051615172fujiale
//2023.04.08
#ifndef LABEL_H
#define LABEL_H

#include <QLabel>

class Label : public QLabel
{
public:
    Label(QWidget *parent = nullptr);

//    virtual void mouseMoveEvent(QMouseEvent *event)override;
    virtual bool event(QEvent *e)override;

signals:

};

#endif // LABEL_H
