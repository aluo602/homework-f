#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include "freeplaycw.h"

class FreePlayCW;

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
//    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    ~Window();

private slots:
    void on_actionOpen_triggered();

    void on_actionClose_triggered();

    void on_actionPause_triggered();

    void on_actionStart_triggered();

    void on_actionStop_triggered();

    void on_actionExit_triggered();

private:
    Ui::Window *ui;
    FreePlayCW *freeplaycw;
    QString fileName;
};
#endif // WINDOW_H
