//2021051615172fujiale
//2023.04.15
#include "box.h"
#include <QMouseEvent>

Box::Box(QWidget *parent)
    : QCheckBox{parent}
{

}

bool Box::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "Box::event.";
        e->accept();
        return true;
    }
    return QWidget::event(e);
}
