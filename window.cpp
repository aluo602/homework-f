//2021051615172fujiale
//2023.04.08
#include "window.h"
#include "label.h"
#include "button.h"
#include "box.h"
#include <QtDebug>
#include <QMouseEvent>

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(300,300,200,200);

    _label = new Label{this};
    _label->setText("event handing");
    _label->setGeometry(20, 20, 160, 110);

    _button = new Button{_label};
    _button->setText("OK");
    _button->setGeometry(70, 80, 80, 30);

    _box = new Box{_label};
    _box->setText("I have read this.");
    _box->setGeometry(0, 55, 150, 30);
}

//void Window::mouseMoveEvent(QMouseEvent *event)
//{

//    qDebug() << "move in" << " Window::mouseMoveEvent.";
//}

bool Window::event(QEvent *e)
{
    if(e->type() == QEvent::MouseMove){
        qDebug() << "move in" << "Window::event.";
        e->accept();
    }
    return QWidget::event(e);
}

Window::~Window()
{

}

