#ifndef FREEPLAYCW_H
#define FREEPLAYCW_H

#include <QWidget>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QAudioOutput>
#include <QVBoxLayout>

class FreePlayCW : public QWidget
{
    Q_OBJECT
public:
    explicit FreePlayCW(QWidget *parent = nullptr);
//    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    void opencw(QString _fileName);//打开
    void closecw();//退出
    void startcw();//播放
    void pausecw();//暂停
    void stopcw();//停止


signals:
private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QVideoWidget *videoWidget;
//    bool isbig = false;
};

#endif // FREEPLAYCW_H
