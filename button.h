//2021051615172fujiale
//2023.04.10
#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>

class Button : public QPushButton
{
    Q_OBJECT
public:
    Button(QWidget *parent = nullptr);
//    virtual void mouseMoveEvent(QMouseEvent *event)override;
    virtual bool event(QEvent *e)override;
signals:

};

#endif // BUTTON_H
