#include "freeplaycw.h"

FreePlayCW::FreePlayCW(QWidget *parent)
    : QWidget{parent}
{
    this->resize(790,545);
    this->move(5,50);

    audioOutput = new QAudioOutput{this};
    videoWidget = new QVideoWidget{this};

    QVBoxLayout *displayLayout{new QVBoxLayout};
    displayLayout->addWidget(videoWidget);
    this->setLayout(displayLayout);
}

//void FreePlayCW::mouseDoubleClickEvent(QMouseEvent *event)
//{
//    if(!isbig) {
//        qDebug() << "big";
//        isbig = true;
//    } else{
//        qDebug() << "normal";
//        isbig = false;
//    }
//}

void FreePlayCW::opencw(QString _fileName)
{
    player = new QMediaPlayer{this};
    player->setAudioOutput(audioOutput);
    player->setVideoOutput(videoWidget);
    player->setSource(QUrl(_fileName));
}

void FreePlayCW::closecw()
{
    player->stop();
    player = new QMediaPlayer{this};
    player->setAudioOutput(audioOutput);
    player->setVideoOutput(videoWidget);
}

void FreePlayCW::startcw()
{
    player->play();
}

void FreePlayCW::pausecw()
{
    player->pause();
}

void FreePlayCW::stopcw()
{
    player->stop();
}
