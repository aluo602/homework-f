//2021051615172fujiale
//2023.04.15
#ifndef BOX_H
#define BOX_H

#include <QCheckBox>

class Box : public QCheckBox
{
    Q_OBJECT
public:
    Box(QWidget *parent = nullptr);
    virtual bool event(QEvent *e)override;
signals:

};

#endif // BOX_H
