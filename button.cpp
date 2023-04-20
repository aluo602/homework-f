//2021051615172fujiale
//2023.04.10
#include "button.h"
#include <QMouseEvent>

Button::Button(QWidget *parent)
    : QPushButton(parent)
{
//    setBackgroundRole(QPalette::Shadow);
//    setAutoFillBackground(true);
}

//void Button::mouseMoveEvent(QMouseEvent *event)
//{
//    //    move(event->scenePosition().toPoint());

//    qDebug() << "move in" << " Button::mouseMoveEvent.";
//}

bool Button::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "Button::event.";
        e->accept();
        return true;
    }
    return QWidget::event(e);
}
