#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <QObject>
#include <QAudioInput>
#include <QBuffer>
#include<QAudioOutput>
#include<QMediaPlayer>


class Multimedia : public QObject
{
    Q_OBJECT

public:
    explicit Multimedia(QObject *parent = nullptr);
    ~Multimedia();

    void playMusic(const QString& file);
    int playState = 1;


public slots:
    void startRecord();
    void stopRecord();

    void play(const QString& file);

signals:
    void double_Clicked_play();


private:
    QAudioFormat audioFormat;
    QBuffer* buffer;
    QAudioInput* audioInput;

    QAudioOutput* audioOutput;
    QMediaPlayer* player;

};

#endif // MULTIMEDIA_H
