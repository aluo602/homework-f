//2021051615172fujiale
//2023.04.08
#include "window.h"
#include "label.h"
#include <QtDebug>
#include <QMouseEvent>

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(200,200,200,200);

    _label = new Label{this};
}

void Window::mouseMoveEvent(QMouseEvent *event)
{

    qDebug() << "move in" << " Window::mouseMoveEvent.";
}

bool Window::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        _label->move(static_cast<QMouseEvent *>(e)->scenePosition().toPoint());
        e->accept();
    }
    return QWidget::event(e);
}

Window::~Window()
{

}

