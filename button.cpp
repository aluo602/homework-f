//202151615172fujiale
//2023.04.16
#include "button.h"
#include <QMouseEvent>
#include <QApplication>
#include <QDebug>
#include <QTimer>

Button::Button(QWidget *parent)
    : QPushButton{parent}
{
    setText("Exit");
    setGeometry(10, 50, 80, 30);
}

bool Button::event(QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress
){
        QTimer *timer = new QTimer(this);
        timer->start(300);

        connect(timer, &QTimer::timeout,[=](){
            timer->stop();
            qDebug() << "overtime.";
            return QWidget::event(e);
        });
        if (e->type() == QEvent::MouseButtonRelease){
            timer->stop();
        }
        mouseClick();
        return true;
    }
    return QWidget::event(e);
}

void Button::mouseClick()
{
    QApplication::quit();
}


