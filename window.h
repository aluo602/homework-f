//2021051615172fujiale
//2023.04.08
#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
class Label;
class Button;
class Box;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
//    virtual void mouseMoveEvent(QMouseEvent *event)override;
    virtual bool event(QEvent *event)override;
    ~Window();

private:
    Label *_label;
    Button *_button;
    Box *_box;
};
#endif // WINDOW_H
