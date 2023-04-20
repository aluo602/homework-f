//2021051615172fujiale
//2023.04.08
#include "label.h"
#include <QMouseEvent>

Label::Label(QWidget *parent)
    :QLabel(parent)
{
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);
}

//void Label::mouseMoveEvent(QMouseEvent *event)
//{
////    move(event->scenePosition().toPoint());

//    qDebug() << "move in" << " Label::mouseMoveEvent.";
//}

bool Label::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "Label::event.";
        e->accept();
        return true;
    }
    return QWidget::event(e);
}
