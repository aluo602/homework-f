//202151615172fujiale
//2023.04.16
#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>


class Button : public QPushButton
{
    Q_OBJECT
public:
    Button(QWidget *parent = nullptr);
    virtual bool event(QEvent *e) override;
    void mouseClick();

signals:
};

#endif // BUTTON_H
