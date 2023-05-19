#include "window.h"
#include "ui_window.h"
#include "freeplaycw.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QApplication>


Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);

    freeplaycw = new FreePlayCW(this);
}

Window::~Window()
{
    delete ui;
}

//打开并播放
void Window::on_actionOpen_triggered()
{
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Select one median file to open"), "/root/tmp",
                                            tr("Videos (*.avi *.mp4);;Audios(*.mp3 *.wav)"));
    if (fileName.isEmpty()){   //文件打开失败
        QMessageBox::warning(this, "Warning!", "Failed to open the file!");
    } else{    //成功打开并播放
        freeplaycw->opencw(fileName);
        freeplaycw->startcw();
        ui->actionPause->setEnabled(true);
        ui->actionStop->setEnabled(true);
        qDebug()<<"todo: loadFile(fileName)" << fileName;
    }
}

//退出播放
void Window::on_actionClose_triggered()
{
    freeplaycw->closecw();
    ui->actionStart->setEnabled(false);
    ui->actionPause->setEnabled(false);
    ui->actionStop->setEnabled(false);
}

void Window::on_actionExit_triggered()
{
    QApplication::quit();
}

//开始播放
void Window::on_actionStart_triggered()
{
    freeplaycw->startcw();
    ui->actionStart->setEnabled(false);
    ui->actionPause->setEnabled(true);
    ui->actionStop->setEnabled(true);
}

//暂停播放
void Window::on_actionPause_triggered()
{
    freeplaycw->pausecw();
    ui->actionStart->setEnabled(true);
    ui->actionPause->setEnabled(false);
    ui->actionStop->setEnabled(true);
}

//停止播放
void Window::on_actionStop_triggered()
{
    freeplaycw->stopcw();
    ui->actionStart->setEnabled(true);
    ui->actionPause->setEnabled(false);
    ui->actionStop->setEnabled(false);
}




