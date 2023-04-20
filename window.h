//2021051615172fujiale
//2023.04.08
#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QLabel>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    virtual void mouseMoveEvent(QMouseEvent *event)override;
    virtual bool event(QEvent *event)override;
    ~Window();

private:
    QLabel *_label;
};
#endif // WINDOW_H
